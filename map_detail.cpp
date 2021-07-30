/*
- - - - - - - - - - -
Author:artist17
- - - - - - - - - - -
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() 
{
   int i,n=10;
   map<int,int> m;
   for(i=0;i<n;i++)
   {
     m[i]++;
   }
   cout<<m.size()<<endl;   //returns the size of the map (in this case 10)
   cout<<m.empty()<<endl; //returns whether map is empty or not(either 0 or 1)

   auto it=m.begin();
   m.erase(it); //erases the element pointed by iterator it
   m.erase(4); //erasing the element using key value 
  
  //one way of accessing our elements in map (using the iterator it)
  for(auto it=m.begin();it!=m.end();it++)
   {
        cout<<(*it).first<<" "<<(*it).second<<endl;
   }
   
   m[4]=55; //one way of inserting element into map (using key value)
   m.insert({0,25}); //another way to insert element into map(insert func)

   /*We know that elements of the map are nothing but pairs where
        Key value = First value of the pair
        Mapped value = Second value of the pair
    So elements of the map can also be traversed using another method*/
    cout<<"\n";
   
   //another way of accessing our elements in map 
   for(pair<int,int> it : m)
   {
        cout<<it.first<<" "<<it.second<<endl;
   }
   
  /*To find an element in the map we can use the find() function 
    -> here we search for any elment by using the key
    -> if the key that is passed as an arguement exists, then the
       functions returns an iterator pointing to that key. Otherwise
    -> the function returns m.end() */ 
   
   auto jt =m.find(4);
   cout<<jt->first<<" "<<jt->second<<endl;
   jt=m.find(10);
   if(jt==m.end())
    cout<<"Key Doesnt Exists"<<endl;

   m.clear(); //clears all the elements in the map
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
