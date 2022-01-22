//  given an integer N. Write a program to calculate the sum of all the digits of N.

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,digit=0,sum=0;
		cin>>a;
		while(a>0){
			digit = a%10;
			sum = sum + digit;
			a = a / 10;
		}
		cout<<sum<<endl;
	}
}
