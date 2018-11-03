//
//  main.cpp
//  Codeforces Round #303 (Div. 2) - A. Toy Cars
//
//  Created by S M HEMEL on 2/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int mat[101][101];
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cin >> mat[i][j];
        vector<int> V;
        for(int i=0; i<n; ++i)
        {
            bool ok = true;
            for(int j=0; j<n; ++j)
                if(mat[i][j] == 1 || mat[i][j] == 3)
                {
                    ok = false;
                    break;
                }
            if(ok) V.push_back(i+1);
        }
        long int s = V.size();
        cout << s << endl;
        if(s>0) {
            for(int i=0; i<s; ++i)
                cout << V[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
