#include <bits/stdc++.h>
using namespace std;

# define  mex 1e8
bool arr[100000000];

int  main()
{
    int l,r,j;
   
    cin>>l>>r;
   
    int cnt=0;
   
    arr[0]=true;
   
    arr[1]=true;
   
    for(int i=2;i*i<mex;i++)
    {
        if(arr[i]==false)
        for(j=i*i;j<mex;j+=i)
        arr[j]=true;
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==false) cnt++;
    }
   
    cout<<cnt<<endl;
}
