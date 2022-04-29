#include <iostream>
using namespace std;
void validComment(string s)
{
// two consecutive slashes
    if (s[0] == '/' && s[1] == '/' && s[2] != '/')
    {
        cout << "It is a single line comment";
        return;
    }
    if (s[0] == '/' && s[1] == '*' && s[s.size() - 2] =='*' && s[s.size() - 1] == '/')
    {
        cout << "It is a multi-line comment";
        return;
    }
    cout << "Entered string is not a comment";
}

int main()
{
    string s;
    cout << "\nEnter the comment/string: ";
    getline(cin, s);
    validComment(s);
    cout<<endl<<endl;
    system("pause");
    return 0;
}