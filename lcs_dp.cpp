//longest common subsequence using dynamic programming
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int str[100][100];
int lcs(char* a,char *b,int n,int m)
{
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=m;j++)
    {

      if(i ==0 || j==0)
      {
        str[i][j]=0;
      }
      else if(a[i-1] == b[j-1])
      {
        str[i][j]=1+str[i-1][j-1];
      }
      else
      {
        str[i][j]=max(str[i-1][j],str[i][j-1]);
      }
    }
  }
  return str[n][m];
}
int main()
{
  char a[100],b[100];
  cin>>a;
  cout<<"\n";
  cin>>b;
  int n=strlen(a);
  int m=strlen(b);
  cout<<lcs(a,b,n,m);
  return 0;
}
