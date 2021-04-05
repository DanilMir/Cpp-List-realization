

#include <iostream>
#include "BList.h"

int main()
{
    int * tt = new int[1];
    tt[0] = 0;
    BList b(tt, 1);
    b[0] = 228;

    b.push_back(2);
    b.push_back(324);
    b.push_back(12);

    std::cout << '\n';
    for (size_t i = 0; i < b.size(); i++)
    {
        std::cout << b[i] << ' ';
    }

    b.remove_at(1);
    std::cout << '\n';
    for (size_t i = 0; i < b.size(); i++)
    {
        std::cout << b[i] << ' ';
    }
}
