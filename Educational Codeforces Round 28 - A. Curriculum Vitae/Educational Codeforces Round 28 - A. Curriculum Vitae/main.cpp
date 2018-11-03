//
//  main.cpp
//  Educational Codeforces Round 28 - A. Curriculum Vitae
//
//  Created by S M HEMEL on 26/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n,c=0,c1=0,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x==0) c++;
        else{
            if(c>c1) c1 = c;
            c1++;
        }
    }
    cout << max(c,c1) << endl;
    return 0;
}
