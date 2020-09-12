#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> M;
    M[0] = 123;
    M[1] = 456;
    M[2] = 789;
    auto x = M.find(123);
    map <char, int> cnt;
    string v;
    cout<< "Enter a string: ";
    cin >> v;
    cout<<v<<endl;
    for(char r: v){
        cout<<r<<" ";
        cnt[r]++;
    }
    cout<<endl;
    cout<<cnt['j']<<" "<< cnt['a']<<endl;
}