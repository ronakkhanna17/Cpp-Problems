#include<iostream>
#include <string>
using namespace std ;
class Student{
    public :
    string name ;
    int roll_no ;
    int marks ;

    void display(){
        cout << "Name is: "<<name <<"\nRoll No.: " <<roll_no <<"\nMarks: " <<marks ;
    }

};
int main(){
    Student s1 ;
    Student s2 ;
    cout << "Enter the name , roll_no and marks of s1 : ";
    cin >> s1.name >> s1.roll_no >> s1.marks;
    s1.display();
}