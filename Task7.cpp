#include<iostream>
#include<cctype>
using namespace std;
// Code to remove duplicate characters from a string.
int main()
{
	string a;
	cout<<"Enter a string :";
	cin>>a;
	for (int  k = 0; k<a.length(); k++){
		a[k]= tolower(a[k]);
	}
	for(int i=0; i<a.length();  i++){
		for(int j=1; j<a.length(); j++){
			if(i!=j){
				if(a[i]==a[j]){
					a[j]=a[j+1];
					a[j+1]=' ';
				}
			}
		}
	}
	cout<<"New string :"<<a;
	return 0;
}
