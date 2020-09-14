#include<bits/stdc++.h>
using namespace std;

int main(){
    long long s;
    int n;
    cin >> n;
    long long sdash = 0;
    vector <int> v (n,0);
    for(int i=0; i<n; i++) cin>>v[i], s+=v[i];

    if(s&1){
        cout<<"NO";
        return 0;
    }

    map <long long, int> first, second;

    first[v[0]] = 1;
    for(int i=1; i<n; i++) second[v[i]]++;

    
    for (int i = 0; i<n ; i++){
        sdash += v[i];
        if(sdash == s / 2){
            cout<<"YES \n";
            return 0;
        }
        if(sdash< s / 2){
            long long x = s/2 - sdash;
            //  Delete element from second half and insert in first half
            if(second[x] > 0){
                cout<<"YES \n";
                return 0;
            }
        }
        else
        {
            long long y = sdash - s/2;
            if(first[y] > 0){
                cout<<"YES \n";
                return 0;
            }
        }
        first[v[i+1]]++;
        second[v[i+1]]--;
    }
    cout<<"NO\n";
    
}