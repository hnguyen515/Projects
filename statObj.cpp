#include <iostream>
using namespace std;
class Test {
public:
  void static printT() {
    cout << "Yes!" << '\n';
  }
};

int main() {
  // 
  Test::printT();
  Test a;
  a.printT();
}
