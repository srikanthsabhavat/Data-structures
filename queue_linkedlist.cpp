#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;
};
struct node *front=NULL;
struct node* rear=NULL;
void insert(int key)
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data = key;
  temp->next = NULL;

  if(front == NULL)
  {
    front =temp;
    rear=temp;
  }
  else
  {
    rear->next=temp;
    rear=temp;
  }
}
void dequeue()
{
  if(front == NULL || rear ==  NULL)
  {
    cout<<"empty queue";
  }
  else
  {
    front = front->next;
  }
}
void display()
{
  struct node *q=front;
  if(front == NULL || rear == NULL)
  {
    cout<<"for display emty queue";
  }
  else
  {
    while(q != NULL)
    {
      cout<<q->data<<" ";
      q=q->next;
    }
  }
}

int main()
{
  int n,ch,a,b;
  while(1){
    cout<<"\n1.insert\n 2.delete\n 3.display\n 4.exit";
    cin>>ch;
    switch (ch)
    {
      case 1:
              cout<<"enter the insert number\n";
              cin>>a;
              insert(a);
      break;
      case 2: cout<<"enter the delete data ";
              cin>>b;
              dequeue(b);
      break;
      case 3: display();
      break;
      case 4: exit(1);
      default: "enter the correct number";
    }

  }
  return 0;
}
