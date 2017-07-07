#include <boost/exception/to_string.hpp>
#include <iostream>

int main() {

  bool   b = true;
  double d = 42.42;

  std::string b_str = boost::to_string(b);
  std::string d_str = boost::to_string(d);

  std::cout << b_str << std::endl;
  std::cout << d_str << std::endl;

}
