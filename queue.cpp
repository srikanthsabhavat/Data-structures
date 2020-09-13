// implimenting queue using array
#include<iostream>
using namespace std;
int  n=10;
int queue[100];
//just a normal array
int front =-1;
int rear=-1;
void enqueue(int data)
{
  if(rear == n-1)
  {
    cout<<"queue is full";
  }
  else
  {
    if(front==-1)
    {
      front=rear=0;
      queue[rear]=data;
    }
  }
}
/*void enqueue() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
*/
void dequeue()
{
  if(front ==-1 && rear == -1)
  {
    cout<<"stack is empty";
  }
  else if(front == rear)
  {
    front =-1;
    rear =-1;
  }
  else
  {
    front++;
  }
}
void display()
{
  if(front ==-1 && rear==-1)
  {
    cout<<"queue is empty";
  }
  else
  {
    for(int i=front;i<=rear;i++)
    {
      cout<<queue[i]<<"  ";
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
