//
//  main.cpp
//  Codeforces Round #381 (Div. 2)
//
//  Created by S M HEMEL on 11/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

//B
/*#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0,s=0,l,u;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
    {
        cin>>l>>u;
        l=l-1;s=0;
        for(int j=l;j<u;j++)
            s+=a[j];
        if(s>=0)
            sum+=s;
        printf("s = %d\nsum = %d\n",s,sum);
    }
    cout<<sum<<endl;
    return 0;
}*/


//A
/*#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,n;
    cin>>n>>a>>b>>c;
    n = n%4;
    ll k=0;
    if(n==1)
        k = min(min(c,b+a),3*a);
    else if(n==2)
        k = min(min(b,2*a),2*c);
    else if(n==3)
        k = min(min(a,b+c),3*c);
    cout<<k<<endl;
    return 0;
    
}*/

//C
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int mi=1000005;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        mi=min(mi,b-a+1);
    }
    printf("%d\n",mi);
    for(int i=0;i<n;i++)
        printf("%d ",i%mi);
    return 0;
}
