//
//  main.cpp
//  Codeforces Round #460 (Div. 2) - A. Supermarket
//
//  Created by S M HEMEL on 31/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#define f double
using namespace std;
double Min = 999999;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        double a,b;
        cin >> a >> b;
        Min = min(Min,(a/b));
    }
    double ans = Min*m;
    printf("%.8lf\n",ans);
    return 0;
}
