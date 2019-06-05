#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,k,ans=0;
        cin>>n>>k;
        while(n>=k){
            ans+=(n%k)+1;
            n=(n/k);
        }
        cout<<ans+n<<endl;
    }
    return 0;
}
