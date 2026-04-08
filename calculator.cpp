#include<iostream>
using namespace std;

template<class T>
class Calculator
{
    private:
    T num1,num2;
    public:
    Calculator(T n1, T n2)
    {
        num1=n1;    num2=n2;
    }
    void displayResult()
    {
        cout<<"Number are:"<<num1<<"and"<<num2<<""<<endl;
        cout<<"Addition is:"<<add()<<endl;
        cout<<"Subraction is:"<<subtract()<<endl;
        cout<<"Product is:"<<multiply()<<endl;
        cout<<"Division is:"<<divide()<<endl;
    }
    T add(){return num1+num2;}
    T subtract(){return num1-num2;}
    T multiply(){return num1*num2;}
    T divide(){return num1/num2;}
    
};
int main()
{
    Calculator <int> c1(3,6);
    Calculator<float> c2(3.4,5.6);
    cout<<c1.add();
    cout<<c2.multiply();
    c1.displayResult();
};
