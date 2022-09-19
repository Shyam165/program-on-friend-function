#include<iostream>
using namespace std;
class Mean{
    int num1;
    int num2;
    public:
    void getValue (int a, int b){
        num1=a;
        num2=b;
    }
    friend int mean(Mean);
};
int mean(Mean obj1){
    return (obj1.num1+obj1.num2/2);
}
int main(){
    Mean ob1;
    int c;
    int a,b;
    cout<<"enter the value of a and b \n";
    cin>>a>>b;
    ob1.getValue(a,b);
    c=mean(ob1);
    cout<<"the mean of two number is : "<<c;
}