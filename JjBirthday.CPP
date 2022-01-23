// JJ Birthday Problem Solution Codechef



#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s = "";
		string s1 = "abcdefghijklmnopqrstuvwxyz";
		int len,i=0;
		cin>>len;
		while(len--){
			s += s1[i];
			if(i==25){
				i = 0;
			}
			i++;
		}
		cout<<s<<endl;
	}	
}
	
