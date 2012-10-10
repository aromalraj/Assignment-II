
/* Program to implement merge sort.
   input:a[]-array to store elements,n-size of array.
   output:a[]-the sorted array.
   date:9/10/2012.
*/

#include <iostream>

using namespace std;

void merge(int*,int,int,int);
void mergesort(int *a, int low,int high) //function to split
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int *a,int low,int mid,int high)  //function to merge
{
    int h,i,j,b[50],k;
    h=low;
    i=low;
    j=mid+1;

    while((h<=mid)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=mid; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++)
    a[k]=b[k];
}

int main()
{
    int a[20],n;

    cout<<"enter the size of array\n";  // getting size of array
    cin>>n;

    cout<<"enter the array elements\n";  //getting array elements
    for(int i=0;i<5;i++)
    cin>>a[i];

    mergesort(a,0,n-1);

    cout<<"the sorted array is\n"
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}


