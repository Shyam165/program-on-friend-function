#include<iostream>
using namespace std;
class Square;
class Rectangle{
    int length,breadth;
    public:
    void getArea(){
        cout<<"the area of rectangle is "<<length*breadth;
    }
    void getValue(Square);
};
class Square{
    int side;
    public:
    void getSide(int a){
        side=a;
    }
    friend void Rectangle:: getValue(Square);
};
void Rectangle:: getValue(Square ob1){
    length=ob1.side;
    breadth=ob1.side;
}
int main(){
  Square obj1;
  Rectangle obj2;
  int a;
  cout<<"enter the value of a \n";
  cin>>a;
  obj1.getSide(a);
  obj2.getValue(obj1);
  obj2.getArea();

}