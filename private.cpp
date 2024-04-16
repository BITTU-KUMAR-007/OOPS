#include<iostream>
using namespace std;
class Box{
    int width;
    Box(int _w): width(_w){};
    public:
    //ctor
    
    int getwidth() const{
        return width;
    }
    void setwidth(int _val){
        width=_val;
    }
    friend class Boxfactory;
};
class Boxfactory{
    int count;
    public:
    Box getABox(int _w){
        ++count;
        return Box(_w);
    }
};
int main(){
    Boxfactory bfact;
    Box b=bfact.getABox(5);
    cout<<b.getwidth()<<endl;
    return 0;


}