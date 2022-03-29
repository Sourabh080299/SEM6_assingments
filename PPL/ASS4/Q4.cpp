#include<iostream>
using namespace std;
template <class T>
class AddElements{
    public:
    T element;
    AddElements(T args){
        element=args;
    }
    T add(T ele){
        return (element+ele);
    }
};

// Class Template Specialization
template <> class AddElements <string>{
    public:
    string element;
    AddElements(string args){
       element = args;
    }
    string concatenate(string ele){
    return (element + ele);
    }
};
int main(){
    AddElements<int> a(4);
    cout<<"Integer addition is: "<<a.add(7)<<endl;
    AddElements<float> b(3.763);
    cout<<"Float addition is: "<<b.add(2.45)<<endl;
    AddElements<string> c("i am a");
    cout<<"String addition is: "<<c.concatenate(" Coder")<<endl;
    return 0;
}
