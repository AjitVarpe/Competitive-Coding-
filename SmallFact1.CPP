

#include<bits/stdc++.h>
using namespace std;
int main(){

	int t,a,fact=1;
	cin>>t;
	while(t--){
		cin>>a;
		while(a != 0){
			fact = fact * a;
			a--;
		}
		cout<<fact<<endl;
		fact=1;
	}
}
