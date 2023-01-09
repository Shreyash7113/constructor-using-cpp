#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(void);/*/constructor/*/
//constructors are special member functions with the same name as class.
//It is used to analyse the objects of the class.
//It is automatically invoked when an object is created.
    void printnumbers()
    {
        cout<<"The numbers are:"<< a <<"+" <<b<< "i"<<endl;
    }
};
complex::complex(void)//This is default constructor which accepts no parameters.
{
    a=10;
    b=20;
}
int main()
{
 complex c;
 c.printnumbers();  
}


//properties::->
//1.It should be declared in the public section.
//2.they are automatically invoked whenever the object is created.
//3.They do not have return types and cannot return any values.
//4.It can have default arguments.
//5.We cannot refer their address.