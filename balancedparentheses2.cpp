/*
- - - - - - - - - - -
Author:artist17
- - - - - - - - - - -
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define f first
#define s second 
unordered_map<char,int> m = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
void solve()
{
   string s;
   cin>>s;
   stack<char> st;
   for(auto c : s)
   {
     if(m[c]<0)
     {
        st.push(c);
        continue;
     }
     else
     {
        if(st.empty())
        {
            cout<<"NO"<<endl;
            return;
        }
        char ct = st.top();
        if(m[ct]+m[c]==0)
        st.pop();
        else
        {
          cout<<"NO"<<endl;
          return;
        }
    }
  }
   if(st.empty())
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
return 0;
}
