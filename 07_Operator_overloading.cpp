#include<bits/stdc++.h>
using namespace std;

/*Compile time polymorphism - One of the way is OPERATOR OVERLOADING

This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. 
For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +. Other example 
classes where arithmetic operators may be overloaded are Complex Number*/

/*NOTE
In C++ the only difference between a class and a struct is that members and base classes are private by default in classes, 
whereas they are public by default in structs.*/
struct YoutubeChannel{

    string Name;
    int Subscribers;

    YoutubeChannel(string name,int subscribers){
        Name=name;
        Subscribers=subscribers;
    }

    void print(){
        cout<<"Method in a struct"<<endl;
    }

    //This is used to compare the names of 2 channels (useful for subtraction from list)
    bool operator==(const YoutubeChannel&channel) const{    //const is used here as it is important for compiler
        return this->Name == channel.Name;
    }
};

//Below 2 functions for operator "<<"

//This is normal operator overloading method
/* void operator<<(ostream& COUT, YoutubeChannel& y){
    COUT<<"Name:"<<y.Name<<endl;
    COUT<<"Subscribers count:"<<y.Subscribers<<endl;
} */

//This is method with return type. This is done to support cout<<x<<y types of statements
ostream& operator<<(ostream& COUT, YoutubeChannel& y){
    COUT<<"Name:"<<y.Name<<endl;
    COUT<<"Subscribers count:"<<y.Subscribers<<endl;
    return COUT;
}

//Struct that has a list of type YoutubeChannel 
struct MyCollection {
    list<YoutubeChannel>myChannels;

    /*Overriding the "+=" and "-=" operators*/
    void operator+=(YoutubeChannel& channel) {
        this->myChannels.push_back(channel);
    }
    void operator-=(YoutubeChannel& channel) {
        this->myChannels.remove(channel);
    }
};

// "<<" operator overloading for printing list that contains youtube channels
ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    cout<<"\nMy collection of youtube channels"<<endl;
    for (YoutubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;      //this will use the previous operator overriden function
    return COUT;
}


/*Note: Following is the list of operators that cannot be overloaded. 
    . (dot) 
    :: 
    ?: 
    sizeof 
*/

int main(){
    YoutubeChannel y1=YoutubeChannel("Channel 1",10000);
    YoutubeChannel y2=YoutubeChannel("Channel 2",5000);
    YoutubeChannel y3=YoutubeChannel("Channel 3",15000);

    //We can print the object like a number by this
    cout<<y1<<y2;
    //operator function can be called by this way too
    operator<<(cout,y1);
    y1.print();


    MyCollection myCollection;
    myCollection += y1;
    myCollection += y2;
    myCollection += y3;
    myCollection -= y3;

    cout<< myCollection;
}