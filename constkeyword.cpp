#include<iostream>
using namespace std;
class abc{
  int x;
  int *y;
  const int z;
  public:
  //ctor: old style
 // abc(int _x,int _y, int _z=0){
   // x=0;
    //y=new int(_y);
    //z=_z;
  }
  //initialisation list
  abc(int _x,int _y,int _z=0) : x(_x), y(new int(_y),z(_z)){

  }
  abc(int _x,int _y){
    x=0;
    y=new int(_y);
  }
  int getx() const{
    return x;
  }
  void sety(int _val){
    x= _val;
  }
  int gety() const{
    return *y;
  }
  void sety(int _val){
    *y=_val;
  }
};
void printAbC(const abc &a){
  cout<<a.getx()<<" "<<a.gety()<<endl;
}
int main(){
  abc a(1, 2);
  printABC(a);
  return 0;
}
int main(){
    const int x=5;
    //initialisation can be done
    //but we cant re-assign v value.
    //x=10
   // cout<<x<<endl;
    //2.const with pointers
 // const int *a=new int(2); //const data,Non-const pointer.
  //  int const *a=new int(2);//same as line no 13
    //cout<<*a<<endl;
    //*a=20;//const chnage the contents of pointer
    //cout<<*a<<endl;
    //int b=20;
    //a=&b; // pointer itself can be assigned
    //cout<<*a<<endl;
      
    return 0;
}