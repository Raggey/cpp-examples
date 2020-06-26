
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

  string data; // String buffer for the file
  fstream readFile; // File object for the file


  readFile.open("hello.txt" , ios::in);

  // Check if file opened correctly
  if(readFile.is_open()){

    while (getline(readFile,data)){
      cout << data << endl; //  Output the buffer to screen
    }

    readFile.close(); // Finally close the file

  }
  else {
    cout << "Failed to open file" << endl;
  }

  

  return 0;
}
