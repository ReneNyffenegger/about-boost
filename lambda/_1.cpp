//
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <cmath>

int main() {

  std::array<double, 6> a = {1, 4, 9, 16, 25, 36};

  std::for_each(a.begin(), a.end(),
      std::cout << boost::lambda::_1 * 5.0 << " "
//    std::cout << std::sqrt(boost::lambda::_1) << " "  // TODO  https://stackoverflow.com/questions/44930191/how-can-i-stdsqrtboostlambdaplaceholder1-type
  );
}
