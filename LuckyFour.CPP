// Lucky Four


#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
	cin>>t;
	while(t--){
		int a,cnt=0,rem;
		cin>>a;
		while(a>0){
			rem = a%10;
			if(rem==4){
				cnt++;
			}
			a = a/10;
		}
		cout<<cnt<<endl;
	}	
}
	
