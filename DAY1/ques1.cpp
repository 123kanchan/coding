//remove duplicates from sorted array in non decreasing order
#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    if(n==0)cout<<0;
    for(int i=0;i<n;i++)cin>>arr[i];
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
          i++;
          arr[i]=arr[j];
        }
    }
    cout<<i+1;
}
