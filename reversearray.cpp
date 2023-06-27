// Program to print array in reverse order

#include <iostream>

using namespace std;

void printarr(int a[], int n)
{
    for(int i=0; i<n; i++)
        cout<<" "<<a[i]<<"\t";

    cout<<endl;
}

void revarr(int a[], int n)
{
    int s=0, e=n-1;
    while(s<e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
}

int main() 
{
	int a[]={1,2,3,4,5};

   	int n=sizeof(a)/sizeof(int);

	cout<<"\n Original Array -> "<<endl;
   	printarr(a,n);

   	revarr(a,n);

	cout<<"\n Reversed Array -> "<<endl;
   	printarr(a,n);

	return 0;
}


