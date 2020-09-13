#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double x, y, z;
        cin >> x >> y >>z;
        cout << hex << right<< showbase << nouppercase; 
        cout << (long long) x << endl; 

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); 
                cout << y << endl;

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << z << endl; 
    }
}