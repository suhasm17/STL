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
void solve()
{
    ll int n,i;
    //map<ll int,set<string>>m; // using this is wrong.. why???
    map<ll int,multiset<string>>m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        ll int marks;
        string s;
        cin>>s;
        cin>>marks;
        m[marks].insert(s);
    }
    auto it=m.end();
    --it;
    while(true)
    {
        auto names=(*it).second;
        for(auto st: names)
            cout<<st<<" "<<(*it).first<<endl;
        if(it==m.begin())
            break;
        --it;
    }
// there is another way of printing without iterating in the reverse order
// what is it?? (-1 trick)
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
