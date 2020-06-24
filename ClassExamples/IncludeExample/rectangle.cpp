
#include "rectangle.h"

// Define the functions here
void Rectangle::set_values (int x, int y){
  width = x;
  height = y;
}

int Rectangle::area(){
  return width*height;
} 