#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll test=1;
    cin>>test;
    while(test--){
        ll i,n,k;
        cin>>n;
        vector<ll> v(n);
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        for(i=0,k=n-1;i!=k;){
            cout<<v[i]<<" ";
            i++;
            
            cout<<v[k]<<" ";
            k--;
            
        }
        cout<<"\n";
        

    }
}