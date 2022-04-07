#include <iostream>
using namespace std;
class rectangle
{
    float length,wirdth;
    public:
    
    void set_length(float l);
    void  set_wirdth(float w);
    int parameter();
    int area();
    int same_area(rectangle);
}a,b,temp; 
void rectangle::set_length(float l)

    {
       length=l;
    }
  void rectangle::set_wirdth(float w)
    {
       wirdth=w;
    }
    int rectangle::parameter()
    {
        float temp;
        temp=2*(length+wirdth);
        return temp;
        
    }
    int rectangle::area()
    {
        float tem;
        tem=length*wirdth;
        return tem;
        
    }
    int rectangle::same_area()
    {
        if(a.area==b.area)
        return 1;
        else
        return o;
    }
    void show()
    {
        cout<<"area and parameter of rectangle is "<<area()<<paraeter();
    }
    main()
    {
        a.set_length(5);
        a.set_wirdth(2.5);
         b.set_length(5);
        b.set_wirdth(18.9);
        a.show();
    }
    
