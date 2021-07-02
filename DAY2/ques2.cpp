//intersction of 2 unsorted array


#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    int n,m,k,l;
    cin>>n>>m;
  int arr[n];
  int brr[m];
  set<int>s;
for(int i=0;i<n;i++)
{

    cin>>arr[i];
    s.insert(arr[i]);
}
for(int i=0;i<m;i++)
{

    cin>>brr[i];

}
vector<int>res;
for(int i=0;i<m;i++)
{

    if(s.find(brr[i])!=s.end())
        res.push_back(brr[i]);
}
for(int i=0;i<res.size();i++)
    cout<<res[i]<<endl;
}
