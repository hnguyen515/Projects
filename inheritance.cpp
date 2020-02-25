# include <bits/stdc++.h>
using namespace std;

//Base class
class Parent {
public:
  int id_p;
};

// Sub-class inheriting from Base class
class Child : public Parent {
public:
  int id_c;
};

int main() {
  Child obj1;

  obj1.id_c = 7;
  obj1.id_p = 91;
  cout << "Child is " << obj1.id_c << endl;
				      cout << "Parent is " << obj1.id_p;
							      return 0;
}
