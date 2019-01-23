//
//  main.cpp
//  Codeforces Round #535 (Div. 3) - B
//
//  Created by S M HEMEL on 23/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int ar[21111],br[21111];
map<int,int>M;
vector<int>v,v1;
int main()
{
    int x;
    cin >> x;
    for(int i=0; i<x; i++){
        cin >> ar[i];
        M[ar[i]]++;
    }
    if(x==2){
        cout << ar[0] << " " << ar[1] << endl;
        return 0;
    }
    sort(ar,ar+x);
    for(int i=x-2; i>=0; i--){
        if(ar[x-1]%ar[i]!=0){
            cout << ar[x-1] << " " << ar[i] << endl;
            return 0;
        }
    }
    int Ma = 0;
    for(int i=0; i<x; i++){
        if(M[ar[i]]==1){
            v.push_back(ar[i]);
        }else {
            Ma = max(ar[i],Ma);
        }
    }
    if(v.size()==0){
        cout << ar[x-1] << " " << ar[x-1] << endl;
        return 0;
    }
    sort(v.begin(),v.end());
    if(v.size()==1){
        cout << Ma << " " << v[v.size()-1] << endl;
        return 0;
    }
    int Max = v[v.size()-1];
    for(int i=v.size()-2; i>=0; i--){
        if(Max%v[i]!=0){
            cout << Max << " " << v[i] << endl;
            return 0;
        }
    }
    if(Ma==0){
        cout << Max << " " << v[v.size()-2] << endl;
    }else
        cout << Max << " " << Ma << endl;
    return 0;
}
