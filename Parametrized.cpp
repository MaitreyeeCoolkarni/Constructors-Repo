#include <iostream>
using namespace std;

class construct {
public:
    int a, b;

   
    construct(int m, int n) {
        a = m;
        b = n;
    }

    void putdata() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    construct c1(20, 20);  
    c1.putdata();    
    return 0;
}
