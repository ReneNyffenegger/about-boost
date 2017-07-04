#include <iostream>
#include <boost/bind.hpp>
#include <boost/function.hpp>

int add(int a, int b) { return a+b ;} 
int sub(int a, int b) { return a-b ;}
int mul(int a, int b) { return a*b ;}

int main() {

  boost::function< int(int, int) > a = boost::bind(add, _1, _2);
  boost::function< int(int     ) > s = boost::bind(sub, 10, _1);
  boost::function< int(        ) > m = boost::bind(mul,  2,  3);

  std::cout << a(7,2) << std::endl; // 9
  std::cout << s(  3) << std::endl; // 7
  std::cout << m(   ) << std::endl; // 6

}
