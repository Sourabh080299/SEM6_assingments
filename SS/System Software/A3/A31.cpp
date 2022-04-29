#include <iostream>
using namespace std;
bool checkValidity(string s, int n)
{
    if (!((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || s[0] =='_'))
        return false;
    for (int i = 1; i < n; i++)
    {
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '_'))
        return false;
    }
    return true;
}

int main()
{
    string s;
    cout << "\nEnter a string to check validity of identifier: ";
    cin >> s;
    int n = s.length();
    if (checkValidity(s, n))
        cout << "Valid identifier."<<endl;
    else
        cout << "Invalid identifier!"<<endl;
    cout<<endl;
    system("pause");
    return 0;
}