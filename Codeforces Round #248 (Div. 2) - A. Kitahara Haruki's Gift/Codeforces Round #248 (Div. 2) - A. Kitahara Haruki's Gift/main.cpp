//
//  main.cpp
//  Codeforces Round #248 (Div. 2) - A. Kitahara Haruki's Gift
//
//  Created by S M HEMEL on 3/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int n,i,x,y,t;
int main(){
    for(cin>>n;i<n;i++) {
        cin>>t;
        t==100?x++:y++;
    }
    cout<<(((x*100+y*200)%200==0 & x!=0) || (y%2==0 & y!=0 & x%2==0)?"YES":"NO") << endl;;
}
