#include<bits/stdc++.h>
using namespace std; 
class employe{
    public:
        int id;
        float salary;
        string name;
        // employe(int i, float s, string n){
        //     id =i;
        //     name = n;
        //     salary = s;
        // }
        // employe(){
        //     cout<<"constructor invoked";
        // }
        // ~employe(){
        //     cout<<"Constructor deleted";
        // }

         employe(int i, float s, string n){
            this -> id =i;
            this -> name = n;
            this -> salary = s;
         }
        void display(){
            cout<<"Name: "<<name<<" "<<"ID: "<<id<<" "<<"Salary: "<<salary<<endl;
        }

};
int main()  
{  
 employe e1 = employe(182562,5220601,"Ujjal");
 e1.display();
 employe e2 = employe(12212, 1232021,"shyamu");
 e2.display();
    // employe e1,e2;
return 0;  
}  