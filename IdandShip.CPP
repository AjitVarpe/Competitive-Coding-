#include<bits/stdc++.h>
using namespace std;
int main(){
 
 	short int t;
 	char N;
 	cin>>t;
 	while(t--){
 		cin>>N;
 		if(N == 'B' || N == 'b'){
 			cout<<"BattleShip"<<endl;
 		}
 		else if(N == 'C' || N == 'c'){
 			cout<<"Cruiser"<<endl;
 		}else if(N == 'D' || N == 'd'){
 			cout<<"Destroyer"<<endl;
 		}else if(N == 'F' || N == 'f'){
 			cout<<"Frigate"<<endl;
 		}
 	}

}
