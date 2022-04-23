#include<bits/stdc++.h> 
using namespace std;
#define ARR_SIZE 10
 
int Fill_array(double arr[], int size){ 
    memset(arr,0,size);
    cout << "You may enter up to " << size << " values." << endl; cout << "Enter value number 1 (or type \"q\" when finished): "; 
    int count = 0;
    while (count < size && cin >> arr[count])
    {
        if (++count < size)
        cout << "Enter value number " << count + 1 << " (or type \"q\" when finished): ";
    }
    return count;
}

void Show_array(const double arr[], int size){ 
    cout << endl;
    for (int i = 0; i < size; i++)
         cout << "Element number " << i + 1 << " = " << arr[i] << endl; 
         cout << endl;
    return;
}

void Reverse_array(double arr[], int size){ 
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }
    return;
}


int main(void){
    double arr[ARR_SIZE];
    int entries = Fill_array(arr, ARR_SIZE);

    // show, reverse, show, reverse all but first/last elements, show cout << endl << "Here is the array:" << endl;
    Show_array(arr, entries);
    cout << "Let's reverse the array." << endl; 
    Reverse_array(arr, entries);
    cout << "Here is our new array:" << endl; 
    Show_array(arr, entries);
    cout << "Let's reverse all except the first and last elements." << endl;
    
    Reverse_array(arr + 1, entries - 2);
    cout << "Here is our final array:" << endl; 
    Show_array(arr, entries);

    return 0;
}
