#include<iostream>
using namespace std;
class abc
{
protected:
    int horsepower;
public:
    void accept()
    {
        cout<<"Enter horsepower"<<endl;
        cin>>horsepower;
    }
    void display()
    {
        cout<<horsepower;
    }
};
     class boy :: public abc
{
private:
    int cost;
public:
    void accept()
    {
        abc :: accept();
        cout<<"Enter cost"<<endl;
        cin>>cost;
    }
    void display()
    {
        abc::display();
        cout<<cost;
    }
};



int main()
{
    boy b1;
    b1.accept();
    b1.display();
}
