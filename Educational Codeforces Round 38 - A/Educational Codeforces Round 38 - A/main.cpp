//
//  main.cpp
//  Educational Codeforces Round 38 - A
//
//  Created by S M HEMEL on 17/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,s1;
    int n,k=0;
    cin >> n;
    cin >> s;
    s1 += s[0];
    for(int i=1; s[i]; i++){
        if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') && (s1[k]=='a' || s1[k]=='e' || s1[k]=='i' || s1[k]=='o' || s1[k]=='u' || s1[k]=='y'))
            continue;
        else {s1 += s[i];
            k++;
        }
    }
    cout << s1 << endl;
    return 0;
}
