#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter number of strings:";
	int n;
	cin>>n;
	vector<string> v;
	cout<<"enter all strings"<<endl;
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		v.push_back(temp);
	}
    
    
    int k=1,count=1;
    string ans="";
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
          k++;
        }
        else{
        	if(count<k){
        		ans=v[i-1];
			}
            count=max(count,k);
            k=1;
        }
    }
    
    cout<<endl;
    cout<<"word is: "<<ans<<endl;
    cout<<"count is: "<<count<<endl;
}
