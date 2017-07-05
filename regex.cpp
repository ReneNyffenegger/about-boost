// g++ simplest.cpp -lboost_regex-mgw45-1_45
// set PATH=%BOOST_ROOT%\stage\lib;%PATH%
// g++ -I%BOOST_ROOT% simplest.cpp -o simplest.exe -L%BOOST_ROOT%\stage\lib -lboost_regex-mgw45-1_45 && simplest.exe

#include <boost/regex.hpp>

#include <iostream>
#include <string>

boost::regex pattern( "^foo|: \\d|bar$" );
//boost::regex pattern("foo");

void test_text(std::string const& text) {

  boost::smatch matches;

  if (boost::regex_search(text, matches, pattern)) {
      std::cout << "\"" << text << "\" matches: " << matches[0] << std::endl;
  }
  else {
      std::cout << "\"" << text << "\" doesn't match" << std::endl;
  }

}

int main() {

  test_text("hello world");
  test_text("foo bar baz");
  test_text("more less equal");
  test_text("more less bar");
  test_text("more or less");
  test_text("Answer: 42.");

}
