#include <iostream>
using namespace std;
int count = 0;

class Date {
public:
    int d = 26;
    int m = 8;
    int y = 2025;
    
    ~Date() {
        cout << "Destructor called:" << endl;
    }
};

int main() 
{
    Date d1, d2, d3, d4;
    
    int i;
    for(i = 0; i < 4; i++)
    {
        Date d1;
    }
    
    return 0;
}
