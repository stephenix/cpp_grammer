#include <iostream>
#include <boost/scope_exit.hpp>
using namespace std;

void PrintCout(const std::string& str)
{
    bool submitted = false;
    BOOST_SCOPE_EXIT(&submitted ) {
        if (!submitted)
            std::cout<<"false"<<std::endl;
        else
            std::cout<<"true"<<std::endl;
    } BOOST_SCOPE_EXIT_END
    submitted = ((str == "Y")? true:false);
}
int main(int argc, char* argv[])
{
    std::string str;
    std::cin>>str;
    while(str != "q"){
        PrintCout(str);
        std::cin>>str;
    }
}

