#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
struct BadLengthException : exception {
    string s;
    BadLengthException(int n) : s(to_string(n)) {}
    const char *what() const noexcept override {
        return s.c_str();
    }
};


bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n; i++){
		if(username[i]==' '){
			isValid = false;
		}
	}
	return isValid;
}

int main(){
	int T;
	cout<<"enter number of test cases:"; 
	cin >> T;
	while(T--) {
		string username;
		cout<<"Enter UserName:";
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) 
			{
				cout << "Valid" << '\n';
			} 
			else 
			{
				cout << "Invalid" << '\n';
			}
		} 
		catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
