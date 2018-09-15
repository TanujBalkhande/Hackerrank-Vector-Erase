#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int n,n1,n2,n3,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>n1>>n2>>n3;
    v.erase(v.begin()+(n1-1));
    v.erase(v.begin()+(n2-1),v.begin()+(n3-1));
    int s=v.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
