#include <iostream>
using namespace std;

int main() {
  string first = "Hanh";
  string *fptr = &first;
  string last = "Nguyen";
  string *lptr = &last;

  lptr = fptr;
  fptr = &last;
  cout << "fptr is pointing to " << *fptr << '\n';
  cout << "lptr is pointing to " << *lptr << '\n';

  return 0;
}
