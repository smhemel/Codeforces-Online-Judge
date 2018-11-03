//
//  main.cpp
//  Educational Codeforces Round 15 - B. Powers of Two
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
#define ll long long
map <int,int> Map;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        Map.clear();
        for(int i=1; i<=n; i++)
        {
            int x;
            scanf("%d",&x);
            if (Map.find(x)==Map.end())
                Map[x]=1;
            else
                Map[x]++;
        }
        long long ans = 0;
        map <int,int> :: iterator it1,it2;
        for (it1=Map.begin(); it1!=Map.end(); it1++)
        {
            int x=it1->first;
            for (int i=0; i<32; i++)
            {
                int y= (int)(1LL<<i)-x;
                it2 = Map.find(y);
                if (it2==Map.end())
                    continue;
                if (it2->first==it1->first)
                    ans+=(ll)(it1->second)*(it1->second-1);
                else
                    ans+=(ll)it1->second * it2->second;
            }
        }
        ans >>= 1;
        printf("%lld\n",ans);
    }
    return 0;
}
