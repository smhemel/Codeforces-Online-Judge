//
//  main.cpp
//  Canada Cup 2016 - B. Food on the Plane
//
//  Created by S M HEMEL on 10/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#define ll long long int
using namespace std;
int main(){
    string s;
    ll num = 0,ans = 6;
    cin >> s;
    int len = (int)s.length();
    for(int i=0; i<len-1; i++)
        num = 10*num+(s[i]-'0');
    num--;
    ans += (num/4)*16;
    if(num&1) ans += 7;
    if(s[len-1]=='f')
        return 0 * printf("%lld\n",ans-5);
    if(s[len-1]=='e')
        return 0 * printf("%lld\n",ans-4);
    if(s[len-1]=='d')
        return 0 * printf("%lld\n",ans-3);
    if(s[len-1]=='c')
        return 0 * printf("%lld\n",ans);
    if(s[len-1]=='b')
        return 0 * printf("%lld\n",ans-1);
    if(s[len-1]=='a')
        return 0 * printf("%lld\n",ans-2);
    return 0;
}
