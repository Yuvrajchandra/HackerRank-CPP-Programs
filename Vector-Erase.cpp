#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,element,position, range1, range2;
    vector <int> vec;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>element;
        vec.push_back(element);
    }
    cin>>position;
    vec.erase(vec.begin()+position-1);
    cin>>range1>>range2;
    vec.erase(vec.begin()+range1-1 , vec.begin()+range2-1);
    int reducedSize=vec.size();
    cout<<reducedSize<<endl;
    auto it=vec.begin();
    while(it!= vec.end())
    {
        cout<<*it<<" ";
        ++it;
    }

    return 0;
}
