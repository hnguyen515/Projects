#include <iostream>
using namespace std;

int main() {
  string s = "Hi there, ";
  string &refS = s;

  cout << "What is your name? ";

  string name;
  cin >> name;

  refS += name;
  cout << s << '\n';

  cout << "address of refS is &refS @ " << &refS << '\n';
  cout << "address of s is &s @ " << &s << '\n';
  
  return 0;
}
