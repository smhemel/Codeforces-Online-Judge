#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int sum = 0,odd = 0;
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&x);
        if(x%2==1)
            odd = 1;
    }
    if(odd)
        return 0 * puts("First");
    puts("Second");
    return 0;
}
