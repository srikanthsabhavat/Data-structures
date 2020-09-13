#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
  int j,min=0;
  for(int i=0;i<n;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      while(j < n && arr[j] < arr[min])
      {
        min=j;
      }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
  int n,arr[200];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  selection_sort(arr,n);
  return 0;
}
