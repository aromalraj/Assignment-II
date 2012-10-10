
/* Program to implement queue.
   input:item-item to be added to queue,ch-choice.
   output:queue[]-queue array.
   date:7/10/2012.
*/

#include <iostream>

using namespace std;

char ans;//global declaration
int ch,queue[10],front=0,rear=-1,item;

void enqueue(int item) //function to insert elements to queue
{
  if(rear==9)
  {
      cout<<"queue overflow!!!\n";
  }
  else
  {
      rear++;
      queue[rear]=item;
  }


}
void dequeue()    //function to delete elements from queue
{
    if(rear==-1)
    {
         cout<<"sorry!!! no elements in queue!!!\n";
    }
    else
    {
        item=queue[front];
        front++;
        cout<<"the element dequed is\n"<<item;
    }


}
void view()      //function to display elements of queue
{
    for(int i=front;i<=rear;i++)
    cout<<" "<<queue[i]<<"---";
}


int main()     //main function
{
    do
    {
    cout<<"the queue operations are"<<endl<<"1.enqueue"<<endl<<"2.dequeue"<<endl<<"3.display"<<endl <<"4.exit"<<endl;

    cout<<"enter your choice\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
        cout<<"enter the element to be inserted in to the queue\n";
        cin>>item;
        enqueue(item); //function call to insert element
        break;

        case 2:
        dequeue();   //function call to delete element
        break;

        case 3:      //function call to display elements of queue
        view();
        break;

        case 4:
        goto label;

        default:
        cout<<"\nwrong choice";
        break;

    }
    cout<<"\nDo you want to continue [Y/N] ??? \n";
    cin>>ans;
    }
       while(ans=='y'||ans=='Y');
    label:
    return 0;

    }
