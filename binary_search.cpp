#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void binary_search(int arr[],int n,int key)
{
  int low=0,high=n-1,mid=0;
  while(low <= high)
  {
    mid=(low+high)/2;
    if(arr[mid] == key)
    {
      cout<<"element found "<<key;
      break;
    }
    else if(arr[mid] < key)
    {
      low = mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
}
int main()
{
  int n,arr[100],key;
  cout<<"enter the no of numbers:";
  cin>>n;
  cout<<"enter the numbers:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"enter the key";
  cin>>key;
  binary_search(arr,n,key);
  return 0;
}
