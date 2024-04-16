#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"i am inside the Animal constructor"<<endl;
    }
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    //override
    Dog(){
        cout<<"i am inside dog constructor "<<endl;
    }
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){
   // Animal a;
    //a.speak();
    //Dog b;
    //b.speak();
    //Animal* bittu=new Animal;
    //bittu->speak();
    //parents calls pointer is to called 
    //upcasting
    //Animal* amit=new Dog;
    //amit->speak();
    //downcasting
    //Dog* prince=(Dog*)new Animal;
    //prince->speak();
    Animal* a=new Dog();

}