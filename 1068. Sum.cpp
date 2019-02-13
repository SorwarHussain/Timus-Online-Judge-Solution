#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,sum=0;
    cin>>N;
    if(N>1)
    {
        for(i=1;i<=N;i++)
        {
            sum+=i;
        }
    }
    else
    {
         for(i=1;i>=N;i--)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
