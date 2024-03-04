#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp   = *x;
    *x   = *y;
    *y   =  temp;
}
void insertionSort(int a[], int n)
{
    for( int i = 1 ; i <=n-1 ; i++)
    {
        int j = i;
        while( j > 0  && a[j-1] > a[j])
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
}

int binarySearch(int a[], int n, int t)
{

    //Before Binary search array needed to be sorted
    insertionSort (a,n);

    //binarySearch begins
    int low = 0;
    int high = n-1;
    while ( low<=high)
    {
        int middle = low + ( high - low ) /2 ;
        int value = a[middle];
        if( value < t )
        {
            low = middle+1;
        }
        else if ( value > t )
        {
            high = middle - 1;
        }
        else return middle;
    }
    return -1;
}
int main()
{
    {
        int n, t;
        cout<<"Insert the size of int array: ";
        cin>>n;
        int a[n];  //{2,8,5,3,9,4}
        cout<<"Insert the "<<n<<" int elements for array: ";
        for( int i = 0 ; i < n ; i ++)
        {
            cin>>a[i];
        }

        cout<<"The int you want to search: ";
        cin>>t;
        int index = binarySearch(a,n,t);
        if( index != -1)
        {
            cout<<"Element found in index: "<<index<<endl;
        }
        else
        {
            cout<<"Element not found"<<endl;
        }
    }

    return 0 ;
}
