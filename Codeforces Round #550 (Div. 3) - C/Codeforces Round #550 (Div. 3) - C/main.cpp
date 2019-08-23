//
//  main.cpp
//  Codeforces Round #550 (Div. 3) - C
//
//  Created by S M HEMEL on 2/4/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

//#include <bits/stdc++.h>
//#include <vector>
//using namespace std;
//int total;
//vector<int>first,second;
//int ar[211111];
//int main() {
//    int n,x;
//    cin >> n;
//    for(int i=0; i<n; i++){
//        cin >> x;
//        ar[x]++;
//        if(ar[x]==1) first.push_back(x);
//        if(ar[x]==2) second.push_back(x);
//        if(ar[x]==3) return 0 * puts("No");
//    }
//    puts("Yes");
//    cout << first.size() << endl;
//    sort(first.begin(),first.end());
//    for(auto el: first) cout << el << " ";
//    cout << second.size() << endl;
//    sort(second.begin(),second.end(),greater<>());
//    for(auto el: second) cout << el << " ";
//
//    return 0;
//}





//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//#include <utility>
//#include <map>
//using namespace std;
//vector<pair<int,int>>Graph[111];
//int node,edge,w,a,b;
//int dis[2111];
//int parent[2111];
//void bfs(int start){
//    for(int i=0; i<=node; i++) dis[i] = INT_MAX;
//    deque<int>q;
//    dis[start] = 0;
//    parent[start] = start;
//    q.push_back(start);
//    while (!q.empty()) {
//        int start = q.front();
//        q.pop_front();
//        for(auto nod: Graph[start]) {
//
//            if(dis[nod.first]>dis[start]+nod.second){
//                dis[nod.first] = dis[start]+nod.second;
//
//                //if(nod.second==0) q.push_front(nod.first);
//                q.push_back(nod.first);
//                parent[nod.first] = start;
//            }
//        }
//    }
//
//}
//int main() {
//    cin >> node >> edge;
//    for(int i=0; i<edge; i++) {
//        cin >> a >> b >> w;
//        Graph[a].push_back(make_pair(b,w));
//        Graph[b].push_back(make_pair(a,w));
//    }
//    bfs(0);
//    for(int i=0; i<=node; i++){
//        cout << i << " ----> " << dis[i] << endl;
//    }
//    return 0;
//}




#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <utility>
#include <map>
using namespace std;
int Graph[6][6] = {
    {0,5,6,INT_MAX,INT_MAX,INT_MAX},
    {5,0,7,2, INT_MAX,INT_MAX},
    {9,}
};
int d[111];
void bfs(int x){
    queue<int>q;
    d[x] = 0;
    q.push(x);
    while (!q.empty()) {
        x = q.front();
        q.pop();
        for(int i=0; i<=6; i++)
            if(Graph[x][i] != 0){
                if(d[i] > d[x]+Graph[x][i]){
                    d[i] = d[x]+Graph[x][i];
                    q.push(i);
                }
            }
    }
    
}
int main() {
    bfs(0);
    for(int i=0; i<=6; i++){
        cout << i << " ----> " << d[i] << endl;
    }
    return 0;
}
