#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<iostream> 
using namespace std;
const int pi=3.14;
class circle{ 
    public: 
    double perimeter_static(){ 
        return 2*pi*20; 
    } 
    virtual double perimeter(){ 
        return 2*pi*4;
    } 
};

class semicircle: public circle{
    public: 
    double perimeter(){ 
         return pi*4; 
    } 
}; 
const int calls= 100000000; 
int main(){ 
    circle* c = new semicircle(); 
    int start_static =clock(); 
    for(int i=0; i<calls; i++){ 
        c->perimeter_static();
    } 
    int stop_static= clock(); 
    cout<<"Execution time for statically bound method is: "<<(stop_static-start_static)/(double(CLOCKS_PER_SEC))*1000<<" milli seconds."<< endl;
    int start_dynamic =clock(); 
    for(int i=0; i<calls; i++){ 
        c->perimeter(); } 
        int stop_dynamic= clock(); 
        cout<<"Execution time for dynamically bound method is: "<<(stop_dynamic-start_dynamic)/(double(CLOCKS_PER_SEC))*1000<<" milli seconds."<< endl; 
        return 0; 
}