#ifndef IFCONSTEXPRTEST_H
#define IFCONSTEXPRTEST_H

template<class T>
class ifconstexprtest
{
public:
    ifconstexprtest(T  const& value);
    int m_length;
    int returnlength() const;

};

#endif // IFCONSTEXPRTEST_H
