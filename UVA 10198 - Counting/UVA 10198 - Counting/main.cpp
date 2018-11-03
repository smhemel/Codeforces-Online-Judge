//
//  main.cpp
//  UVA 10198 - Counting
//
//  Created by S M HEMEL on 11/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long M[1001];
    M[0]=1; M[1] =2; M[2]=5;M[3]=13;
    for(int i=4;i<1001;i++)
        M[i]=M[i-1]+M[i-2]+M[i-3]+M[i-4];
    int n;
    while(cin>>n)
        cout<<M[n]<<endl;
    return 0;
}
