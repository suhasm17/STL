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
   ll int n,i;
   cin>>n;
   vector<ll int> v;
   vector<ll int> nge(n);
   stack<ll int> st;
   while(n--)
   {
     ll int ele;
     cin>>ele;
     v.pb(ele);
   }
   for(i=0;i<v.size();i++)
   {
     while(st.empty()==false && v[st.top()]<v[i] )
     {
        nge[st.top()]=v[i];
        st.pop();
     }
     st.push(i);
   }
    while(!st.empty())
   {
       nge[st.top()]=-1;
       st.pop();
   }
   for(i=0;i<v.size();i++)
    cout<<v[i]<<" "<<nge[i]<<endl;

}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
return 0;
}
