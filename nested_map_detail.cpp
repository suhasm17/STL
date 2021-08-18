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
    /*Suppose we are given the first name and last name of a student
      corresponding to which we are given his marks in his subjects.
      (Each student may have different number of subjects)
    ->We are using a nested map to store the names in lexographical order and
      a vector to store the marks corresponding to that name*/  

   map<pair<string,string>,vector<int>> m;
   ll int n,i,k,j;
   cin>>n;
   for(i=0;i<n;i++)
   {
      string fn,ln;
      int ns;
      cin>>fn>>ln>>ns; //getting the first & last name and the no of subjects
      for(j=0;j<ns;j++)
      {
        int marks;
        cin>>marks;
        m[{fn,ln}].pb(marks); // pushing the marks to the vector corresponding to that name
      }
   }
   //printing the map 
   for(auto pa: m)
   {
        cout<<(pa.first).first<<" "<<(pa.first).second<<endl; // printing the first and last name
        cout<<pa.second.size()<<endl;
        for(k=0;k<pa.second.size();k++)  //priting the vector of marks of that name
            cout<<pa.second[k]<<" "<<endl; 
   }
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
