#include <iostream>
#include <vector>
using namespace std;

int main() {
  string name = "Hanh";
  string &ref = name;
  string &ref2 = name;

  cout << "ref is " << ref << '\n';
  cout << "ref2 is " << ref2 << '\n';

  ref = "Nguyen";
  cout << "name is " << name << '\n';
  cout << "ref2 is " << ref << '\n';

  name = "Hanh Nguyen";
  cout << "ref is " << ref << '\n';
  cout << "ref2 is " << ref << '\n';

  int myInt;
  cin >> myInt;
  cout << "myInt is " << myInt << '\n';
  
  return 0;
}
