//
//  main.cpp
//  Codeforces Round #290 (Div. 2) - A. Fox And Snake
//
//  Created by S M HEMEL on 4/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
char matrix[100][100];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int l=1; l<=m; l++){
            if(i%2==0 && l==m)
                matrix[i][l] = '#';
            else if(i&1)
                matrix[i][l] = '#';
            else
                matrix[i][l] = '.';
        }
    for(int i=4; i<=n; i++)
        if(i%4==0){
            matrix[i][1] = '#';
            matrix[i][m] = '.';
        }
    for(int i=1; i<=n; i++){
        for(int l=1; l<=m; l++)
            cout << matrix[i][l];
        cout << endl;
    }
    return 0;
}
