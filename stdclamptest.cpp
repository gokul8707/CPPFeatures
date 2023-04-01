#include "stdclamptest.h"
#include <algorithm>
#include <iostream>


StdClampTest::StdClampTest(const int &number)
{
    std::cout << "given number is" << number << std::endl;
    int clampnumber = std::clamp(number, 0, 5);

    std::cout << "number after clamp" << clampnumber << std::endl;
}
