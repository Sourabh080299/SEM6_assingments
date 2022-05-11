#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A's Constructer called"<<endl;
    }
};
class B :public A{
    public:
    B(){
        cout<<"B's Constructer called"<<endl;
    }
};
int main(){
    B a;
}