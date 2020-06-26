


#include <iostream>
using namespace std;

class Distance {

  private:
    int meter;

  public:
    // Constructor
    Distance(): meter(0) {} 

    // friend function, pass Distance object
    friend int addFive(Distance);
};

int addFive(Distance d) {

  d.meter += 5;
  return d.meter;

}

int main() {
  Distance D;

  cout << "Distance: " << addFive(D);
  return 0 ;
}