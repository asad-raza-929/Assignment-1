#include<iostream>
using namespace std;

int main()
{
	string n1, n2;
	string r;
	cout<<"Enter two Strings :";
	cin>>n1>>n2;
	if(n1==n2){
		for(int i=n1.length(); i>=0; --i){
			r=n1[i];
			cout<<r;
		}
	}
    if(n1!=n2)
    cout<<"Both strings are not equal.";
    return 0;
}
