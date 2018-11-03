//
//  main.cpp
//  Codeforces Round #368 (Div. 2) - A. Brain's Photos
//
//  Created by S M HEMEL on 4/4/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
map <char,int> M;
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int l=0; l<m; l++)
        {
            char c;
            cin >> c;
            M[c] = 1;
        }
    if(M['C'] || M['M'] || M['Y'])
        puts("#Color");
    else
        puts("#Black&White");
    return 0;
}
