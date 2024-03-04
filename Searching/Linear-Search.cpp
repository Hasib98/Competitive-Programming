#include<bits/stdc++.h>

using namespace std;
int linearSearch(int a[], int n, int t)
{
    for( int i = 0 ; i <=n ; i++)
    {
        if(a[i] == t)

        {
            return i;
        }
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
        int index = linearSearch(a,n,t);
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
