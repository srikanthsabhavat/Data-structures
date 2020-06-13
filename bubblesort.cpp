#include<iostream>
using namespace std;
int main()
{
  int a,b,n,arr[100];
  cout<<"enter the n of number ";
  cin>>n;
  cout<<"enter the numbers";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(arr[i]<arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]  ;
  }
  return 0;
}
