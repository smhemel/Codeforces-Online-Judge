//
//  main.cpp
//  Codeforces Round #460 (Div. 2) - C. Seat Arrangements
//
//  Created by S M HEMEL on 1/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
char matrix[2000][2000];
int main(){
    int n,m,k,ans=0;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
            if(matrix[i][j]=='.') ans++;
        }
    if(k==1) return 0 * printf("%d\n",ans);
    ans = 0;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<m; j++){
            if(matrix[i][j]=='.'){
                cnt++;
            }
            if((matrix[i][j]=='*' && cnt>=k) || (cnt>=k && j==m-1)){
                ans += (1+(cnt-k));
                cnt = 0;
            }
            if(matrix[i][j]=='*' && cnt<k)
                cnt = 0;
        }
    }
    for(int i=0; i<m; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(matrix[j][i]=='.'){
                cnt++;
            }
            if((matrix[j][i]=='*' && cnt>=k) || (cnt>=k && j==n-1)){
                ans += (1+(cnt-k));
                cnt = 0;
            }
            if(matrix[j][i]=='*' && cnt<k)
                cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
