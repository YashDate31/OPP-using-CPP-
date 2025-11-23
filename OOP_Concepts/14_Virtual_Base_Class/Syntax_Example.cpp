#include <iostream>
using namespace std;

class A {
public:
    int a;
};

// Virtual inheritance to prevent duplicate copies of A
class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    
    // Without virtual inheritance, this would be ambiguous (obj.B::a or obj.C::a)
    obj.a = 10; 
    
    cout << "Value of a: " << obj.a << endl;

    return 0;
}
