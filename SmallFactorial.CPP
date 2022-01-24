// Another Small Numbers Program


#include<bits/stdc++.h>
using namespace std;

int main(){

   int t;
   cin>>t;
   cout<<endl;
   while(t--){
   int a,fact=1;
    cin>>a;
    if(a < 100){
    while(a != 0){
        fact = fact * a;
        a--;
    }
    cout<<fact<<endl;
   }}
}
