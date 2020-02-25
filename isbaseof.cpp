#include <iostream>
#include <type_traits>
using namespace std;

class A {};
class B : A {};
class C {};

int main() {
  cout << std::boolalpha;
  cout << "a2b: " << is_base_of<A, B>::value << '\n';
  cout << "b2a: " << is_base_of<B, A>::value << '\n';
  cout << "c2b: " << is_base_of<C, B>::value << '\n';
  cout << "same type: " << is_base_of<C, C>::value << '\n';
}
								
  
  
  
  
  
