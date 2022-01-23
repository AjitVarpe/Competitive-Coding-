// Hungry Ashish Problem Solution


#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if (y<=x){
			cout<<"PIZZA";
		}
		else if(y>x && z<=x){
			cout<<"BURGER";
		}
		else if(y>x && z>x){
			cout<<"NOTHING";
		}
		cout<<endl;
	}	
}
	
