#include <iostream>
#include <stdexcept>

#include "publisher.hpp"


int main(int argc, char* argv[])
{
    try
    {
        if (argc != 2)
        {
            std::cerr << "Usage: ./publisher_main.exe <publisher_port>" << std::endl;
            return 1;
        }
        std::cout << "Publisher Main is Running!" << std::endl;
        Publisher& publisher = Publisher::get_instance();

    }
    catch(const std::exception& e)
    {
        try
        {
            std::cerr << e.what() << '\n';
        }
        catch(...)
        {}
        return 1;
    }
    catch(...)
    {
        try
        {
            std::cerr << "Something Really bad happened." << '\n';
        }
        catch(...)
        {}
        return 1;
    }

    return 0;
}
