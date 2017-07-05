#include <boost/noncopyable.hpp>

struct C {
   int m;
};

struct N : boost::noncopyable {
   int m;
};

int main() {

  C c; c.m = 1;
  N n; n.m = 1;

  C __attribute__((unused)) c2 = c;


//Next line would produce error.
//N n2 = n; 

  return 0;
}
