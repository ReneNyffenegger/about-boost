#include <iostream>

#define BOOST_TEST_MODULE TestName

#include <boost/test/included/unit_test.hpp>


struct MyFixture {

  MyFixture () {
    std::cout << "MyFixture c'tor" << std::endl;
  }
 ~MyFixture () {
    std::cout << "MyFixture d'tor" << std::endl;
  }

};

//
//  The fixtures initiates and destructs
//  the definable MyFixture for every test
//  case below (BOOST_AUTO_TEST_CASE)
//
BOOST_FIXTURE_TEST_SUITE(foo_bar, MyFixture)

BOOST_AUTO_TEST_CASE(test_one){
  BOOST_CHECK(true);
  BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE(test_two){
  BOOST_CHECK(true);
  BOOST_CHECK(true);
  BOOST_CHECK(true);
}

BOOST_AUTO_TEST_SUITE_END()
