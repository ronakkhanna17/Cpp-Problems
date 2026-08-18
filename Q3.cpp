#include<iostream>
using namespace std ;
class Rectangle{
    public :
    int length ;
    int breadth ;

    int  input(){
        cout << "Enter the length: ";
        cin >> length ;
        cout << "Enter the breadth: ";
        cin >> breadth ;
    }
    
    float area(){
        cout << "The area of rectangle is: "<<length*breadth<<endl;
    }

    int display(){
        cout << "The length is: "<<length<<endl ;
        cout << "The breadth is: "<<breadth <<endl;
    }

};
int main(){
    Rectangle r1 ;
    Rectangle r2 ;
    r1.input();
    r2.input();
    r1.display();
    r2.display();
    r1.area();
    r2.area();
}