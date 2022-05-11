#include <iostream>
using namespace std;
class A{
    public:
    static int k;
    static void setk(){
        int r;
        cout<<"k:"<<k<<endl;
        cout<<"enter number:";
        cin>>r;
        k=r;
    }
};
int A:: k=5;
int main(){
    A x,y;
    x.setk();
    y.setk();
    cout<<A::k<<endl;
    return 0;
}
