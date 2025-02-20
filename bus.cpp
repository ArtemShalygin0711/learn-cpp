//библиотеки
#include <iostream>
#include <queue>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <vector>
using namespace std;
//класс автобус
class Bus {
private:
	//структуры класса
	//очередь, которая сохраняет автобусы в приоритетном порядке в формате нмер автобуса - число пассажиров
	priority_queue<pair<int, int>> pd;
	//сохраняет количество запусков маршрутов и номера этих маршрутов
	map<int, int> m;
	//сохраняет общее количество перевезенных пассажиров на каждом автобусе
	map<int, int> amountpassengers;
	//сохраняет номера всех маршрутов
	set<int> s;
	//очередь которая в приоритетном порядке сохраняет автобус для дальнейшей отправки на рейс
	queue<int> onreis;
	//очередь которая сохраняет автобусы для ожидания отправки на рейс
	deque<int> conservate;
	//сохраняет историю завершенных рейсов
	deque<int> history;
public:
	//функция для добавления автобусов
	void add_bus(int route, int passengers, int capacity) {
		//условие проверяет загруженность автобуса
		if (passengers > capacity * 0.9) {
			pd.push({ passengers*10,route });
		}
		else {
			pd.push({ passengers,route });
		}
		m[route] += 1;
		amountpassengers[route] = passengers;
		if (m[route] > 50) {
			s.insert(route);
		}
	}
	//отправка автобуса в рейс
	void dispatch_bus() {
		onreis.push(pd.top().second);
		//условие на проверку загруженности автобуса для добавления в лист ожидания
		if (pd.top().second < 7) {
			conservate.push_back(pd.top().second);
		}
	}
	//завершение рейса
	void complete_trip() {
		m[onreis.front()] += 1;
		//добавление завершенного рейса в историю
		history.push_back(onreis.front());
		onreis.pop();
	}
	//галя отмена
	void cancel_route(int route) {
		m.erase(route);
		//перевод структуры данных set в вектор для далььнейшей итерации
		vector<int> v(s.begin(), s.end());
		//цикл на нахождение нужного рейса для его отмены
		for (int i = 0; i < s.size(); i++) {
			if (v[i] == route) {
				s.erase(i);
			}

		}
		priority_queue<pair<int, int>> pd2;
		while (!pd.empty()) {
			//обратный перевод вектора в set
			if (pd.top().second != route) {
				pd2.push(pd.top());
				pd.pop();
			}
		}
		pd = pd2;
		//цикл для удаления автобуа из истории
		for (int i = 0; i < history.size(); i++) {
			if (history[i] == route) {
				history.erase(remove(history.begin(), history.end(), i), history.end());
			}

		}
	}
	//получение самых популярных маршрутов
	void get_most_popular_routes() {
		int m1=0;
		int key;
		//цикл для получения топа рейсов
		for (auto c : m) {
			if (c.second > m1) {
				m1 = c.second;
				key = c.first;
			}
		}
		cout << "top one: " << key;
	}
	//статистика
	void get_route_statistics(int route) {
		cout << "\namount of trips " << m[route] << endl;
		cout << "middle " << amountpassengers[route] / m[route] << endl;
	}
	//функция для производства, показывает, что загрузили в прогу и на чем держита благополучие и благосостояние моей нервной системы
	void print() {
		cout << "pd\n";
		while (!pd.empty()) {
			cout << pd.top().first << " " << pd.top().second << endl;
			pd.pop();
		}
		cout << "m\n";
		for (auto c : m) {
			cout << c.first << " " << c.second << endl;
		}
		cout << "amountpassengers\n";
		for (auto c : amountpassengers) {
			cout << c.first << " " << c.second << endl;
		}
		cout << "s\n";
		vector<int> a(s.begin(), s.end());
		for (int c = 0; c < a.size(); c++) {
			cout << a[c] << endl;
		}
		cout << "onreis\n";
		for (int c = 0; c < onreis.size(); c++) {
			cout << onreis.front() << endl;
			onreis.pop();
		}
		cout << "conservate\n";
		for (int c = 0; c < conservate.size(); c++) {
			cout << conservate.front() << endl;
			conservate.pop_front();
		}
		cout << "history\n";
		for (int c = 0; c < history.size(); c++) {
			cout << history.front() << endl;
			history.pop_front();
		}
	}
};
//функция мэйн, она все запускает, запускает эту колесницу смерти
int main() {
	Bus bus = Bus();
	bus.add_bus(122, 30, 40);
	bus.add_bus(122, 40, 40);
	bus.add_bus(12, 10, 49);
	bus.add_bus(22, 3, 40);
	bus.add_bus(2, 9, 45);
	bus.dispatch_bus();
	bus.complete_trip();
	bus.get_most_popular_routes();
	bus.get_route_statistics(122);
	bus.print();
}
