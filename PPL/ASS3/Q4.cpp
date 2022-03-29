#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){ 
    ifstream file;
    file.open("temp.txt");
    string name,number;
    while(file >>name >>number){
         cout<<name<<" "<<number<<"\n";
    }
    file.close();
return 0;
}

