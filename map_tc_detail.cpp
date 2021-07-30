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
   /* Time complexity of Maps
      We know that map are internally implemented using red-black trees
     -> Every basic operation(adding,finding,deleting) in maps 
        takes O(log(n)) time, where n is the current size of the map.
     
     -> This is because as we are familiar that storage technique of maps 
        is such that they are stored in a sorted fashion interms of key.
        Therefore,while performing basic operations internal comparisons 
        are made between the key values to perform the given operation.

     -> So adding n elements to a map consumes n*O(log(n)) time.
        Each element takes O(log(n)) and we have in total n elements
         which brings the total time complexity to n*O(log(n)).

     ->But when we have string as the key, we know that they are stored in
       lexographical fashion.During internal comparison the size of each 
       string also comes into existence.Hence every basic operation
       (adding,finding,deleting) in maps which has string as a key
       takes size*O(log(n)) time, where n is the current size of the map
       and size is the size of the string(which is the key).

    -> So adding n elements to a map which has string as a key consumes 
       size*n*O(log(n)) time.where size is the constraint on size of the
       string inputs.
       So during problems involving string as a key for a map,ensure that
       the constraints on the size of string fit in properly for the time
       complexity.
       For example: 
      If size=100,n=10^5  
      Total TC= 100*(10^5)*O(log(10^5)) =O(10^7)(fits in properly)
      If size=10^5,n=10^5
      Total TC= 10^5*(10^5)*O(log(10^5)) =O(10^10)(doesn't fit properly)*/

      map<int,int> m;
      m[1]=36;
      m[2]=24;
      m[3]=45;
      /*This statement inserts the key 8 in the map and intializes
        with default value 0 (as we haven't intialized any value)*/
      m[0]; 
      cout<<m[0]<<endl;
      m[0]=100;
      cout<<m[0]<<endl;
      
      map<int,string> ma;
      ma[1]="aac";
      ma[2]="abc";
      ma[3]="acd";
    /*Interms of string this statement inserts the key xyz in the map and 
    intializes with default value " " which is an empty string into the map*/
      ma[0];
      cout<<ma[0]<<endl;
      ma[0]="xyz";
      cout<<ma[0]<<endl;
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