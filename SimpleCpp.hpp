#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>
#define var auto
#define str std::string
#define list std::vector
#define elif else if
#define is ==
void print(std::string stringToPrint) {
  std::cout<<stringToPrint<<"\n";
}
std::string input(std::string prompt = "") {
  std::string result;
  std::cout<<prompt;
  std::getline(std::cin, result);
  return result;
}
class simpleFileClass : std::fstream {
  public:
    simpleFileClass(std::string fileName) : std::fstream(fileName) {}
    std::string read() {
      std::string result = "";
      std::string currentLine;
      while(std::getline(*this, currentLine)) {
        if(!this->eof()) {
          currentLine += "\n";
        }
        result += currentLine;
      }
      return result;
    }
    void write(std::string text) {
      *this << text;
    }
    virtual void close() {
      std::fstream::close();
    }
};
simpleFileClass open(std::string fileName) {
  return simpleFileClass(fileName);
}





