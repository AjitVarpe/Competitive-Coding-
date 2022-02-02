#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n==1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int num;cin>>num;
	    if(isPrime(num)==1)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
