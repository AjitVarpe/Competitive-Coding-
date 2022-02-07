//  inverted Numbers

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<cnt<<"  ";
			cnt++;
		}
		cnt=1;
		cout<<endl;
	}
}

//  Output :-

// 1  2  3  4  5  
// 1  2  3  4  
// 1  2  3  
// 1  2  
// 1  
