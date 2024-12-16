#include <iostream>
#include <cmath>
float x,x0,a,b,e;
using namespace std;
float f(float x) {
  return sqrt(1-0.4*x*x) - asin(x);
}
float f1(float x) {
  return sin(sqrt(1-0.4*x*x));
}
float f2(float x) {
  return abs((0.4*x*cos(sqrt(1-0.4*x*x)))/sqrt(1-0.4*x*x));
}
int main() {
  cin >> a >> b;
  e = 0.0001;
  if (abs(f2(a))<1) {
      x0 = a;
  }
  else {
      x0 = b;
  }
  x = f1(x0);
  while ((abs(x0 - x) > e)) {
    x0 = x;
    x = f1(x0); 
  } 
  cout << x << endl;
  return 0;
}
