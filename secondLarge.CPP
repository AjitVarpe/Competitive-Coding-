
#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if (a>=b && a>=c){
			if(b>=c){
				cout<<b<<endl;
			}
		}
		if (b>=a && b>=c){
			if(a>=c){
				cout<<c<<endl;
			}
		}
		if (c>=a && c>=b){
			if(a>=b){
				cout<<a<<endl;
			}
		}
	}
}


#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		long long a,b,c;
		cin >> a >> b >> c;
		if(a>=b && b>=c || a<=b && b<=c)
			cout << b << endl;
		else if(a>=c && c>=b || a<=c && b>=c)
			cout << c << endl;
		else
			cout << a << endl;
	}
}
