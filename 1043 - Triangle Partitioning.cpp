#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i;
    double ab,ac,bc,m,ad;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>ab>>ac>>bc>>m;
        ad=ab*sqrt(m)/sqrt(m+1);
        printf("Case %d: %f\n",i,ad);
    }
    return 0;
}
