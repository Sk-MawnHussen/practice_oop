#include<iostream>
using namespace std;

class ResultCalculator
{
public:

    void calculateTotal(int a,int b)
    {
       cout<<"Calculate result:"<<(a+b)<<endl;
    }
    void calculateTotal(int a,int b,int c )
    {
        cout<<"Calculate result:"<<(a+b+c)<<endl;
    }
    void calculateTotal(double a,double b)
    {
        cout<<"Calculate result:"<<(a+b)<<endl;
    }
};
int main()
{
    ResultCalculator s1;
    s1.calculateTotal(23,27);
    s1.calculateTotal(23,27,45);
    s1.calculateTotal(23.34,27.34);
}
