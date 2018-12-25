//
//  main.cpp
//  Codeforces Round #289 (Div. 2) - A. Maximum in Table
//
//  Created by S M HEMEL on 24/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int matrix[100][100];
int main()
{
    for(int i=0,j=0; j<11; j++){
        matrix[i][j] = 1;
        matrix[j][i] = 1;
    }
    int t=2,j=1,j1=1;
    for(int x=0; x<10; x++){
        j1 = 1;
        for(int i=0; i<10; i++){
            int sum = 0;
            for(int l=0; l<t; l++)
                sum += matrix[l][i];
            matrix[j][j1++] = sum;
        }
        t++;
        j++;
    }
    int n;
    cin >> n;
    cout << matrix[n-1][n-1] << endl;
    return 0;
}
