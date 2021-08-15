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
    int a[]= {1,2,7,5,5,2,8,0};

    //Syntax of creating a multiset
    //Pushing the elements of an array into a multiset
    // s= {0,1,2,2,5,5,7,8}
    multiset<int> s(a,a+8);  //---> multiset of integer elements
    multiset<string> st;  //---> multiset of strings

    /*Inserting an element into the multiset
      The elements inserted into the multiset are stored in ascending order 
      or lexographically same as sets*/

    st.insert("abc");
    st.insert("aaa");   //Time complexity of this operation is same as that 
    st.insert("abd");   //in case of maps that is O(log n)
    st.insert("xyz");
    st.insert("zzz");
    st.insert("abc");
    st.insert("xyz");

    //Traversing the elements of the multiset(Two methods)
    
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<endl;

    for(auto val : st)
        cout<<val<<endl;

    /*Finding an element in the multiset
    If an element is found in the multiset,find() returns an iterator 
    pointing to that element
     ->if the element that we are trying to find out is present multiple
       times then, find() returns an iterator pointing to the first 
       apperance of that multiple times present element
    
    If the element is not found in the multiset, find() returns iterator 
    pointing to end()*/

    auto it = s.find(10);
    if(it==s.end())
        cout<<"Element not found"<<endl;
    
    it=s.find(5);
    if(it!=s.end())
        cout<<"Elememt Found"<<endl;

    /*Erasing or Deleting an element from the multiset
     ->erase() works normally for single existence elements
     ->if the element that we are trying to erase is present multiple
       times then, erase() 
        ==>erases the first apperance of the element if we use an iterator
           to erase that element
        ==>erases the entire existence of the element if we erase the 
           element directly*/

    auto it2=st.find("abc");
    st.erase(it2);  //Deletion using an iterator

    st.erase("xyz"); // Direct Deletion(entire existence)

     for(auto val : st)
        cout<<val<<endl;
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
