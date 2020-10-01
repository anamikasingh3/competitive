#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BSFirst(vector<int> arr,int num, int n)
{
    int result=-1, left=0, right=n-1;

    while (left<=right)
    {
        int mid=(left+right)/2;

        if (arr[mid]==num)
        {
            result=mid;
            right=mid-1;
        }

        else if (arr[mid]<num)
        {
            /* code */
            left=mid+1;
        }
        
        else
        {
            right=mid-1;
        }
        
    }

    return result;
    
}

int BSLast(vector<int> arr,int num, int n)
{
    int result=-1, left=0, right=n-1;

    while (left<=right)
    {
        int mid=(left+right)/2;

        if (arr[mid]==num)
        {
            result=mid;
            left=mid+1;
        }

        else if (arr[mid]<num)
        {
            /* code */
            left=mid+1;
        }
        
        else
        {
            right=mid-1;
        }
        
    }

    return result;
    
}

int main()
{
    int t,n,x,kk;
    
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        
        vector <int> arr;
        
        for(int i=0; i<n ; i++)
        {
            cin>>kk;
            arr.push_back(kk);
        }
        
        int inFirst=BSFirst(arr,x,n);
        int inLast=BSLast(arr,x,n);
        
        if(inFirst==-1) {cout<<-1<<"\n";}
        else {cout<<inFirst<<" "<<inLast<<"\n";}
    }
    
}