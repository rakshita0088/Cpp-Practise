#include<iostream>
using namespace std;

class Student{
    private:
      string name;
      int age;

    public:
      Student(){
        name="rak";
        age=9;
        cout<<"default constructor"<<endl;
    
      }
      Student(string n, int a){
        name=n;
        age=a;
        cout<<"parameterized constructor"<<endl; 

      }

void display(){
    cout<<"Name:"<<name<<"age:"<<age<<endl;
}
};
int main(){
    Student s1;
    s1.display();

    Student s2("Rakshita",21);
    s2.display();

    return 0;
}