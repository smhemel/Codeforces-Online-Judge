#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
long long i,j,m;
long long c[10010],s[10010],cc[10010];
int main(){
    int n;
    for(cin>>n;i<n;i++)cin>>s[i];
    for(i=0;i<n;i++)cin>>c[i];
    for(i=1;i<n;i++){
        for(j=0,m=2e9;j<i;j++)
            if(s[j]<s[i])m=min(m,c[i]+c[j]);
        cc[i]=m;
    }
    for(i=2,m=2e9;i<n;i++)
        for(j=1;j<i;j++)
            if(s[j]<s[i])m=min(m,c[i]+cc[j]);
    cout<<(m<2e9?m:-1);
}
