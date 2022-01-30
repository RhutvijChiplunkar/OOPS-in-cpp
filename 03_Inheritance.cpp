#include<bits/stdc++.h>
using namespace std;

//Parent(Base) class
class Vehicle{
//protected - similar to private, but it can also be accessed in the inherited class
protected:
    string company;
    string name;

public:
    Vehicle(){
        cout<<"This is a parent class - Vehicle"<<endl;
    }

    void print_info(){
        cout<<"Company::"<<company<<endl;
        cout<<"Name::"<<name<<endl;
    }
};

/*HIERARCHIAL INHERITANCE-Car and Bike are children of same parent(Vehicle) class*/

//Single inhertiance (Vehicle->Bike)
class Bike:public Vehicle{
    int engine_capacity;
public:
    //Extending the constructor
    Bike():Vehicle(){
        cout<<"This is a child class - Bike"<<endl;
    }
};

//Child(Derived) class
class Car:public Vehicle{
    int engine_capacity;
public:
    //Extending the constructor
    Car():Vehicle(){
        cout<<"This is a child class - Car"<<endl;
    }
};

//Multi-level inhertiance (Vehicle->Bike->OldBike)
class OldBike:public Bike{
public:
    OldBike(){
        cout<<"This is a grand child class - OldBike"<<endl;        
    }
};

class Father{
public:
    void father(){
        cout<<"Characteristics of father inherited"<<endl;
    }
};

class Mother{
public:
    void mother(){
        cout<<"Characteristics of mother inherited"<<endl;
    }
};

//Multiple inheritance --> Child class extends properties from Mother & Father class
class Child:public Father,public Mother{

};

/*NOTE:Modes of Inheritance

1) Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived 
class and protected members of the base class will become protected in derived class.
2) Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will 
become protected in derived class.
3) Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will 
become Private in derived class. */

int main(){
    Vehicle V;  //Vehicle constructor called
    Bike B;     //Vehicle and Bike constructor called
    Car C;      //Vehicle and Car constructor called
    OldBike ob;     //Vehicle, Bike and OldBike constructor called
    
    //Multiple inheritance 
    Child Ch;
    Ch.father();
    Ch.mother();
}