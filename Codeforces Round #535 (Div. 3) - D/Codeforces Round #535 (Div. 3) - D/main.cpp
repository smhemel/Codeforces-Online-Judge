//
//  main.cpp
//  Codeforces Round #535 (Div. 3) - D
//
//  Created by S M HEMEL on 26/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
#define N 200005
int n,ans;
char s[N],e[4] = "BGR";

int main()
{
    scanf("%d%s",&n,s);
    for (int i=1; i<=n; i++) {
        if (s[i]==s[i-1]) {
            ans++;
            for (int j=0;j<3;j++)
                if (e[j]!=s[i-1]&&e[j]!=s[i+1])
                    s[i]=e[j];
        }
    }
    printf("%d\n%s",ans,s);
    return 0;
}
