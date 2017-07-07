//
//   Notes:
//   -----
//      o no main() required. It's provided by framework.
//      o Executables can be invoked with -help
//



// BOOST_TEST_MODULE defines the name of the program (will be used in messages)
// BOOST_TEST_MODULE must be defined before include boost/test/included/unit_test.hpp
#define BOOST_TEST_MODULE MinimalTest

#include <boost/test/included/unit_test.hpp>

int sum(int a, int b) {
  return a+b;
}
int diff(int a, int b) {
  return a*b;
}

// Declare a test case (with the macro BOOST_AUTO_TEST_CASE):
BOOST_AUTO_TEST_CASE(test_one)
{
  BOOST_CHECK(sum (20, 22) == 42);
  BOOST_CHECK(diff(10, 15) ==  5);
}

// Declare another test
BOOST_AUTO_TEST_CASE(test_two)
{
  BOOST_CHECK(true);
}
