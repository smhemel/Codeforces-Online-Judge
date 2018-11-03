//
//  main.cpp
//  Codeforces Round #360 (Div. 2), problem: (B) Lovely Palindromes
//
//  Created by S M HEMEL on 1/25/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    cout << s;
    reverse(s.begin(),s.end());
    cout << s << "\n";
    
    
    return 0;
}
