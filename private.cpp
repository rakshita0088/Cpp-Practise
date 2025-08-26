#include<iostream>
using namespace std;
 class A{
    private:
      int var=10;

 };

 class B:public A{
    public:
     void display(){
      cout<<"this is derived class"<<endl;
     }
 };

 int main(){
    B obj;
    obj.display();
    return 0;
 };