#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin>>T;
    while(T--)
    {
        int count=0;
        cin>>N;
        while(N>0)
        {
            if(N>=100)
            {
                N-=100;
                count++;
            }
            else if(N>=50)
            {
                N-=50;
                count++;
            }
            else if(N>=10)
            {
                N-=10;
                count++;
            }
            else if(N>=5)
            {
                N-=5;
                count++;
            }
            else if(N>=2)
            {
                N-=2;
                count++;
            }
            else
            {
                N-=1;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
