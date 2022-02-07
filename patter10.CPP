#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=1;
	cin>>n;
	for(int i=1;i<=n;i++){

		for(int j=0;j<n-i;j++){
			cout<<"  ";

		}
		for(int k=1;k<=n;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

// Output :
//         * * * * * 
//       * * * * * 
//     * * * * * 
//   * * * * * 
// * * * * * 
