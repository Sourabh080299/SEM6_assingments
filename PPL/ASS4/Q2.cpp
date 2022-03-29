#include<iostream> 
#include<stdio.h> 
using namespace std; 
class A{ 
    public: 
    virtual void m(){ 
        cout<<"Method calling from class A"<<endl; 
    } 
    A(){ 
        m();
    } 
}; 

class B: public A{ 
    public: 
    void m(){ cout<<"Method calling from class B"<<endl; } 
}; 

class C: public B{ 
    public: 
    void m(){ cout<<"Method calling from class C"<<endl; 
    } 
};

int main(){ 
    A* a= new B();
    a->m();
    a=new C(); 
    a->m(); 
    return 0; 
}