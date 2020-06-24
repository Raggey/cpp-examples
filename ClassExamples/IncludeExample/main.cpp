


// Note to compile on windows:
// cl.exe main.cpp rectangle.cpp

// Other oses:
// g++ main.cpp rectangle.cpp

#include <iostream>
#include "rectangle.h" // Include a header file

using namespace std;

int main (){
  Rectangle rect;
  rect.set_values(3,4);

  cout << "area: " << rect.area();

  return 0;
}

