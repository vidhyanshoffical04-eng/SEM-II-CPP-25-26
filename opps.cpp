#include<iostream>
#include<string>
using namespace std; 

class Student{
    public:
    string name;
    float marks;
    string subject;
    void changesalary(float newmarks){
        marks = newmarks;
    }
};
int main(){
    Student S1;
    S1.name = "Vidhyansh";
    S1.marks = 18;
    S1.subject ="c++";
    cout<<S1.marks<<endl;
    return 0;

}