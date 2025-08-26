// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Student {
    public:
        int x;
        Student() {
            cout << "Enter the roll number: ";
            cin >> x;
        }

       
        void display() {
            cout << "Roll number is: " << x << endl;
        }
};

int main() {
    Student S1;  
    S1.display(); 
    return 0;
}
