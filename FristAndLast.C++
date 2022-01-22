// Sum of Frist and last Digit for t Number of Cases


#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
	cin>>t;
	while(t--){
		int a,frist;
		cin>>a;
		frist=a%10;
		while(a>=10){
			a = a / 10;
		}
		cout<<frist+a<<endl;
	}	
}
