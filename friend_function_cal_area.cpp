#include<iostream>
using namespace std;
class Square;
class Rectangle{
    int length;
    int breadth;
    public:
    void getValue(int a, int b){
        length=a;
        breadth=b;
    }
  friend  void add(Rectangle,Square);
};
class Square{
    int side;
    public:
    void getData(int b){
    side=b;
}
friend void add (Rectangle,Square);
};
void add( Rectangle ob1, Square ob2){
    int area_of_rectangle=ob1.length*ob1.breadth;
    int area_of_square=ob2.side*ob2.side;
    cout<<"the area of rectangle is "<<area_of_rectangle<<endl;
     cout<<"the area of square is "<<area_of_square<<endl;
    
}
int main(){
    Rectangle obj1;
     Square obj2;
    int a,b;
    cout<<"enter the value of a and b \n";
    cin>>a>>b;
    obj1.getValue(a,b);
    obj2.getData(b);
    add(obj1,obj2);

}
