#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class staff{
protected:
    int code;
    char name[30];
    public:
    void staff_info(const char *n, int c){
        strcpy(name,n);
        code=c;
    }
};
class education: public staff{
    protected:
    char highest[50],professional[50];
    public:
    void set_quali(const char *h,const char *p){
        strcpy(highest,h);
        strcpy(professional,p);
    }
};
class teacher: public education{
    protected:
    char subject[50],publication[50];
    public:
    void set_teacher(const char *s, const char *p){
        strcpy(subject,s);
        strcpy(publication,p);
    }
    void show(){
        cout<<"Name "<<setw(8)<<"Code"<<setw(15)<<"Subject"<<setw(22)<<"Publication"<<setw(60)<<"Highest qualification in general education"<<setw(40)<<"Highest professional qualification"<<endl
        <<name<<setw(8)<<code<<setw(20)<<subject<<setw(30)<<publication<<setw(25)<<highest<<setw(60)<<professional<<endl;
    }
};
class officer: public education{
    protected:
    char grade[100];
    public:
    void set_officer(const char *g){
        strcpy(grade,g);
    }
    void show()
    {
        cout<<"Name "<<setw(8)<<"Code"<<setw(15)<<"Catagory"<<setw(60)<<"Highest qualification in general education"<<setw(40)<<"Highest professional qualification"<<endl<<name<<setw(4)
        <<code<<setw(25)<<grade<<setw(25)<<highest<<setw(65)<<professional<<
        endl<<endl;
    } 
};
class typist: public staff{
    protected:
    float speed;
    public:
    void set_typist(float s){
        speed=s;
    }
};
class regular: public typist{
    protected:
    float wage;
    public:
    void set_regular(float w){
    wage=w; 
}
void show()
{
    cout<<"Name "<<setw(16)<<"Code"<<setw(15)<<"Speed"<<setw(15)<<"Wage"<<endl<<name<<setw(16)<<code
    <<setw(16)<<speed<<setw(16)<<wage<<endl<<endl;
}
};
class casual: public typist{
    protected:
    float wage;
    public:
    void set_casual(float w){
        wage=w; 
    }
    void show()
    {
        cout<<"Name "<<setw(16)<<"Code"<<setw(15)<<"Speed"<<setw(15)<<"Wage"<<endl<<name<<setw(16)<<code
        <<setw(16)<<speed<<setw(16)<<wage<<endl<<endl;
    }
};
int main(){
    teacher t;
    cout<<"\nAbout teacher: "<<endl;
    t.staff_info("Aman",12);
    t.set_quali("BA","Diploma in Lets Code");
    t.set_teacher("Computer", "Lets C through fun");
    t.show();
    cout<<endl;
    t.staff_info("Kush",20);
    t.set_quali("BE","Masters in Geography");
    t.set_teacher("Social Studies", "How the world has changed");
    t.show();
    officer o;
    o.staff_info("Abhishek",14);
    o.set_quali("B.tech","Masters in Structural Engineering");
    o.set_officer("First class Officer");
    cout<<"\n\nAbout Officer: "<<endl;
    o.show();
    regular rt;
    rt.staff_info("Yash",16);
    rt.set_typist(200.5);
    rt.set_regular(2000);
    cout<<"\n\nAbout Regular Typist: "<<endl;
    rt.show();
    casual ct;
    ct.staff_info("Jay",15);
    ct.set_typist(78.5);
    ct.set_casual(4000);
    cout<<"\n\nAbout Casual Typist: "<<endl;
    ct.show();
}
