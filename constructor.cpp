#include<iostream>
using namespace std;

class A{
    private:
       int *data;
    public:
       A(int value){
        data=new int;
        *data=value;
         cout<<"memory allocate"<<*data<<endl;
       }
       ~A(){
            delete data;
            cout<<"memory deallocate"<<*data<<endl;
       }

        void showData(){
            cout<<"Value:"<<*data<<endl;
        }
 };

 int main(){
    A obj(40);
    obj.showData();
    return 0;
 }