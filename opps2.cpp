#include<iostream>
#include<string>
using namespace std;

class Engineer{
    public:
    string name;
    string branch;
    float salary;
    float experience;
    void changesalary(float newsalary){
    salary=newsalary;
 }
};
int main()
{
    Engineer S1;
    S1.name="Vidhyansh";
    S1.branch="Cse";
    S1.salary=250000;
    S1.experience=11;
    cout<<S1.name<<endl;
    return 0;
}

 

