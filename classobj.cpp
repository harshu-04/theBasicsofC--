#include<iostream>
    using namespace std;
class student
{    int i;
    string n,b;
    int r,m[5];
    public: void getdata()
    { //if we want to take string after an int use cin.ignore;

    cout<<"enter the name , branch roll no and marks \n";
    getline(cin,n);
    getline(cin,b);
    cin>>r;
    for(i=0;i<5;i++)
    cin>>m[i];
    }
    void showdata()
    {
    cout<<"NAME:"<<n<<"\n";
    cout<<"BRANCH:"<<b<<"\n";
    cout<<"ROLL NO :"<<r<<"\n";
    cout<<"marks are : \n";
    for(i=0;i<5;i++)
    cout<<m[i]<<"\n";
    }
    };
    main()
    {
    student s;
    s.getdata();
    s.showdata();
    }
