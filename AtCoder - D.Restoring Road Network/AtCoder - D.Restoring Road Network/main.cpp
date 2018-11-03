//
//  main.cpp
//  AtCoder - D.Restoring Road Network
//
//  Created by S M HEMEL on 3/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#define N 311
#define inf 1000000100
using namespace std;
int matrix[N][N];
int dis[N][N];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> matrix[i][j];
   memset(dis,inf,sizeof(dis));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                dis[i][j] = min(dis[i][j],matrix[k][j]+matrix[i][k]);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(dis[i][j]!=matrix[i][j])
                return 0 * puts("-1");
    long long int ans = 0;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++){
            bool flag = true;
            for(int k=0; k<n; k++){
                if((dis[i][j]==dis[i][k]+dis[k][j]) && dis[i][j]!=dis[i][k] && dis[i][j]!=dis[k][j])
                    flag = false;
            }
            if(flag){cout << i << " " <<j<< endl; ans += dis[i][j];}
        }
    cout << ans << endl;
    return 0;
}
