#include<iostream>
using namespace std;
class Second;
class One{
    int num1;
    public:
    void getValue(int a){
        num1=a;
    }
  friend  void add(One,Second);
};
class Second{
    int num2;
    public:
    void getData(int b){
    num2=b;
}
friend void add (One,Second);
};
void add( One ob1, Second ob2){
    
    cout<<"the sum of two number is "<<ob1.num1+ob2.num2;
}
int main(){
    One obj1;
    Second obj2;
    int a,b;
    cout<<"enter the value of a and b \n";
    cin>>a>>b;
    obj1.getValue(a);
    obj2.getData(b);
    add(obj1,obj2);

}
