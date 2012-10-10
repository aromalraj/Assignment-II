
/* Program to implement stack.
   input:item-item to be added to stack,ch-choice.
   output:stack[]-stack array.
   date:5/10/2012.
*/

#include <iostream>

using namespace std;

int item,stack[10],top=-1,ch;//global declaration
char ans;

void push(int ele)    //push function definition
{
    if(top==9)
    {
        cout<<"\nstack overflow\n";
    }

    else
    {
        top++;
        stack[top]=ele;
    }

}
void pop()   //pop function definition
{
    if(top==-1)
    cout<<"\nstack underflow!!!!\n";

    else
    {
    item=stack[top];
    top--;
    cout<<"\nthe element popped is\n"<<item;
    }
}
void view()    //view function definition
{
    if(top==-1)
    cout<<"\nsorry !!!\nno elements in stack";

    else
    {
    for(int k=top;k>=0;k--)
    cout<<" |"<<stack[k]<<"|\n"<<" ----\n";
    }
}


int main()
{


    do
    {
    cout<<"the stack operations are"<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.view"<<endl <<"4.exit"<<endl;

    cout<<"enter your choice\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
        cout<<"enter the element to be inserted\n";
        cin>>item;

        push(item);  //function call to push elements to stack
        break;

        case 2:
        pop();      //function call to pop elements from stack
        break;

        case 3:
        view();    //function call to display elements of stack
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
