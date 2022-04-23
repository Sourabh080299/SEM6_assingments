#include <iostream> 
#include <fstream> 
using namespace std;

int main(){
    int cnt=0; char ch;
    ifstream file("file.txt"); 
    if (!file.is_open()) {
        cerr << "Could not open the file - '"<< "file.txt" << "'" << endl; 
        return EXIT_FAILURE;
    }

    while (file.get(ch)) {
       //cout<<ch<<'-'; 
	   cnt++;
    }
    cout<<"Character count = "<<cnt; return 0;
}
