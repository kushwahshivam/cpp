#include <iostream>
using namespace std;
 int add (int x,int y){
        return x+y;
    }
int main(){
   

int a,b,sum;
cout<<"Enter first number : "<<endl;
cin>>a;
cout<<"Enter second number :"<<endl;
cin>>b;
sum = add(a,b);
cout<<"the sum of two number is : "<<sum;

    return 0;
}