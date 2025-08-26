#include<iostream>
#include<string>
using namespace std;

class employee{

    private:
        string name;
        int id;
        int salary;

    static int employeedetails;
    public:
        employee(string N, int I, int S){
            name=N;
            id=I;
            salary=S;
            employeedetails++;
        };
    friend void displaydetails(const employee&e);
    static int getemployeedetails(){
        return employeedetails;
    }
};

int employee::employeedetails=0;
 void displaydetails( const employee&e){
    cout<<"enter employee name: "<<e.name<<endl;
    cout<<"enter employee id: "<<e.id<<endl;
    cout<<"enter employee salary: "<<e.salary<<endl;

};
int main(){
 employee e1("rak", 20, 10000);
 employee e2("shr", 10, 13000);

 cout<<"employee1 details:"<<endl;
 displaydetails(e1);
 cout<<endl;

 cout<<"cemployee2 details:"<<endl;
 displaydetails(e2);
 cout<<endl;
 cout<<"Total No of car:"<<employee::getemployeedetails()<<endl;
  return 0;
};

 


    
