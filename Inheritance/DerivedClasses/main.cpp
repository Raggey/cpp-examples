



// Basic example of derived classes and multiple inheritence 
#include <iostream>

using namespace std;

class base1{
  public:
    void funct(){
      cout << "Hello from base 1";
    }
};


class base2{
  public:
    void funct(){
      cout << "Hello from base 2";
    }
};

class derived : public base1, public base2{

};


int main(){
  derived obj;

  // obj.funct();  // Error: derived::funct is ambiguous
  obj.base1::funct();
  obj.base2::funct();
}

