#include <iostream>
#include "stringviewtest.h"
#include "stdclamptest.h"
#include "ifelseandswitchcaseinitializer.h"
#include "ifconstexprtest.h"

int main()
{

    //Driver code for Stringtest
    StringViewTest str("Hello, This is Gokul");
    //Driver code for std::clamp
    StdClampTest clamp(10);
    //ifelse initializer test
    IfElseandSwitchcaseInitializer::testifelseinitializer(34);

    ifconstexprtest<int> test(78);
    std::cout << test.returnlength() << std::endl;
    return 0;
}
