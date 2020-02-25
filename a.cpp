#include <iostream>
using namespace std;

// Hanh made this change :)

class A {
public:
  void fun();
};

void A::fun() {
  cout << "fun() called!" << endl;
}

int main() {
  A a;
  a.fun();
  return 0;
}
  
  
