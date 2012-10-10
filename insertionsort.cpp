
/* Program to implement insertion sort.
   input:a[]-array to store elements,n-size of array.
   output:a[]-the sorted array.
   date:6/10/2012.
*/

#include <iostream>

using namespace std;

int main()
{
    int a[20],temp=0,n;

    cout<<"enter the size of array\n";  // getting size of array
    cin>>n;

    cout<<"enter the array elements\n";  //getting array elements
    for(int i=0;i<5;i++)
    cin>>a[i];

    for(int i=1;i<5;i++)      //sorting subcode
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
        cout<<"the array after "<<i<<" iteration is";
        for(int i=0;i<5;i++)      //loop to display sorted array
        cout<<" "<<a[i];

        cout<<"\n";
    }
    return 0;
}
