#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int val;
    
    while(cin>>val)
    {
        v.push_back(val);
    }
    //  int v[1000],n=0;
    // while(scanf("%d ", &v[n])>0){
    //     n++;
    // }
    int l=v.size()/2;
    //for(int i=0;i<v.size();i++){
    // for(int j=0;j<l;j++)
    // {
    int q=v.size()/2;
    partial_sort(v.begin(),v.begin()+q,v.end(),greater<int>());
        
    //}
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}