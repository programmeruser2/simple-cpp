#include "SimpleCpp.hpp"

int main() {
  var myFile = open("myFile.txt");
  print(myFile.read());
  myFile.write("Hello World writing to file!");
  myFile.close();
  return 0;
}