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
#define fi first
#define se second
template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max(const std::map<KeyType,ValueType>& x ) 
{
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) 
  {return p1.second < p2.second;}); 
}
void solve()
{
    int a[]= {1, 2, 3, 4, 5, 5};

    //Syntax of creating a set
    //Pushing the elements of an array into a set
    // s= {1, 2, 3, 4, 5}
    set<int> s(a,a+6);  //---> set of integer elements
    set<string> st;  //---> set of strings

    set<int> s2(s);             // Copy of s2
    set<int> s3(s2.begin(), s2.end());  // Set created using iterators

    /*Inserting an element into the set
      The elements inserted into the set are stored in ascending order or 
       lexographically same as maps*/

    st.insert("abc");
    st.insert("aaa");   //Time complexity of this operation is same as that 
    st.insert("abd");   //in case of maps that is O(log n)
    st.insert("xyz");
    st.insert("zzz");

    //Traversing the elements of the set(Two methods)
    
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<endl;

    for(auto val : st)
        cout<<val<<endl;

    /*Finding an element in the set
    If an element is found in the set, find() returns an iterator pointing to
    that element
    If the element is not found in the set, find() returns iterator pointing
    to end()*/

    auto it = s.find(7);
    if(it==s.end())
        cout<<"Element not found"<<endl;
    
    it=s.find(5);
    if(it!=s.end())
        cout<<"Elememt Found"<<endl;

    //Erasing or Deleting an element from the set

    auto it2=st.find("abd");
    st.erase(it2);  //Deletion using an iterator

    st.erase("zzz"); // Direct Deletion

     for(auto val : st)
        cout<<val<<endl;

//Implementation of Unordered sets is same as Unordered Maps
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
