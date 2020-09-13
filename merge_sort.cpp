#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int merge_sort(int arr[],int n)
{
  int mid,low=0,high=n-1;
  if(low<high)
  {
    mid =(low+high)/2;
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    merge(arr,low,mid,high);
  }
  return 0;
}
int merge(int arr,int low,int mid,int high)
{
  int b[100];
  int i=low;
  int j=mid+1;
  int k=high;
  while(i<=mid && j <= high)
  {
    if(arr[i] <= arr[j])
    {
      b[k]=arr[j];
      i++;
    }
    else
    {
      b[k]=arr[j]
      j++;
      k++;
    }
  }
  if(i>mid)
  {
    while(j <= high)
    {
      b[k]=arr[j];
      j++;
      k++;
    }
  }
  else
  {
    while(i<=mid)
    {
      b[k]=arr[i];
      i++;
      k++;
    }
  }
  for(k=low;k <=high;k++)
  {
    arr[k]=b[k];
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
  merge_sort(arr,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]; 
  }
  return 0;
}
