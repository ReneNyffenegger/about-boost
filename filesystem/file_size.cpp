#include <iostream>
#include <boost/filesystem.hpp>

int main(int argc, char* argv[]) {
  std::cout << argv[0] << "'s size is " << boost::filesystem::file_size(argv[0]) << " bytes." << std::endl;
}
