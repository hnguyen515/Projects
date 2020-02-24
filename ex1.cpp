#include <iostream>
using namespace std;

void pause();

int main() {
  cout << "Dear reader," << endl;
  cout << endl << "have a ";
  pause();
  cout << "!" << endl;

  return 0;
}

void pause() {
  cout << "BREAK";
}
  
