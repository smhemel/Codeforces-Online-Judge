//
//  main.cpp
//  AIM Tech Round 4 (Div. 2) - B. Rectangles
//
//  Created by S M HEMEL on 24/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int matrix[100][100];
int main()
{
    int n,m;
    long long int ans = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d",&matrix[i][j]);
    long long int one,zero;
    for(int i=0; i<n; i++){
        one = 0; zero = 0;
        for(int j=0; j<m; j++){
            if(!matrix[i][j])
                zero++;
            else
                one++;
        }
        ans = ans + pow(2,zero) + pow(2,one)-2-m;
    }
    for(int i=0; i<m; i++){
        one = 0; zero = 0;
        for(int j=0; j<n; j++){
            if(!matrix[j][i])
                zero++;
            else
                one++;
        }
        ans = ans + pow(2,zero) + pow(2,one)-2;
    }
    cout << ans << endl;
    return 0;
}
