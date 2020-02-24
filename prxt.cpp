#include <iostream>

using namespace std;

void f1();
void f2();
void f3();
void f4();

int main() {
  // cout outputs integers as decimal integers:
  cout << "Value of 0xFF =  " << 0xFF << " decimal"
       << endl;   // Output: 255 decimal
  // The manipulator hex changes output to hexadecimal
  // format (dec changes to decimal format):
  cout << "Value of 27 = " << hex << 27 << " hexdecimal"
       << endl;
  return 0;
}
