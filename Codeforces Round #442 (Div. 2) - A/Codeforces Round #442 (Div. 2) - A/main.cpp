
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string s;
int main(){
    cin >> s;
    int cnt = 0;
    for(int i=0; s[i]; i++){
        string s1 = "";
        for(int l=i; s[l]; l++){
            s1 += s[l];
            if(s1=="Danil"){
                cnt++;
                break;
            }
            if(s1=="Olya"){
                cnt++;
                break;
            }
            if(s1=="Slava"){
                cnt++;
                break;
            }
            if(s1=="Ann"){
                cnt++;
                break;
            }
            if(s1=="Nikita"){
                cnt++;
                break;
            }
        }
    }
    if(cnt==1) puts("YES");
    else
        puts("NO");
    return 0;
}
