#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pattern_searching(char *txt, char *p)
{
  int n=strlen(txt);
  int m=strlen(p);
  //scout<<n<<m;
  for(int i=0;i<=n-m;i++)
  {
    int j;
    for(j=0;j<m;j++)
    {
      if(txt[i+j] != p[j])
      {
        break;
      }
    }
    if(j == m)
    {
      cout<<"element found at \t";
      cout<<i;
      cout<<endl;
    }
  }
  return 0;
}
int main()
{
  char txt[100],p[100];
  cin>>txt;
  cin>>p;
  pattern_searching(txt,p);
  return 0;
}
