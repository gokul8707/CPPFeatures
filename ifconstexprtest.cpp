#include "ifconstexprtest.h"
#include <type_traits>
#include <string>

template<class T>
ifconstexprtest<T>::ifconstexprtest(const T &value)
{
    if constexpr (std::is_integral<T>::value)
    {
        m_length = value;
    }
    else
    {
        m_length = value.length();
    }
}

template<class T>
int ifconstexprtest<T>::returnlength() const
{
    return m_length;
}

template class ifconstexprtest<int>;
template class ifconstexprtest<std::string>;
