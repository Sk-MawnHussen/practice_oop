#include<iostream>
using namespace std;
class SmartDevice
{
    public:
      virtual void turnon()
      {
          cout<<"based class"<<endl;
      }
};

class SmartLight: public SmartDevice
{
    void turnon()override
    {
        cout<<"devrived class one"<<endl;
    }
};
class SmarFan: public SmartDevice
{
    void turnon()override
    {
        cout<<"devrived class two"<<endl;
    }
};
int main()
{
    SmartDevice* ptr;
    SmartDevice* ptr1;
    SmartLight light;
    ptr=&light;
    ptr->turnon();

    SmarFan light2;
    ptr1=&light2;
    ptr1->turnon();


}
