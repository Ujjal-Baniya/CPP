#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>> x;
        v.push_back(x);
    }
    int q, opt;
    cin >> q;
    for(int i=0; i<q; i++){
        cin>> opt;
        auto it = lower_bound(v.begin(), v.end(), opt);
        // int index = distance(v.begin(), it)+1;
        if( *it == opt)
        {
             cout<<"yes "<<(it - v.begin()+1)<<endl;
        }
        else{
            cout<<"No "<<(it - v.begin()+1)<<endl;
        } 
    }
}