#include<bits/stdc++.h>
using namespace std;
class miami{
    public:
    static int count;
    string name;
    int acc;
    void insert_data(string a ,int b){
        this ->name = a;
        this ->acc = b;
        count++;
    }
    void display(){
        cout<<"name: "<<name<<" "<<"acc :"<<acc<<endl;
    }
};
int miami::count = 0;
int main(){
    miami m[1],m2;
    m[1].insert_data("ujjal",2256);
    m2.insert_data("ram",62032);
    cout<<"count: "<<miami::count<<endl;
}