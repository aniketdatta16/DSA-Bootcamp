//Left Rotation
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    
    cin>>n>>d;
    int *arr;
    
    arr= new int[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    d%=n;
    for(int i=0; i<n; i++)
    {
        cout<<arr[(d+i)%n]<<" ";
    }
    return 0;
}
