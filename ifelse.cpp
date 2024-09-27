#include <iostream>
using namespace std;

int main(){

int age;
cout<<"Enter your age : ";
cin >>age;
if(age>18){
    cout<<"you are adult";
}
else if(age<18&&age>12){
    cout<<"You are teenager";
}
else{
    cout<<"You are kid ";
}


    return 0;
}