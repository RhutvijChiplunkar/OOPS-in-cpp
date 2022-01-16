#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }

    void printInfo(){
        cout<<"Hello I am Parent class"<<endl;
    }
};

class Child1:public Parent{
public:    
    //This is method overloading - Compile time polymorphism
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }

    //This is method overriding - Run time polymorphism
    void printInfo(){
        Parent::printInfo();        //calling the same method in super class
        cout<<"Hello I am Child 1 class"<<endl;
    }
};

class Child2:public Parent{
public:
    void printInfo(){
        cout<<"Hello I am Child 2 class"<<endl;
    }
};

/*Note:: Overloading can happen in same class as well as parent-child class relationship whereas overriding 
happens only in an inheritance relationship.*/
int main(){
    Parent P;

    Child1 c1;
    Child2 c2;

    P.printInfo();
    c1.printInfo();
    c2.printInfo();

    c1.sum(20,40,60);
}