#include<iostream>
using namespace std;
int main()
{   //Code to print prime number less than or equal to a given integer.
	int N, x, j;
	bool prime;
	cout<<"Enter an Integer :";
	cin>>N;
	if(N<=0)
	cout<<"Invalid Entry.";
	
	if(N==1)
	cout<<"There is no prime.";
	j=N-1;
	
	while(N>1){
		while(j>1){
			if(N%j==0){     
			prime = false;
			break;
			}
			else if(N%j!=0){
			    prime=true; 
				x=N;   }
			j--;    
		}
		if(prime==true){
		cout<<N; 
		break;  }
		N--;
	}	
	return 0;
}
