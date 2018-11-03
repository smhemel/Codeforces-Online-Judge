//
//  main.cpp
//  8VC Venture Cup 2017 - Elimination Round, problem: (B) PolandBall and Game
//
//  Created by S M HEMEL on 1/16/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int n, m, K;
map<string,int>Map;
char p[1010];
int main(){
    int i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%s",p);
        Map[p]=1;
    }
    for(i=1;i<=m;i++){
        scanf("%s",p);
        if(Map[p])
            K++;
    }
    if(K%2==1){
        if(n>=m)printf("YES\n");
        else printf("NO\n");
    }
    else{
        if(n>m)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
