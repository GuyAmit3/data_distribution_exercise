#pragma once

#include <cstdint>


 // TODO: Implement socket communication.
class Publisher
{
public:
    Publisher(const Publisher&) = delete;
    Publisher& operator=(const Publisher&) = delete;

    static Publisher& get_instance();

    // Publish(uint16_t port, std::vector<squares> squares, std::vector<circles> circles)

private:
    Publisher() = default;

private:
    // int _udp_server_socket;
    // std::set<inet_address> _subscribers;
};
