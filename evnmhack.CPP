#include<bits/stdc++.h>
using namespace std;
int main(){
 
 	int t;
 	cin>>t;
 	while(t--){
 		short int A,B,C,P,Q,R,total,max;
 		float grandtotal;
 		cin>>A>>B>>C>>P>>Q>>R;
 		if(A>=B && B>=C){
 			total=A+B;
 		}else if(B>=A && C>=B){
 			total=B+C;
 		}else
 		{
 		total = A + C;
 		}

 		if(P>=Q && P>=R){
 			max=P;
 		}else if (Q>=R && Q>=P){
 			max=Q;
 		}else
 		{
 			max=R;
 		}

 		grandtotal=total+max;
 		if(grandtotal > ((P+Q+R)/2)){
 			cout<<"YES"<<endl;
 		}
 		else{
 			cout<<"NO"<<endl;
 		}
 	}
}
