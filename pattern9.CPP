#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			cnt=1;
			for(int j=1;j<=i;j++){

				if(cnt%2==0){
					cout<<1<<"  ";
					cnt++;
				}else{
					cout<<0<<"  ";
					cnt++;
				}
				
			}
		}
		else
		{

			for(int j=1;j<=i;j++){
				
				if(cnt%2==0){
					cout<<0<<"  ";
					cnt++;
				}else{
					cout<<1<<"  ";
					cnt++;
				}
				
			}
		}
		cout<<endl;
	}
}


// Output :
// 1  
// 0  1  
// 1  0  1  
// 0  1  0  1  
// 1  0  1  0  1  
