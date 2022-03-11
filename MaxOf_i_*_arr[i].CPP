#include <bits/stdc++.h>
// #include <algorithm.h>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	int arr[n],mul[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		mul[i]=0;
	}
    temp=1;
   while(temp != n){

   		int last=arr[n-1];
		for(int i=0;i<n;i++){
			temp=arr[i];
			arr[i]=last;
			last=temp;
		}
			for(int i=0;i<n;i++){
				mul[temp-1] = mul[temp-1] + arr[i] * i;
			}
		temp++;
    }
	int max_sum=0;
		for(int i=0;i<n;i++){
			max_sum=max(max_sum,mul[i]);
		}
	cout<<max_sum;
	return 0;
}
