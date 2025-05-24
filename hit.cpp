#include <iostream>
using namespace std;

class Person {
private:
    string name; // private data member

public:
    void setName(string n) {
        name = n;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p;
    p.setName("Alice");
    p.display();
    return 0;
}

