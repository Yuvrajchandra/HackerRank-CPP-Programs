#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[1000];
    int N,i,j;
    cin>>N;
    for(i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    for(i=0, j=N-1 ; i<j ; ++i, --j)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
    for(i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
