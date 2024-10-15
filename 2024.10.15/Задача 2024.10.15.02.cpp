#include <iostream>
#include <string>

using namespace std;

class Example {
    int mDigit = 0;
    string mName;
public:
    void GetDigit(int Digit) { mDigit = Digit; }
    int GetDigit() { return mDigit; }
    void GetName(string Name) { mName = Name; }
    string GetName() { return mName; }
    Example(int Digit, string Name):mDigit(Digit), mName(Name) {};
    ~Example() {};
};

int main() {}