#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z;
    cin >> x >> y >> z;
    
    int dif = x - y;
    
    if(abs(dif) <= z && z != 0){
        puts("?");
        return 0;
    }
    
    if(dif + z > 0)puts("+");
    else if(dif - z < 0)puts("-");
    else puts("0");
    return 0;
}
