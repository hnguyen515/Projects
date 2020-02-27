#include <iostream>
using namespace std;

namespace First {
  //namespace Nested {
    void foo() {
      printf("This is First::Nested::foo()\n");
    }
  //  }
}

namespace Second {
  void foo() {
    printf("This is Second::food\n");
  }
}

void foo() {
  printf("This is global foo\n");
}

int main() {
  //using namespace First;
  First::foo();
  Second::foo();
  ::foo();
  return 0;
}
