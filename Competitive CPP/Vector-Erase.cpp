#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    cin >>n ;
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    int f,s,l;
    cin>>f>>s>>l;
    v.erase(v.begin()+f-1);
    v.erase(v.begin()+s-1, v.begin()+l-1);
     for (int r: v){
        cout<< r << " ";
    }
    return 0;
}
