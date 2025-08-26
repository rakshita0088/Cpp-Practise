#include<iostream>
using namespace std;

template<typename T>
class Anika{
    public:
       T name;

           Anika(T a){
              name=a;
              cout<<"name:"<<name<<endl;
           }
        void info(){
            cout<<"Generic template"<<endl;
        }
};

template< >
class Anika<string>{
        public:
           string nameb;
           string namea;

               Anika(string B, string A){
                  nameb=B;
                  namea=A;
                  cout<<"name:"<<nameb<<endl;
                  cout<<"name:"<<namea<<endl;
            }

        void info(){
            cout<<"Specialized template"<<endl;
        }
};



int main(){
    Anika<string> a1 ("Anikaa","Rakshita");
    Anika<string> a2 ("Bhagyalakshmi", "Anil");

    a1.info();
    a2.info();

    return 0;

}
