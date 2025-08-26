#include<iostream>
using namespace std;

class Student{
    private:
       int id;
       string name;

    public:
       void setDetails(int stdId, string stdName){
        id=stdId;
        name=stdName;
       }
    void displayDetails(){
        cout<<"enter Id:"<<id<<endl;
        cout<<"enter Name:"<<name<<endl;
    }
};

int main(){
    Student std;

    std.setDetails(80,"Rakshita");
    std.displayDetails();
    return 0;

}
