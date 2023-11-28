#include<iostream>
using namespace std;

int main()
{
	int n, d, q=0, r=0; 
	cout<<"Enter an integer.";        //n is dividend
	cin>>n;                           // d is divisor
	cout<<"Enter divisor :";          // r is remainder
	cin>>d;                           // q is quoteint
	if(n>d)
	{
		for(int i=n; i>=d; i--){
		if(i%d==0)
		q=q+1;
		}
    cout<<n<<'/'<<d<<" = "<<q<<endl;
    r=n%d;
    cout<<"remainder is "<<r;
	}
    else
    cout<<"Invalid Entry.";
    
    return 0;
}
