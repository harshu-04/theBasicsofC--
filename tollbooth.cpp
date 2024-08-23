//tollbooth
#include<iostream>
#include<stdlib.h>
using namespace std;
class Tollbooth
{
 unsigned int x;
 double c;
  public :
      Tollbooth()
        {
        x=0;c=0;
        }

        void payCar()
        {
        x++;
        c+=0.5;
        }
        void nonPayCar()
        {
        x++;
        }
        void display()
        {
        cout<<"COUNT "<<x<<"    COST "<<c<<"\n";
        }
};
main()
{
Tollbooth t;
char  ch;
do
{
cout<<"1 for paycar \n 2 for non paycar \n 3 for ESP and display \n";
cout<<"enter the choice \n";
cin>>ch;
switch(ch)
{
    case '1':
            t.payCar();
            break;

    case '2':
            t.nonPayCar();
            break;
    case 27:
            t.display();
            exit(0);
    default: cout<<"invalid";
    }}while(ch!=27);
            }
