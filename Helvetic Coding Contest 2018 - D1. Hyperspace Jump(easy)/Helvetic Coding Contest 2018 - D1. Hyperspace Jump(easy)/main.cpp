//
//  main.cpp
//  Helvetic Coding Contest 2018 - D1. Hyperspace Jump(easy)
//
//  Created by S M HEMEL on 14/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
#define ll long long int
#include <vector>
using namespace std;
vector<double>V;
map<double,int>MP;
int main()
{
    ll n,i;
    double a,b,c;
    cin >> n;
    while(n--){
        getchar();
        scanf("(%lf+%lf)/%lf",&a,&b,&c);
        double tmp = (a+b)/(c*1.0);
        V.push_back(tmp);
        MP[tmp]++;
    }
    for(i = 0;i<V.size();i++){
        cout<<MP[V[i]]<<" ";
    }
    return 0;
}
