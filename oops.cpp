#include <iostream>
using namespace std;
class calc{
    public :
     void add (int x,int y){
        printf("the sum of %d + %d is %d\n",x,y,x+y);
    }
    void subtract(int x,int y){
        printf("the subtraction of %d - %d is %d",x,y,x-y);
    }
};

int main(){
   
calc calc ;
int a,b,sum;
cout<<"Enter first number : "<<endl;
cin>>a;
cout<<"Enter second number :"<<endl;
cin>>b;
calc.add(a,b);
calc.subtract(a,b);


    return 0;
}