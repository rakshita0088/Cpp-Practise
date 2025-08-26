#include<iostream>
using namespace std;


template<typename T>
T getspeed(T Speed1, T Speed2){
    return(Speed1 > Speed2) ? Speed1 : Speed2;
}

int main(){
    int carSpeed=120;
    int truckSpeed=80;
    cout<<"Speed:"<<getspeed(carSpeed, truckSpeed)<<endl;
    float carspeed=120.4;
    float truckspeed=80.4;
    cout<<"Speed:"<<getspeed(carspeed, truckspeed)<<endl;
    return 0;

}