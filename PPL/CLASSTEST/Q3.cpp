#include <iostream> 
using namespace std;
 
#define SIZE 10

int main(){
    double arr[SIZE];
    double donation_val, sum = 0.0; int cnt = 0, i = 0;
    cout << "Enter donation values: ";
    for(; i < SIZE && cin >> donation_val; i++){ 
        arr[i]=donation_val;
        sum+=donation_val;
        cout<<"Enter donation values: ";
    }
    if (i != 0){
        double avg = sum/i;
        for(int j = 0; j < i; j++){ 
            if (arr[j] > avg)
            cnt++;
        }
        cout<<"Average = "<<avg<<"\n";
        cout<<"Numbers larger than average = "<<cnt<<'\n';
    }
    else
        cout<<"No data entered."<<endl;

    return 0;
}
