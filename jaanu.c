#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { // virtual function for dynamic binding
        cout << "Base class show" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show" << endl;
    }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show(); // Calls Derived's show() due to dynamic binding
    return 0;
}
```




```

