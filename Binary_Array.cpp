#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,flag = 0;
    cin>>n;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(x>=2 || x<0) flag++; 
        v.emplace_back(x);
    }
    if(flag==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}