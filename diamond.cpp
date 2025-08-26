#include<iostream>
using namespace std;

    class A{
        public:
        A(){
            cout<<"base class conctructor"<<endl;
        }
        void show(){
            cout<<"this is base class"<<endl;
        }
    };
    class B:virtual public A{
        public:
        B(){
            cout<<"derived classB constructor"<<endl;
        }
        void display(){
            cout<<"this is class B"<<endl;
        }
    };
    class C:virtual public A{
        public:
        C(){
            cout<<"derived classC constructor"<<endl;
        }
        void display(){
            cout<<"this is class C"<<endl;
        }
    };
    class D:virtual public B,virtual public C{
        public:
        D(){
            cout<<"derived classD constructor"<<endl;
        }
        void display(){
            cout<<"this is class D"<<endl;
        }
    };
    int main(){
        D obj;
        obj.show();
        return 0;

    }