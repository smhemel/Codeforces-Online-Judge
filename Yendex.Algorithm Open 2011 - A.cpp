#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  vector<char> st;
  for(int i=0;i<s.length();i++) {
    if(st.size()&&st.back()==s[i])
          st.pop_back();
    else 
          st.push_back(s[i]);
  }
  for(int i=0;i<st.size();i++)putchar(st[i]);
  puts("");
  return 0;
}