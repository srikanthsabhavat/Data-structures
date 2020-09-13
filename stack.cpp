#include<iostream>
using namespace std;
int stack[100],top=-1,n;
void push();
void pop();
void show();
int main()
{
  cout<<"enter the no of element ";
  cin>>n;
  while(n)
  {
    cout<<"1. push \t 2.pop \t 3. show";
    int ch;
    cin>>ch;
    switch (ch) {
      case 1 : push();
                break;
      case 2 : pop();
                break;
      case 3  : show();
                break;

      default : " enter the correct number";
      /* value */
    }
    ch--;
  }
  return 0;
}
void push()
{
  int val;
  if(top == n)
  {
    cout<<"stack is overflow";
  }
  else
  {
    cin>>val;
    top=top+1;
    stack[top] = val;
  }
}
void pop()
{
  if(top == -1)
  {
    cout<<"stack is empty";
  }
  else
  {
    top=top-1;
  }
}
void show()
{
  for(int i=top;i>=0;i--)
  {
    cout<<stack[i] <<" \t";
  }
  if(top == -1 )
  {
    cout<<" stack is empty";
  }
}
