#include<bits/stdc++.h>
using namespace std;

/*Friend Class A friend class can access private and protected members of other class in which it is declared as friend. 
It is sometimes useful to allow a particular class to access private members of other class

A friend function can be: 
a) A member of another class 
b) A global function 

* Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
* Friendship is not inherited
*/
class Family{
    private:
        int no_of_members;
    public:
        void setMembers(int x){
            no_of_members=x;
        }

        //Declare a friend function
        friend void printMembers(Family);

        //Declare a friend class
        friend class FamilyFriend;
};

//This is a friend function that can access private and protected members of the abive class
void printMembers(Family F){
    cout<<F.no_of_members<<endl;
}

class FamilyFriend{
    public:
        void printFunction(Family F){
            cout<<"Family has a function for "<<F.no_of_members<<" members"<<endl;
        }
};

int main(){
    Family F;
    F.setMembers(5);

    // A global function 
    printMembers(F);

    //A member of another class 
    FamilyFriend ff;
    ff.printFunction(F);
}