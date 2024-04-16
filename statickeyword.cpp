#include<iostream>
using namespace std;
class abc{
    public:
    int x,y;
    abc() : x(0),y(0){

    }
    static void print(){
        // to pointer accsible
        cout<<"i am in static"<<endl;

    }

};
int main(){
    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
    abc::print();
    return 0;

}