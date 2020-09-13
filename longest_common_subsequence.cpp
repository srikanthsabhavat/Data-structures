// longest common subsequence usign recurssion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char str1[100],str2[100];
int lcs(int i,int j)
{
  if(str1[i]=='\0' || str2[j]=='\0')
  {
    return 0;
  }
  else if(str1[i]==str2[j])
  {
    return 1+lcs(i+1,j+1);
  }
  else
  {
    return max(lcs(i+1,j),lcs(i,j+1));
  }
}
int main()
{
  int i=0,j=0;
  cout<<"enter the characters:";
  cin>>str1;
  cout<<"enter the 2nd characters";
  cin>>str2;
  cout<<lcs(i,j);
  return 0;
}
