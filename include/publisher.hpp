#pragma once


class Publisher
{
public:
    Publisher(const Publisher&) = delete;
    Publisher& operator=(const Publisher&) = delete;

    static Publisher& get_instance();

private:
    Publisher() = default;
    ~Publisher() = default;

private:
    int socket;
};