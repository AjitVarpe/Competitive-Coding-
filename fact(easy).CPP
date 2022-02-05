#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,fix=0,mul=5;
        cin>>n;
        while((n/mul)>0){
            fix+=(n/mul);
            mul*=5;
        }
        std::cout << fix << std::endl;
        
    }
	return 0;
}

