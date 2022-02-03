#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int n,r,s;
    public:
     void setData()
     {
         cout<<"Enter the number="<<endl;
         cin>>n;
     }
     void getData()
     {
         s=0;
         while(n>0)
         {
             r=n%10;
             s=s+r;
             n=n/10;
         }
         cout<<"The addition of the digits are"<<s<<endl;
     }
};
 int main()
 {
     A obj;
     obj.setData();
     obj.getData();
     getch();
 }
