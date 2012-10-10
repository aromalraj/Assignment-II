
/* Program to implement bubble sort.
   input:a[]-array to store elements,n-size of array.
   output:a[]-the sorted array.
   date:8/10/2012.
*/


#include <iostream>

using namespace std;

int main()
{
    int a[20],temp=0,n,k=1;

    cout<<"enter the size of array\n";  // getting size of array
    cin>>n;

    cout<<"enter the array elements\n";  //getting array elements

    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=n;i>0;i--)                    //sorting subcode
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
        cout<<"the array after "<<k<<" iteration is :";

        for (int i=0;i<5;i++)
        cout<<a[i]<<" ";

        k++;

        cout<<"\n";
    }


    return 0;
}
