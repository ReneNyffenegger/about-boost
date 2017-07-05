#include <vector>
#include <iostream>

#include <boost/lexical_cast.hpp>
#include <boost/foreach.hpp>


int main(int argc, char* argv[]) {

    std::vector<int> args;

    for (int arg = 1; arg < argc ; arg ++ ) {
        // TODO Where the conversions are numeric to numeric, boost::numeric_cast 
        //      may offer more reasonable behavior than lexical_cast. 

        args.push_back ( boost::lexical_cast<int>(argv[arg]));
    }


    // multiply elements in vector by 2
    // TODO see http://www.boost.org/doc/libs/1_38_0/doc/html/foreach.html
    // Note the the integer reference 'int&'
    BOOST_FOREACH(int& i, args) {i*=2;}
    
    // Print multiplied values:
    BOOST_FOREACH(int  i, args) { std::cout << i << std::endl;}
}
