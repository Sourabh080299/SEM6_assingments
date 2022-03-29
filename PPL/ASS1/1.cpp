
#include<bits/stdc++.h>
using namespace std;
class DM{
public:
double meter, centimeter;
};
class DB{
public:
double feet,inches;
};
void add(DM dm, DB db){
double d1,d2;
cout<<"Enter the value of meter and centimeter: ";
cin>>dm.meter>>dm.centimeter;
cout<<"\nEnter the value of feet and inches: ";
cin>>db.feet>>db.inches;
dm.meter=dm.meter+(db.feet)*0.305;
cout<<"\nSummation is "<<dm.meter <<" meters and ";
dm.centimeter=dm.centimeter+(db.inches)*2.54;
cout<<dm.centimeter<<" centimeters";
}
int main(){
DM dm; //Creating Objects
DB db;
add(dm,db);
}
