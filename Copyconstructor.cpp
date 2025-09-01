#include <iostream>
using namespace std;

class Student{
  string name;
  int age;
  int year;
  char divi;
  
  public:
  Student(string n,int a,int y,char d){
    name=n;
    age=a;
    year=y;
    divi=d;
  }  
    
  //Copy Constructor
  Student(const Student &s){
      name=s.name;
      age=s.age;
      year=s.year;
      divi=s.divi;
      cout<<"Copy constructor called!"<<endl;
  }
    
  void display(){
    cout<<"Name:"<<name<<" Age:"<<age<<" Year:"<<year<<" Division:"<<divi<<endl;
  }
};



int main() 
{
  // Create object using parameterized constructor
    Student s1("Maitreyee", 20, 1, 'A');
    cout << "Details of s1:" << endl;
    s1.display();

    // Create object using copy constructor
    Student s2(s1);
    cout << "Details of s2 (copied from s1):" << endl;
    s2.display();
 
  return 0;
}
