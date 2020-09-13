#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,n1,count=0;
  string arr,arr1;
  cout<<"enter the first characters: \n";
  cin>>arr;
  cout<<"enter the second characters\n";
  cin>>arr1;
  n=arr.size();
  n1=arr1.size();
  sort(arr.begin(),arr.end());
  sort(arr1.begin(),arr1.end());
  if(n1 != n)
  {
    cout<<"not anagram";
  }
  else
  {
      for(int i=0;i<n;i++)
      {
        if(arr[i] != arr1[i])
        {
          count++;
        }
      }
      if(count==0)
      {
        cout<<" the given characters is anagrams\n";
      }
      else
      {
        cout<<"not anagrams\n";
      }
  }
  return 0;
}
