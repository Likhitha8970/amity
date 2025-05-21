#include <iostream>
using namespace std;

template <typename T>
class Pair {
public:
    T first, second;
    Pair(T a, T b) : first(a), second(b) {}
    void display() {
        cout << first << " " << second << endl;
    }
};

int main() {
    Pair<int> p1(1, 2);
    p1.display();
    Pair<string> p2("Hello", "World");
    p2.display();
    return 0;
}
```

