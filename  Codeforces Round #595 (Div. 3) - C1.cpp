#include <bits/stdc++.h>
#define ll int
using namespace std;
map<ll,ll>M;
ll a,b,c,n,m,k,x,y;
string s,s1;
vector<ll>v,v1;
ll ar[211111],br[211111];
void solve() {
    int i = 1;
    int z = 3;
    while(true){
        v.push_back(z);
        z = z*3;
        if(z>19683) break;
    }
}
int main()
{
    solve();
    v.push_back(1);
    sort(v.begin(),v.end());
 
    for(int i=0; i<v.size(); i++){
        int x1 = v[i];
        v1.push_back(x1);
        for(int j=i+1; j<v.size(); j++){
            int x2 = x1+v[j];
            v1.push_back(x2);
            for(int k=j+1; k<v.size(); k++){
                int x3 = x2+v[k];
                v1.push_back(x3);
                for(int l=k+1; l<v.size(); l++){
                    int x4 = x3+v[l];
                    v1.push_back(x4); 
                    for(int l1=l+1; l1<v.size(); l1++){
                        int x5 = x4+v[l1];
                        v1.push_back(x5);
                        for(int l2=l1+1; l2<v.size(); l2++){
                            int x6 = x5+v[l2];
                            v1.push_back(x6);
                            for(int l3=l2+1; l3<v.size(); l3++){
                                int x7 = x6+v[l3];
                                v1.push_back(x7);
                                for(int l4=l3+1; l4<v.size(); l4++){
                                    int x8 = x7+v[l4];
                                    v1.push_back(x8);
                                    for(int l5=l4+1; l5<v.size(); l5++){
                                        int x9 = x8+v[l5];
                                        v1.push_back(x9);
                                        for(int l6=l5+1; l6<v.size(); l6++){
                                            int x10 = x9+v[l6];
                                            v1.push_back(x10);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sort(v1.begin(),v1.end());
    cin >> n;
    while(n--){
        scanf("%d",&m);
        int i=0;
        while(true){
            if(v1[i]>=m){
                cout << v1[i] << endl;
                break;
            }
            i++;
        }
    }
    return 0;
}