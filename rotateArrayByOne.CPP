#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int last=arr[n-1];
	for(int i=0;i<n;i++){
		temp=arr[i];
		arr[i]=last;
		last=temp;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
