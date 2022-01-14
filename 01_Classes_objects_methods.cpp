#include<bits/stdc++.h>
using namespace std;

//creation of a class
class Student{
    //Note: All the members are private by default
public:
    string first_name,last_name;
    int age;
    vector<string> skills;

    //constructor -->name same as that of class, invoked when object is created, NO RETURN TYPE
    Student(){
        cout<<"Student class"<<endl;
    }
    
    //These are parameterized constructor

    //declare constructor here and define outside the class
    Student(string st);

    Student(string name,string surname){
        first_name=name;
        last_name=surname;
    }

    //Class methods
    void printInfo(){
        cout<<"\n==================="<<endl;
        cout<<"Student name::"<< first_name<<" "<<last_name<<endl;
        cout<<"Age::"<<age<<endl;
        cout<<"Skills of the student are::"<<endl;
        for(auto i:skills){
            cout<<i<<endl;
        }
        cout<<"==================="<<endl;
    }

    //declare method here and define outside the class
    string fullName(string name,string surname);

};

//method is defined outside the class
string Student::fullName(string name,string surname){
    return name+" "+surname;
}


//declaring the constructor outside the class
Student::Student(string st){
    cout<<"Student constructor with 1 parameter created"<<endl;
}

int main(){
    //Creation of object of a class
    Student s1("Rhutvij","Chiplunkar");

    //Access all the attributes and methods by using a .
    s1.age=21;  
    s1.skills.push_back("C++");
    s1.skills.push_back("OOPS");
    s1.printInfo();
    cout<<s1.fullName(s1.first_name,s1.last_name)<<endl;

    Student s2("Soham","Chiplunkar");
    s2.age=24;  
    s2.skills.push_back("Forensics");
    s2.skills.push_back("Security");
    s2.printInfo();

    Student s3("Student");

    //This is the array of objects
    Student St[5];
}