#include<bits/stdc++.h>
using namespace std;
struct name{
    int id;
    char grade;
    name(int i,char g){
        id = i;
        grade = g;
    }
    void diplay(){
        cout<<id<<" "<<grade<<endl;
    }
};

int main(){
    struct name n(123,'A'), n2(57, 'B'), n3(566, 'A');
    n.diplay();
    n2.diplay();
    n3.diplay();
}