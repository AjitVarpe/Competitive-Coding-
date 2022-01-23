// Infected city problem 


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		int d = x - y;
		if (d > y)
			cout<<y<<endl;
		else if (y > d)
			cout<<d<<endl;
		else
			cout<<y<<endl;
	}	
}
