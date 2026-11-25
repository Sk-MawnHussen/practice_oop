#include<iostream>
using namespace std;
class Employee
{
    public:
      virtual void displayResponsibility()
      {
          cout<<"based class responsibility"<<endl;
      }
};

class Teacher: public  Employee
{
    void displayResponsibility()override
    {
        cout<<"Teacher Should teaches his class will "<<endl;
    }
};
class AdministritiveOfficer: public Employee
{
    void displayResponsibility()override
    {
        cout<<"AdministritiveOfficer Should looked after teacher"<<endl;
    }
};
int main()
{
    Employee* ptr;
    Employee* ptr1;
      Teacher light;
    ptr=&light;
    ptr->displayResponsibility();
    AdministritiveOfficer light2;
    ptr1=&light2;
    ptr1->displayResponsibility();


}

