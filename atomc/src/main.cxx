#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
  if (argc != 2) {
    std::cerr << "Incorrect usage. Correct usage is... " << std::endl;
    std::cerr << "atomc <input.at>" << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
