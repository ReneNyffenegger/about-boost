#include <boost/thread.hpp>

//
//     TODO: This example should be made with multiple threads because
//     the purpose of boost::call_once is for a function in a multi-thread
//     environment to be called at most once.
//

static boost::once_flag flag = BOOST_ONCE_INIT;

static void called_once() {
  std::cout << "I should be called only once!" << std::endl;
}

static void f() {
  boost::call_once(&called_once, flag);
}

int main() {

  f();
  f();
  f();

}
