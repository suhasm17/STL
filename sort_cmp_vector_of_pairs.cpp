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
bool cmp(pair<ll int,ll int> a,pair<ll int, ll int> b)
{
/* Here pair a and b are the two pairs we are comparing in our comparator function
   Since we are already aware of the properties of the comparator function. we are gonna apply that 
   here.
   
   -> we need to arrange our elements in ascending order with reference to first
      elements and if first elements appear to be same then we arrange the second elements
      of those first elements in descending order

*/
    /* First we are checking if the first elements aren't the same
       if they aren't the same then we need our list in ascending order with 
       reference to the first elements.So so we are writing the below logic
    */
       if(a.first!=b.first)
        return a.first<b.first;

    /*If the first elements tend to be the same then we need our list in descending order
      with reference to the second elements.Hence we wrote the below logic
    */ 
     else
        return a.second>b.second;

/* Like this comparator function can be used to customize the behaviour of the sort function
    If you cant understand this then watch luv video on youtube in STL playlist...!
*/
}
void solve()
{
    /* Let us consider a vector of pairs of integers and we know that by default 
       if we apply sort  to this vector of pairs of integers.
       -> The sort happens according  to the first element of the pairs
       -> if first elements tend to be the same then the comparsion occurs between
          the second element of those pairs
       -> So basically what happens here is that sorting happens in ascending order with reference
          to the first elements of the pairs and if the first elements are same then their second elements
          are compared and sorting happens in ascending order with reference to second elements

          But what if we need sorting such that sorting should happen in ascending order with reference
          to the first elements of the pairs and if the first elements are same then their second elements
          should be compared and sorting  should happen in descending order with reference to second elements

          Here is how it can be done...!

          INPUT COPY
          4 3
          1 2
          1 5
          1 3
          5 2
          5 3
          6 10
          3 7
    */


    ll int n,i;
    vector<pair<ll int,ll int>> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        ll int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    
    //performs normal sort and sorts the elememts in ascending order(normal logic)
    sort(v.begin(),v.end());


    /*
       Usage of the comparator function cmp to achieve our logic
    */
    sort(v.begin(),v.end(),cmp);

    for(auto val : v)
        cout<<val.first<<" "<<val.second<<endl;
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
