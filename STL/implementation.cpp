#include<bits/stdc++.h>

using namespace std;
bool f(int x, int y){
    return x > y;
}
int main(){

    // Vector
    vector <int> a = {11, 43, 2, 132};
    cout<< a[1]<<endl;

    sort(a.begin(), a.end());
    for (int x:a){
        cout<<x<<" ";
    }
    bool present = binary_search(a.begin(), a.end(), 143);
    cout<<"\n" << present<< endl;
    present = binary_search(a.begin(), a.end(), 43);
    cout<< present<<endl;

    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    // sort(a.begin(), a.end());
    // lower bound upperbound
    vector <int>::iterator it1 = lower_bound(a.begin(), a.end(), 100);
    vector <int>::iterator it2 = upper_bound(a.begin(), a.end(), 100);
    cout<< *it1 <<" "<< *it2<< endl;
    sort(a.begin(), a.end(), f);
    vector<int>:: iterator it3;
    for (it3= a.begin(); it3<a.end(); it3++){
        cout<< *it3<<" ";
    }
}