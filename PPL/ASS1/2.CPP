#include<iostream>
#include<stdlib.h>
using namespace std;
class account {
public:
int acc_num,acc_type,balance=0,amount=0;
char customer_name[20];
void getData(int type){
cout<<"Enter the name of the Customer: ";
cin>>customer_name;
cout<<"Enter the Account number: ";
cin>>acc_num;
cout<<"Enter Account Balance: ";
cin>>balance;
acc_type=type;
}
void display(){
cout<<"Your account balance is: "<<balance<<endl;
}
void deposit(){
cout<<"Enter the amount you want to deposit: ";
cin>>amount;
balance=balance+amount;
display();
}
void withdraw(){
cout<<"Enter the amount you want to withdraw: ";
cin>>amount;
if(amount>balance){
cout<<"Insufficient Funds\n";
}
else{
balance=balance-amount;
}
display();
}
};
class current: public account{
public:
void penalty(){
if(balance<500 && acc_type==2){
cout<<"Balance is less than 500 so penalty will be imposed.";
balance=balance-20;
if(balance<0) balance=0;
display();
}
}
};
class savings: public account{
public:
void interest(){
int t;
cout<<"Enter time interval in years: ";
cin>>t;
balance=balance*(1+2*t);
display();
}
};
int main(){
int type;
cout<<"\nEnter the Account Type: \n1.Savings Account \n2.Current Account\n";
cin>>type;
int ch;
if (type==1){
savings ac;
ac.getData(type);
cout<<"1.Deposit Funds\n"
<<"2.Withdraw Funds\n"
<<"3.Show Balance\n"
<<"4.Calculate Interest\n"
<<"5.Exit\n";
while(true){
cout<<"\nEnter choice: ";
cin>>ch;
switch (ch)
{
case 1:
ac.deposit(); break;
case 2:
ac.withdraw(); break;
case 3:
ac.display();
break;
case 4:
ac.interest();
break;
case 5:
exit(0);
default:
break;
}
}
}else{
current ac;
ac.getData(type);
cout<<"1.Deposit Funds\n"<<"2.Withdraw Funds\n"
<<"3.Show Balance\n"<<"4.Exit\n";
while(true){
cout<<"\nEnter choice: ";
cin>>ch;
switch (ch)
{
case 1:
ac.deposit(); break;
case 2:
ac.withdraw();
ac.penalty(); 
break;
case 3:
ac.display();
break;
case 4:
exit(0);
default:
break;
}
}
}
return 0;
}
