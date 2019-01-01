//
//  main.cpp
//  Codeforces Round #427 (Div. 2) - A. Key races
//
//  Created by S M HEMEL on 31/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int first = v1*s + t1*2;
    int second = v2*s + t2*2;
    if(first==second)
        puts("Friendship");
    else if(first>second)
        puts("Second");
    else
        puts("First");
    
    return 0;
}
