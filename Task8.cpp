#include<iostream>
using namespace std;
// code to add more integers in an existing array.
int main()
//{
//	int n=5;
//	int a[n] = {1,2,3,4,5};
//	int x;
//	cout<<"Enter the amount of numbers to be added :";
//    cin>>x;
//    int b[x];                  //declaring a new array in which new elements will be stored.
//    cout<<"Enter the integers to be added :";
//    for(int i=0; i<x; i++){
//    	cin>>b[i];	}
//	int y;
//	y=n+x;
//    int  c[y];                  //declaring the final array.
//     for(int i=0; i<n; i++){    //combining all elements in final array.
//     	c[i]=a[i];
//	 }
//	 for(int i=0; i<x; i++){
//	 	c[n+i]=b[i];
//	 }
//	 
//	 for(int i=0; i<y; i++){
//	 	cout<<c[i]<<" ";
//	 }
//	 return 0;
//} 

{
	int n=5;
	int a[n]= {1,2,3,4,5};
	int x, y;
	int b[y];
	cout<<"Enter the amount of numbers to be added.";
	cin>>x;
	for(int i=0; i<5; i++){
		b[i]=a[i];
	}
	
	for(int i=0; i<x; i++){
		cout<<"Enter integers :";
		cin>>b[n+i];
	}
	for(int i=0; i<n+x; i++){
		cout<<b[i]<<" ";
	}
}
