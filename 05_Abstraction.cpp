#include<bits/stdc++.h>
using namespace std;

//virtual functions -> exectute the most derived version of the function

/*A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. 
When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object 
and execute the derived class’s version of the function. Virtual functions should be accessed using pointer or reference of base class type 
to achieve runtime polymorphism.  It is not mandatory for the derived class to override (or re-define the virtual function), in that case, 
the base class version of the function is used.

They are mainly used to achieve Runtime polymorphism*/
class Instrument{
public:
    //runtime polymorphism
    virtual void MakeSound(){
        cout<<"Instrument makes a sound"<<endl;
    }
    //compile-time polymorphism
    void Audience(){
        cout<<"Audience for Instrument"<<endl;
    }
};

class guitar:public Instrument{
public:
    void MakeSound(){
        cout<<"guitar makes a sound"<<endl;
    }
    void Audience(){
        cout<<"Audience for guitar"<<endl;
    }    
};

/*A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation, 
But we must override that function in the derived class, otherwise the derived class will also become abstract class 

A class is abstract if it has at least one pure virtual function. We can have pointers and references of abstract class type. 
If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
An abstract class can have constructors.  */
class Smartphone{
public:
    //This is pure virtual function, all classes must implement this method
    virtual void MakeCall()=0;
};

class Android:public Smartphone{
public:
    void MakeCall(){
        cout<<"Make a call using an Android"<<endl;
    }

};

class Ios:public Smartphone{
public:
    void MakeCall(){
        cout<<"Make a call using an IOS"<<endl;
    }
};


int main(){
    Instrument *i=new guitar();
    i->MakeSound(); //invoke method in guitar class as it is virtual method
    i->Audience();  //invoke method in Instrument class as it is not a virtual method

    /*
    Android A;
    A.MakeCall();

    Ios I;
    I.MakeCall();*/

    //pointer of parent class to child object
    Smartphone *s=new Android();
    Smartphone *s1=new Ios();

    s->MakeCall();
    s1->MakeCall();
}