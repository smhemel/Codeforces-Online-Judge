//
//  main.cpp
//  Codeforces Round #222 (Div. 1) - A. maze
//
//  Created by S M HEMEL on 5/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
char matrix[510][510];
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++)
        for(int l=0; l<m; l++)
            cin >> matrix[i][l];
    for(int i=0; i<n; i++)
        for(int l=0; l<m; l++)
        {
            if(matrix[i][l]=='.' && (matrix[i][l+1]=='#' || matrix[i][l-1]=='#' || matrix[i+1][l]=='#' || matrix[i-1][l]=='#' || matrix[i][l+1]=='X' || matrix[i][l-1]=='X' || matrix[i+1][l]=='X' || matrix[i-1][l]=='X')){
                matrix[i][l] = 'X';
                k--;
            }
            if(k==0){
                for(int i=0; i<n; i++)
                    cout << matrix[i] << endl;
                return 0;
            }
        }
    return 0;
}
