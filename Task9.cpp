#include<iostream>
using namespace std;

int main()
{
	int n,I=0, a[n], s=0;
	cout<<"Enter an Integer :";
	cin>>I;
	cout<<"Enter length of array:";
	cin>>n;
	cout<<"Enter integers in the array:";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				s=a[i]+a[j]+a[k];
				if(s==I){
					cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
				}
			}
		}
	}
	if(s!=I){
		cout<<"No triplet found.";
	}
	return 0;
}
