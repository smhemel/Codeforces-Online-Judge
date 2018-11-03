#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
long long n, k;
int main(){
    scanf("%lld %lld", &n, &k);
    long long sq = sqrt(n);
    vector<long long>fact;
    for(long long i=1;i<=sq;i++){
        if(n % i == 0){
            fact.push_back(i);
            if(n/i != i)
                fact.push_back(n/i);
        }
    }
    sort(fact.begin(), fact.end());
    if(fact.size() < k) printf("-1\n");
    else printf("%lld\n", fact[k-1]);
    return 0;
}
