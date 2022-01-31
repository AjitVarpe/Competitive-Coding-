
#include<bits/stdc++.h>
using namespace std;
int main(){

	short int t;
	int a,lucky=0,unlucky=0;
	cin>>t;
	while(t--){
		cin>>a;
	if(a%2==0){
		lucky++;
	}else
	{
		unlucky++;
	}
	
}
if(lucky>unlucky){
	cout<<"READY FOR BATTLE"<<endl;
}
else
{
	cout<<"NOT READY"<<endl;
}
}
