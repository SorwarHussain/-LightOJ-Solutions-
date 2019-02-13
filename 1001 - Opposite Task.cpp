#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i,a,b,n;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>n;
        b=n/2;
        a=n%2+n/2;
       cout<<a<<" "<<b<<endl;
    }

    return 0;
}
