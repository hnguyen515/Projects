#include <iostream>
using namespace std;

class Z {
 public:
  Z() { cout << "Constructor called." << '\n';}

  ~Z() { cout <<"Destructor called." << '\n';}
};

int main() {
  Z z1; // constructor called
  int a = 1;
  if (a == 1) {
    Z z2; // constructor called
  } // destructor called
} // destructor called
