#include <iostream>
#include <boost/variant.hpp>

class A {
    int x;
    int y;
    int z;
  public:
    A(int x_, int y_, int z_) : x(x_), y(y_), z(z_) {}

    void print() {
      std::cout << "x=" << x << ", y=" << y << ", z="<< z << std::endl;
    }
};

class B {
    char a;
    char b;
  public:
    B(char a_, char b_) : a(a_), b(b_) {}

    void print() {
      std::cout << "a=" << a << ", b=" << b << std::endl;
    }
};

int main() {

  boost::variant<A, B> v1(A(1, 2, 3 ));
  boost::variant<A, B> v2(B('a', 'b'));

  boost::get<A>(v1).print();
  boost::get<B>(v2).print();

}
