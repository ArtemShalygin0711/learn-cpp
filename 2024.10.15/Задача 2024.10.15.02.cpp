#include <iostream>
#include <string>

using namespace std;

class Example {
    int mDigit = 0;
    string mName;
public:
    
    Example(int Digit, string Name):mDigit(Digit), mName(Name) {};
    ~Example() {};
};

int main() {}