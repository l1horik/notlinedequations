#include <iostream>
#include <cmath>
float x,x0,a,b,k,e;
using namespace std;
float f(float x) {
  return sqrt(1-0.4*x*x) - asin(x);
}
float f1(float x) {
  return (-2*x)/sqrt(25-10*x*x)-(1/sqrt(1-x*x));
}
float f2(float x) {
  return -((2*x*(sqrt(1-x*x)))+sqrt(25-10*x*x))/sqrt(25-35*x*x+10*x*x*x*x);
}
int main() {
  cin >> a >> b;
  e = 0.0001;
  k = f(a)*f2(a);
  if (k>0) {
      x0 = a;
  }
  else {
      x0 = b-e;
  }
  x = x0 - (f(x0)/f1(x0));
  while ((abs(x0 - x) > e)) {
    x0 = x;
    x = x0 - (f(x0) / f1(x0)); 
  } 
  cout << x << endl;
  return 0;
}

