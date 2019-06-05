#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    bool odd = 0, even =0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2) odd++;
        else even++;
    }
    if(even && odd) sort(a, a + n);
    for(int i = 0;i<n;i++)
        cout << a[i] << ' ';
    return 0;
}
