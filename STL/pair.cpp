#include<bits/stdc++.h>
using namespace std;
int main(){
    set< pair<int, int>> s;
    int x=10, y = 20;
    while(x<100){
        s.insert({x, y});
        x += 10;
        y += 10;
    }
    int data;
    cout<<"Enter number: ?";
    cin>> data;
    auto it = s.upper_bound({data, INT_MAX});
    it--;
    pair <int, int> current = *it;
   cout<<current.first <<" "<<current.second <<endl;
}