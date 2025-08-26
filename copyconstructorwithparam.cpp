#include<iostream>
using namespace std;

class A{
    int a;
    int b;
    int *c;
    int *d;
    public:
     A(int e, int f, int*g, int*h){
        a=e;
        b=f;
        c=new int(*g);
        d=new int(*h);

        cout<<"this is parametized constructor"<<endl;
     }
     A(const A &obj){
        a=obj.a;                              
        b=obj.b;
        c=new int(*(obj.c));
        d=new int(*(obj.d));

        cout<<"this is copy constructor"<<endl;


     }

     ~A(){
        delete c;
        delete d;
        cout<<"delete"<<endl;

     }
     void display(){
        cout<<"a="<<a<<"b="<<b<<"*c="<<*c<<"*d="<<*d<<endl;
     }
};

int main(){
    int a=10, b=20;
    A obj(10,20,&a,&b);
    obj.display();
    A obj1=obj;
    obj1.display();


    return 0;
}



