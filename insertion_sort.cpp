#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
  int k,j;
  for(int i=1;i<n;i++)
  {
    k=arr[i];
    j=i-1;
    while(j >= 0 && arr[j] > k)
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=k;
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int n,arr[100];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  insertion_sort(arr,n);
  return 0;
}
