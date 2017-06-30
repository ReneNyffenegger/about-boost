// g++ -I%BOOST_ROOT% exists.cpp -L%BOOST_ROOT%\stage\lib -lboost_system-mgw46-mt-1_52 -lboost_filesystem-mgw46-mt-1_52 -o exists.exe && exists.exe

#include <iostream>
#include <boost/filesystem.hpp>

void test_path(std::string const& path) {

  std::cout << path << " ";

  if (boost::filesystem::exists(path)) {
    std::cout << "exists, ";

    if (boost::filesystem::is_directory(path)) {
      std::cout << "it's a directory.";
    }
    else if (boost::filesystem::is_regular_file(path)) {
      std::cout << "it's a file.";
    }
    else {
      std::cout << "but it's neither a file nor a directory.";
    }
    
  }
  else {
    std::cout << "does not exist.";
  }

  std::cout << std::endl;

}

int main(int argc, char* argv[]) {

  test_path("tests.cpp");
  test_path("foobarbaz.txt");
  test_path("/tmp");
  test_path("/dev/sda");

}
