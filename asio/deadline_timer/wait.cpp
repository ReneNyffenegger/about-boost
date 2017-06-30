// Compiling and linking under Windows: 
//
//      Windows XP:
//        #define _WIN32_WINNT 0x0501
//      Vista:
//        #define _WIN32_WINNT 0x0600
//
//    g++ Timer01.cpp -lboost_system-mgw45-1_45 -lwsock32
//

#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

int main() {
   boost::asio::io_service io;

   std::cout << "Going to wait for five seconds\n";

   boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
   t.wait();

   std::cout << "Enough waited\n";

   return 0;
}
