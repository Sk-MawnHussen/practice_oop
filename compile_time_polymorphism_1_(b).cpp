#include<iostream>
using namespace std;

class DiscountCalculator
{
public:

    void calculateDiscount(int a)
    {
       cout<<"discount price:"<<a<<endl;
    }
    void calculateDiscount(int a,double b)
    {
        cout<<"Discount price:"<<(a+b)<<endl;
    }
    void calculateDiscount(int a,double b,int c)
    {
       cout<<"discount price:"<<a+b+c<<endl;
    }

};
int main()
{
   DiscountCalculator s1;
    s1.calculateDiscount(23);
    s1.calculateDiscount(23,27.56);
    s1.calculateDiscount(23,27.34,24);
}

