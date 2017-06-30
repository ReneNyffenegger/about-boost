#include <boost/function.hpp>
#include <iostream>

struct S {

  int a;
  S(int a_) : a(a_) {}

  float f (int b) {
    return float(b) / a;
  }

};

float gf (S* s, int b) {
  return 999;
}

int main() {

  S s1(10);
  S s2( 5);


  boost::function<float (S*, int)> f1, f2, f3;

  f1 = &S::f;
  f2 = &S::f;
  f3 = gf;

  std::cout << f1(&s1, 25) << std::endl;
  std::cout << f2(&s2, 25) << std::endl;
  std::cout << f3(&s2,  5) << std::endl;

}
