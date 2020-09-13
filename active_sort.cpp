// active sort using greedy algorithm
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int active_sort(int a[],int b[],int n)
{
  sort(b,b+n);
  int j=0;
  int i=0;
  int count=1;
  cout<<j<<" ";
  for(int j=1;j<n;j++)
  {
    if(i<j)
    {
      if(a[j] >= b[i])
      {
        count++;
        i++;
        cout<<j<<"  ";
      }
    }
  }
  return count;
}
int main()
{
  int a[]={1,3,0,5,8,5};
  int b[]={2,4,6,7,9,9};
  int n=sizeof(a)/sizeof(a[0]);
  cout<<active_sort(a,b,n);
  return 0;
}
