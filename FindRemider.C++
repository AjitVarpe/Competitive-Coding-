// Write a program to find the remainder when an integer A is divided by an integer B.

// Input
// The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

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
