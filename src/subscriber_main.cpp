#include <stdexcept>
#include <iostream>


int main(int argc, char* argv[])
{
    try
    {
        if (argc != 3)
        {
            std::cerr << "Usage: ./subscirber_main.exe <publisher_ip_address> <publisher_port>" << std::endl;
            return 1;
        }
        std::cout << "Subscriber Main is Running!" << std::endl;

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
