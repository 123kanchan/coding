//given a matrix find the maxbalance of acustomer and retun that customer id.
#include<iostream>
using namespace std;
int  main()
{
    int r,c;
    cin>>r>>c;
    int mat[r][c];
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {

            cin>>mat[i][j];
        }
    }
    int sum,cust_id;
    int res=INT_MIN;
    for(int i=0;i<r;i++)
    {

        sum=0;
        for(int j=0;j<c;j++)
        {

            sum+=mat[i][j];
        }
        if(sum>res){
            res=sum;
            cust_id=i+1;
        }
    }
    cout<<cust_id;
}
