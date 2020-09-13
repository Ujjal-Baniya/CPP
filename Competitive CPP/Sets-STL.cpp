#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n, cmd, ele;
    cin >> n;
    while(n--){
        cin >> cmd >> ele;
        if(cmd == 1){
            s.insert(ele);
        }
        else if(cmd == 2){
            s.erase(ele);
        }
        else{
            auto it = s.find(ele);
            if(it == s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}