#include<iostream>
using namespace std;

template<typename T>
class vehicle{
    public:
       string name;
       T engineCapacity;


    vehicle(string n, T capacity){
        name=n;
        engineCapacity=capacity;
    }

    void display(){
        cout<<"Vehicle:"<<name<<"Engine Capacity:"<<engineCapacity<<endl;
    }
};

int main(){
    vehicle<int>car("BMW", 15);
    vehicle<float>Bike("Bullet",1490.5);

    car.display();
    Bike.display();

    return 0;

}