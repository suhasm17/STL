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
bool cmp(ll int a, ll int b)
{
/* Here a and b are the two numbers we are comparing in our comparator function
   Since we are already aware of the properties of the comparator function. we are gonna apply that 
   here.
   
   -> we need to arrange our elements in descending order
   -> so if a>b we gonna => return true 
       because we dont need to swap as we need the list in descending order)
   -> else we gonna => return false
       because we need to perform the swap
     (read the above lines neatly and visualize camly you will understand it)

*/
     if(a>b)
        return true;
    else
        return false;
   
 /*
 Simple way to remember on how to write the  return logic 
 (just return whatever the way you want our list to be)
 -> if we need our list in descending order then return a>b
 -> if we need our list in ascending order then reurn a<b
 */
}
void solve()
{
    ll int n,i;
    vector<ll int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        ll int ele;
        cin>>ele;
        v.pb(ele);
    }
    
    //performs normal sort and sorts the elememts in ascending order
    sort(v.begin(),v.end());

    
    /* Now if we need to sort our elements in descending order.We make use of the
       comparator function to define our custom behaviour for sort.

       -> here cmp is the comparator function which we are using and its a boolean function
       -> when we use comparator function in sort we need to keep in mind its properties which 
          states that :
          -> if we need to make a swap between the two numbers we are comparing then return false
          -> else return true
    */
    sort(v.begin(),v.end(),cmp);

    for(auto val : v)
        cout<<val<<endl;
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
