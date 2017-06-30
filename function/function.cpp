#include <iostream>
#include <boost/function.hpp>

// Declare a function wrapper that returns a float
// and takes two int parameters.
boost::function<float (int, int)> function_wrapper;

float add (int x, int y) {
  return x+y;
}

float divide (int x, int y) {
  return float(x)/y;
}

// It's possible to assign a class with the () operator overloaded, too:
struct S {
  float operator() (int x, int y)  {
    return x*y;
  }
};

void go(int a, int b) {

  // Check, if function was assigned:
  if (function_wrapper) {
    std::cout << function_wrapper(a, b) << std::endl;
    return;
  }

  std::cout << "No function was assigned." << std::endl;
}

int main() {
  go(0,0);
 
  function_wrapper = add   ; go(4  , 5);
  function_wrapper = divide; go(100, 9);

  function_wrapper = S()   ; go(  4, 5);

  return 0;
}
