#include <iostream>
using namespace std;

class fruit{
    public :
    string name;
    string taste;
    
    void settaste(string t){
        taste = t;
    }
    void setname(string n){
        name = n;
    }

    void display(){
        cout<<name<<""<<taste<<endl;
    }


};

int main(){
        fruit a;
        a.setname("Apple");
        a.settaste("Sweet");
        a.display();

    return 0;
}