#include<iostream>
#include<string>
using namespace std;

class car{

   
    private:
        string brand;
        string modle;
        double price;

    static int totalcars;
    public:
        car(string B, string M, double P){
            brand=B;
            modle=M;
            price=P;
            totalcars++;
        };
    friend void displaydetails(const car&c);
    static int gettotalcars(){

        return totalcars;
    }

    };
int car::totalcars=0;
 
void displaydetails( const car&c){
    cout<<"enter brand name: "<<c.brand<<endl;
    cout<<"enter modle name: "<<c.modle<<endl;
    cout<<"enter price: "<<c.price<<endl;

};


int main(){
 car c1("audi_pune", "A", 10000);
 car c2("bmw _banglore", "B", 13000);

 cout<<"car1 details:"<<endl;
 displaydetails(c1);
 cout<<endl;

 cout<<"car2 details:"<<endl;
 displaydetails(c2);
 cout<<endl;

 cout<<"Total No of car:"<<car::gettotalcars()<<endl;
  return 0;
};

 


    