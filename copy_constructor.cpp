#include <iostream>

class Array {
 public:
  explicit Array(int size) : size(size), data(new int[size]) {}

  ~Array() {
    if (data != nullptr) {
      delete[] data;
    }
  }

  int size;
  int* data;
};

int main() {
  Array first(20);
  first.data[0] = 25;

  {
    Array copy = first;
    std::cout << first.data[0] << " " << copy.data[0] << std::endl;
  }  // (1)

  first.data[0] = 10;  // (2)
}