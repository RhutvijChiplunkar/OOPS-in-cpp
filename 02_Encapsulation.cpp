#include<bits/stdc++.h>
using namespace std;

/*The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. 
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
If you want others to read or modify the value of a private member, you can provide public get and set methods.*/
class Student{
private:
    string first_name,last_name;
    int age;

public:
    Student(string name,string surname){
        first_name=name;
        last_name=surname;
    }

    //setter and getter methods for age
    void setAge(int x){
        age=x;
    }

    int getAge(){
        return age;
    }
};

int main(){
    //Creation of object of a class
    Student s1("Rhutvij","Chiplunkar");
    s1.setAge(21);
    cout<<s1.getAge()<<endl;

    Student s2("Soham","Chiplunkar");
    s2.setAge(24);
    cout<<s2.getAge()<<endl;
}