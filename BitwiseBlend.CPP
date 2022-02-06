
#include <bits/stdc++.h>
using namespace std;

long long var1[200002];
long long var2[200002];
long long Var1=0;
long long Var2=0;
void long1(long long x,long long y){
    var1[Var1]=x;
    Var1++;
    var1[Var1]=y;
    Var1++;
}
void newlong2(long long x,long long y){
    var2[Var2]=x;
    Var2++;
    var2[Var2]=y;
    Var2++;
}

int main()
{
    long long t;
    cin >> t;
    while(t--){
        Var1=0;
        Var2=0;
        
        long long cnt1 = 0;
        long long cnt2 = 0;
        
        long long n;
        cin >> n;
        long long a[n];
        long long A[n];
        
        long long Y1=0,Y=2;
        long long y1=0,y=0;
        
        long long odd_check =0;
        for(long long i=0; i<n ;i++){
            cin>>a[i];
            A[i]=a[i];
        }
       
			if(a[0]%2==0)
			{
    		if( a[1]%2==0){
         
	         for(long long i=2;i<n;i++){
	             if(a[i]%2==1){
	                 Y1=a[i];
	                 y1=i;
	                 odd_check = 1;
	                 
	                 a[1] = a[1]^Y1;
	                 cnt1++;
	                 long1(1,y1);
	                 break;
	             }
	         }
			         
		    }
		    else{
		        Y1=a[1];
		        y1=1;
		        odd_check = 1;
		    }
		      Y=a[1];
		      y=1;
		      for(long long i =2;i<n;i++){
		          if(a[i]%2==1){
		              a[i]=a[i]^Y;
		              cnt1++;
		              long1(i,y);
		          }
		          i++;
		          if(i<n){
		              if(a[i]%2==0){
		                  a[i]=a[i]^Y;
		              cnt1++;
		              long1(i,y);
		              }
		          }
		      }
		      A[0]=A[0]^Y1;
		      cnt2++;
		      newlong2(0,y1);
		      
		      Y=A[0];
		      y=0;
		      
		      for(long long i=1;i<n;i++){
		          if(A[i]%2==1){
		              A[i]=A[i]^Y;
		              cnt2++;
		              newlong2(i,y);
		          }
		          i++;
		          if(i<n){
		              if(A[i]%2==0){
		                  A[i]=A[i]^Y;
		                  cnt2++;
		                  newlong2(i,y);
		              }
		          }
		      }
		   
		    
		}
		else{
		    odd_check = 1;
		    Y=A[0];
		    y=0;
		    for(long long i=1;i<n;i++){
		        if(a[i]%2==1){
		            a[i]=a[i]^Y;
		            cnt1++;
		            long1(i,y);
		        }
		        i++;
		        if(a[i]%2==0 && i<n){
		            a[i]=a[i]^Y;
		            cnt1++;
		            long1(i,y);
		        }
		    }
		    
		    Y = A[0];
		    y=0;
		    
		    for(long long i=1;i<n;i++){
		        if(A[i]%2==0){
		            A[i]=A[i]^Y;
		            cnt2++;
		            newlong2(i,y);
		        }
		        i++;
		        if(A[i]%2==1 && i<n){
		            A[i]=A[i]^Y;
		            cnt2++;
		            newlong2(i,y);
		        }
		    }
		    
		    A[0]=A[0]^A[1];
		    cnt2++;
		    newlong2(0,1);
		  
		}
		 if(odd_check==0){
		     cout<<"-1"<<endl;
		 }
		 else if(cnt1>cnt2){
		     long long j;
		     cout<<cnt2<<endl;
		     for(long long i=0;i<cnt2;i++){
		         j=i*2;
		         cout<<var2[j]+1<<" "<<var2[j+1]+1<<endl;
		     }
		 }
		 else{
		     int j;
		     cout<<cnt1<<endl;
		     for(long long i=0;i<cnt1;i++){
		         j=i*2;
		         cout<<var1[j]+1<<" "<<var1[j+1]+1<<endl;
		     }
		 }

		}
		        
  return 0;  
  }
