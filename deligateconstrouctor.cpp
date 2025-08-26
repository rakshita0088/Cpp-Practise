#include<iostream>
using namespace std;


class A{
    private:
    string name;
    int age;
     public:
     A(string n, int a){
        name=n;
        age=a;
        {
            cout<<"name:"<<name<<"age:"<<age<<endl;
        }
     }

     A(string n):A(n,22){
        cout<<"n"<<endl;
     }

     A():A("rak"){
        cout<<"rak"<<endl;
     }

     void display(){
        cout<<"deligate constructor"<<endl;
     }
};

int main(){
    A obj;
    obj.display();
    return 0;
}