#include "stringviewtest.h"
#include <iostream>


static uint32_t alloc = 0;

void *operator new(std::size_t size)
{
    alloc++;
    std::cout << "allocated" << size << std::endl;
    return malloc(size);
}

StringViewTest::StringViewTest(const std::string &str)
{
    std::string_view str2{str};
    std::string_view str3{str};

    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;
}

