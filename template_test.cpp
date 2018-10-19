#include <iostream>

using namespace std;
/*
int square(int x) {
  return x * x;
}

float square(float x) {
  return x * x;
}

double square(double x) {
  return x * x;
}

int main()
{
  int a = 2;
  float b = 2.1;
  double c = 2.2;
  //function overload
  cout << a << "'s square is: " << square(a) << endl;
  cout << b << "'s square is: " << square(b) << endl;
  cout << c << "'s square is: " << square(c) << endl;
  return 0;
}
*/

template <typename T>
T square(T x) {
  return x * x;
};

int main() {
  int a = 2;
  float b = 2.1;
  double c = 2.2;
  //a single template to support all data types
  cout << a << "'s square is: " << square(a) << endl;
  cout << b << "'s square is: " << square(b) << endl;
  cout << c << "'s square is: " << square(c) << endl;
  return 0;
}
