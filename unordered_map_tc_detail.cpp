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
template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max(const std::map<KeyType,ValueType>& x ) 
{
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) 
  {return p1.second < p2.second;}); 
}

void solve() 
{
   /*Unordered Maps differ from Normal Maps in three ways

    *Implementation
     ->Maps are implemented using Red-Black Trees whereas Unordered Maps
       are implemented using Hash Tables.
     ->Internal comparisons are made using Hash Tables while performing
       the desired operations(adding,finding,deleting).
     ->In Unordered Maps there is no particular order of storage for both 
       integers & strings.
       That is there is no either sorted or lexographical order of storage
       based on the key values.They are stored randomnly without following 
       any order.*/
    
    unordered_map<int,int> m;
    m[1]=5;
    m[2]=6;
    m[5]=9;
    m[4]=3;
    m[0]=1;
    for(auto val: m)
    cout<<val.f<<" "<<val.s<<endl;

   /* *Time Complexity

    ->As Hash Tables are used internally for implementing unordered maps.The
      average time complexity of performing basic operations(adding,finding,deleting)
      is O(1).
    ->Because Elements are stored without any order and also usage of hash tables
      brings down the time complexity of performing any operations to O(1) time.
    ->So in all cases that is when key is an integer or key is a string the time 
      complexity of performing basic operations is O(1).*/
    
    unordered_map<string,int> ma;
    ma["aaa"]=5;
    ma["aac"]=6;
    ma["aab"]=9;
    ma["xyz"]=3;
    ma["abc"]=1;
    for(auto val: ma)
    cout<<val.f<<" "<<val.s<<endl;

   /* *Valid Data Types of Key

    ->In unordered maps we can have only some limited data types as our key 
      values as hash tables don't support hashing of complex data types.
    ->So we can have some simple data types like (int,float,ll int,string etc)
      as our key values and we can't have (vector,pair,set,vector of pair etc) 
      as our key values.
    ->But in case of maps this ain't the case we can have any data type as our 
      key value.*/

    unordered_map<string,int> mb; //this line compiles successfully
    //unordered_map<vector<int>,int> mc; //this line throws error
    map<vector<int>,int> md; //this line compiles successfully
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