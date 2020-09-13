#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n)
{
  int s[100];
  s[0]=1;
  for(int i=i;i<n;i++)
  {
    s[i]=1;
    for(int j=0;j<i;j++)
    {
      if(arr[i]>arr[j] && s[i]<s[j]+1)
      {
        s[i]=s[j]+1;
      }
    }
  }
  int max=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]> max)
    {
      max=s[i];
    }
  }
  return max;
}
int main()
{
  int arr[100],n,count=0;
  cout<<"enter the no of numbers:";
  cin>>n;
  cout<<"enter the numbers:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<lis(arr,n);
  return 0;
}
