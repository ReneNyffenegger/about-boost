#include <iostream>
#include <boost/function.hpp>

void go (boost::function<int(int)> f) {
  try {
    std::cout << f(4) << std::endl;
  }
  catch (boost::bad_function_call& e) {
    std::cout << "Error: " << e.what() << std::endl;
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

  f = 0; // f=nullptr does not compile
  go(f);

}
