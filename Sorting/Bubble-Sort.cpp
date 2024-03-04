#include <bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp   = *x;
    *x   = *y;
    *y   =  temp;
}
void bubbleSort(int a[], int n)
{
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < n ; j++ )
        {
            if(a[j] > a[j+1] )
            {
                swap(a[j] , a[j+1]);
            }

        }
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for( int i = 0 ; i < n ; i ++)
    {
        cin>>a[i];
    }
    bubbleSort(a,n);

    for( int i = 0 ; i < n ; i ++)
    {
        cout<<a[i]<<" ";
    }

    cin.get();
}

