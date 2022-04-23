#include <iostream> 
using namespace std;

int main(){
    int a,b; int sum=0;
    cout<<"Enter smaller number: "; cin>>a;
    cout<<"Enter larger number: "; cin>>b;
    if(a>b){
        cout<<"Invalid inputs.";
    }
    else{
        for(int i=a;i<=b;i++){ 
            sum+=i;
        }
        cout<<"Sum = "<<sum;
    }
    return 0;
}
