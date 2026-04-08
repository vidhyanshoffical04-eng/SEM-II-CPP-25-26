#include<iostream>
using namespace std;
template<class T>
void swapp(T i,T k)
{
    T temp;
    temp=i;
    i=k;
    k=temp;
}
int main()
    {
        int e,f;
        char g,r;
        float x,y;
        cout<<"\n Enter 2 Integer Values:";
        cin>>e>>f;
        swapp(e,f);
        cout<<"\nInteger values after swapping:";
        cout<<e<<"\t"<<f<<"\n\n";
        cout<<"\nEnter Character Values:"; 
        cin>>g>>r;
        swapp(g,r);
        cout<<"\n Character Values after swapping:";
        cout<<g<<"\t"<<r<<"\n\n";
        cout<<"\n Enter 2 Float Values:";
        cin>>x>>y;
        swapp(x,y);
        cout<<"\n The resultant float values after swapping:";
        cout<<x<<"\t"<<y<<"\n\n";
    }
