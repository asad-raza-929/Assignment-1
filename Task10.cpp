#include<iostream>
using namespace std;
//Code to implement bubble sorting on an array of 6 integers
int main()
{
	int n=6;
	int a[n];
	cout<<"Enter 6 integers in an array :";
	for(int i=0; i<6; i++){    
	cin>>a[i];
	}
	
	int counter=1;
	int temp=0;
	while(counter<n){
		for(int i=0; i<n-counter; i++){
		 if(a[i]>a[i+1]){
		 	temp=a[i];
		    a[i]=a[i+1];
		    a[i+1]=temp;
		 }
		}
		counter++;
	}
	for(int i=0; i<6; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
