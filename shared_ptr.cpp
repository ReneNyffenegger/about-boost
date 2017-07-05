#include <iostream>
#include <boost/shared_ptr.hpp>

struct P {
  P(int p) : p_(p) {std::cout << "C'tor: " << p_ << std::endl;}
  virtual   ~P ( ) {std::cout << "D'tor: " << p_ << std::endl;}

  void show() {std::cout << p_ << std::endl;}

  int p_;
};

typedef boost::shared_ptr<P> Pp;

#define USE_COUNT(p) std::cout << "Use count " #p ": " << p.use_count() << std::endl;

void a(Pp pa) {

  USE_COUNT(pa)

  Pp pa2 = pa;

  USE_COUNT(pa )
  USE_COUNT(pa2)

  pa2->p_ = 20;

}

int main() {

//Following line: compile error:
//Pp p0 = new P(1);

  Pp p1(new P(3));

  USE_COUNT(p1)
  p1->show();

  a(p1);
  USE_COUNT(p1);
  p1->show();

  Pp p2(p1);
  USE_COUNT(p2);
  Pp p3(p1);
  USE_COUNT(p3);
  
  return 0;
}
