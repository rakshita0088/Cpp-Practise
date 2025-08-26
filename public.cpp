#include<iostream>
using namespace std;
class A{
    public:
        void show(){
        cout<<"This is base class"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"This is derived class"<<endl;
    }
};

int main(){
    B obj;
    obj.show();
    obj.display();

    return 0;

}
 