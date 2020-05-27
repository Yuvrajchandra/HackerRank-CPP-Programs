#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x;
    vector <int> vec;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(x);
    } 
    sort(begin(vec), end(vec));
    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
