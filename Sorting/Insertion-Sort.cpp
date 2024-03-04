#include <bits/stdc++.h>
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

int main()
{
    int n;
    cin>>n;
    int a[n];  //{2,8,5,3,9,4}
    for( int i = 0 ; i < n ; i ++)
    {
        cin>>a[i];
    }
    insertionSort(a,n);

    for( int i = 0 ; i < n ; i ++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cin.get();
}

