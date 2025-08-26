#include<iostream>
using namespace std;

template<typename T>
class Engine{
    public:
        void info(){
            cout<<"Generic template"<<endl;
        }
};

template< >
class Engine<int>{
    public:
        void info(){
            cout<<"Specialized template int"<<endl;
        }
};

template< >
class Engine<float>{
    public:
        void info(){
            cout<<"Specialized template float"<<endl;
        }
};


int main(){
    Engine<string> e1;
    Engine<int> e2;
    Engine<float> e3;

    e1.info();
    e2.info();
    e3.info();

    return 0;

}
