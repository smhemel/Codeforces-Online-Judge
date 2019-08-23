#include <bits/stdc++.h>
#define ll int
using namespace std;
ll ar[100][100],br[100][100];
vector<pair<int,int>>v,v1,v2,v3;
int a,b,c,d,e,n,m;
bool validate(int x,int y){
    if(x<n && x+1<n && y<m && y+1<m) return true;
    return false;
}
int main()
{
    bool f = true;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> ar[i][j];
            if(ar[i][j]) f = false;
        }
    }
    if(f) return 0 * puts("0");
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(validate(i,j)) {
                if(ar[i][j] && ar[i][j+1] && ar[i+1][j] && ar[i+1][j+1] && (br[i][j]==0 || br[i][j+1]==0 || br[i+1][j]==0 || br[i+1][j+1]==0)) {
                    v.push_back(make_pair(i,j));
                    br[i][j]=1;
                    br[i][j+1]=1;
                    br[i+1][j]=1;
                    br[i+1][j+1]=1;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(ar[i][j]!=br[i][j])
                return 0 * puts("-1");
    cout << v.size() << endl;
    for(auto u: v){
        cout << u.first+1 << " " << u.second+1 << endl;
    }
    return 0;
}
