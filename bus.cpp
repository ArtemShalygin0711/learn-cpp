#include <iostream>
#include <queue>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <vector>
using namespace std;

class Bus {
private:
	priority_queue<pair<int, int>> pd;
	map<int, int> m;
	map<int, int> amountpassengers;
	set<int> s;
	queue<int> onreis;
	deque<int> conservate;
	deque<int> history;
public:
	void add_bus(int route, int passengers, int capacity) {
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
	void dispatch_bus() {
		onreis.push(pd.top().second);
		if (pd.top().second < 7) {
			conservate.push_back(pd.top().second);
		}
	}
	void complete_trip() {
		m[onreis.front()] += 1;
		history.push_back(onreis.front());
		onreis.pop();
	}
	void cancel_route(int route) {
		m.erase(route);
		vector<int> v(s.begin(), s.end());
		for (int i = 0; i < s.size(); i++) {
			if (v[i] == route) {
				s.erase(i);
			}

		}
		priority_queue<pair<int, int>> pd2;
		while (!pd.empty()) {
			if (pd.top().second != route) {
				pd2.push(pd.top());
				pd.pop();
			}
		}
		pd = pd2;
		for (int i = 0; i < history.size(); i++) {
			if (history[i] == route) {
				history.erase(remove(history.begin(), history.end(), i), history.end());
			}

		}
	}
	void get_most_popular_routes() {
		int m1=0;
		int key;
		for (auto c : m) {
			if (c.second > m1) {
				m1 = c.second;
				key = c.first;
			}
		}
		cout << "top one: " << key;
	}
	void get_route_statistics(int route) {
		cout << "\namount of trips " << m[route] << endl;
		cout << "middle " << amountpassengers[route] / m[route] << endl;
	}
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
