#include <iostream>
using namespace std;
class distance
{
    int feet,inches;
    public:
    void init(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void read()
    {
        cout<<"enter the distance in feet and inches\n";
        cin>>feet>>inches;
    }
    void display()
    {
        cout<<"diastance is "<<feet<<" feet and "<<inches<<" inches\n";
    }
   void add(distance d1,distance d2);
}a,b,c;
void distance::add(distance d1,distance d2)
    {
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        if(inches>12)
        {
            feet=feet+1;
            inches=inches-12;
        }
    }
int main() 
{
   
   a.init(6,7);
   b.read();
   a.display();
   b.display();
   c.add(a,b);
   c.display();

    return 0;
}
