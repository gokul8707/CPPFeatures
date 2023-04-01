#ifndef STRINGVIEWTEST_H
#define STRINGVIEWTEST_H

#include <iostream>

class StringViewTest
{
public:
    StringViewTest(const std::string& str);

    void* operator new (std::size_t size);
};

#endif // STRINGVIEWTEST_H
