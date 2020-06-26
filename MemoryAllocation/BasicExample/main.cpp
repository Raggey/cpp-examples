



#include <iostream>
#include <cstring>

using namespace std;

int main(){


  int num;
  cout << "Enther the total number of students:";
  cin >> num;
  float* ptr;


  // Memory allocaiton for num floats
  ptr =  new float[num];

  cout << "Enter GPA of students." << endl;
  for(int i = 0; i < num; ++i) {

    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i); // Can allocate sequentially 
 
  }

  cout << "\n Displaying GPA of Students." << endl;
  for(int i = 0; i < num; ++i){
    cout << "Student" << i + 1 << " :" << *(ptr + i) << endl;
  }

  // release memory
  delete [] ptr;

  return 0;


}