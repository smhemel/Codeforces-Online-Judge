//
//  main.cpp
//  2017-2018 ACM-ICPC, NEERC, Southern Subregional Contest - F. Lost in Transliteration
//
//  Created by S M HEMEL on 21/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
using namespace std;
string s[500],str,str_temp;
map<string,bool> M;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        str = "";
        cin >> str_temp;
        sort(str_temp.begin(),str_temp.end());
        s[i] = str_temp;
        M[str_temp] = 1;
    }
    
    return 0;
}
