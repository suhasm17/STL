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
    // Input - 48 25 5 4 5 0 37
    ll int n,i;
    cin>>n;
    vector<ll int> v(n);
    for(i=0;i<n;i++)
        cin>>v[i];

    sort(v.begin(),v.end()); //sorting the list primarily

    //Implementation of lower bound O(log n)
    auto it=lower_bound(v.begin(),v.end(),5); //case 1
    cout<<(*it)<<endl;

    it=lower_bound(v.begin(),v.end(),6); // case 2
    cout<<(*it)<<endl;

    it=lower_bound(v.begin(),v.end(),78); // case 3
    if(it==v.end())
    cout<<"Lower bound Not Found"<<endl<<endl;

   
   //Implementation of upper bound O(log n)
    it=upper_bound(v.begin(),v.end(),5); //case 1
    cout<<(*it)<<endl;

    it=upper_bound(v.begin(),v.end(),6); // case 2
    cout<<(*it)<<endl;

    it=upper_bound(v.begin(),v.end(),78); // case 3
    if(it==v.end())
    cout<<"Lower bound Not Found"<<endl<<endl;

    //Implementation of lower and upper bound in sets and maps

     set<ll int> s;
     int a[]={48,25,5,4,5,0,37};
     for(i=0;i<7;i++)
        s.insert(a[i]);

    //works fine but O(n) complexity
    auto it2=lower_bound(s.begin(),s.end(),5); 
    cout<<(*it2)<<endl;

    //Implementation of lower bound O(log n) complexity
    it2=s.lower_bound(5); // case 1
    cout<<(*it2)<<endl;

    it2=s.lower_bound(6); // case 2
    cout<<(*it2)<<endl;

    it2=s.lower_bound(78); // case 3
    if(it2==s.end())
        cout<<"Lower Bound Not found"<<endl<<endl;

    //Implementation of upper bound O(log n)
    it2=upper_bound(s.begin(),s.end(),5); //case 1
    cout<<(*it2)<<endl;

    it2=upper_bound(s.begin(),s.end(),6); // case 2
    cout<<(*it2)<<endl;

    it2=upper_bound(s.begin(),s.end(),78); // case 3
    if(it2==s.end())
    cout<<"Lower bound Not Found"<<endl;
  
// Similar implementation for maps as well 
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
