#include <iostream>
#include <boost/function.hpp>

void go (boost::function<int(int)> f) {
  if (f.empty()) {
    std::cout << "f is empty" << std::endl;
  }
  else {
    std::cout << f(4) << std::endl;
  }

}

int mult_3(int i) {
  return 3*i;
}

int main() {

  boost::function<int(int)> f;

  go(f);

  f=mult_3;
  go(f);

  f.clear(); // or f=0 ?
  go(f);

}
