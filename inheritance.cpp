#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    void eat(){
        cout<<"eating"<<endl;
    }
};
class dog:private Animal{
    public:
    void print(){
        cout<<this->age;
    }

};

int main(){
    //child class
    dog d1;
    d1.print();
    return 0l;

}