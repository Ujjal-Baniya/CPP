#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);
    for(int x:s){
        cout<< x<<" ";
    }
    auto it = s.find(3);
    if( it == s.end()){
        cout<<endl<< "Not found"<< endl;
    }
    else{
        cout<< *it<<endl;
    }

    auto it1 = s.lower_bound(-1);
    auto it2 = s.upper_bound(5);
    cout<< *it1<< endl;
    if (it2 == s.end()){
        cout<< "Not found"<< endl;
    }
    s.erase(2);
}