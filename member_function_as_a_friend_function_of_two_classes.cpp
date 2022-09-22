#include<iostream>
using namespace std;
class B;
class A{
    int num1;
    public:
    void getValue(int a){
        num1=a;
    }
 void add(B);
};
class B{
    int num2;
    public:
    void getData(int b){
    num2=b;
}
  friend void A::add (B);
};
void A::add( B ob1){

    cout<<"the value of num2 is  "<<ob1.num2<<"and the value of num1 is "<<num1;
}
int main(){
    A obj1;
    B obj2;
    int a,b;
    cout<<"enter the value of a and b \n";
    cin>>a>>b;
    obj1.getValue(a);
    obj2.getData(b);
    obj1.add(obj2);

}
