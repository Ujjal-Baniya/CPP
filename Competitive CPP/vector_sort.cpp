#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,x;
    vector <int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    } 
    sort(v.begin(), v.end());
    for (int x:v){
        cout<<x<<" ";
    }
    return 0;
}
