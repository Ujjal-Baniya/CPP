#include<bits/stdc++.h>
using namespace std;

int main(){
    map <string, int> m;
    int n, opt, val;
    string name;
    cin>> n;
    while(n--){
        cin>> opt;
        cin>> name;
        if(opt==1){
            cin>> val;
            if(m[name]){
                m[name]+=val;
            }
            else
            m.insert(make_pair(name, val));
        } 
        else if(opt==2){
            m.erase(name);
        }
        else{
            auto it = m.find(name);
            if(it !=m.end()){
                cout<< it->second <<endl;
            }
            else{
                cout<< "0" <<endl;
            }
        }
    }
}