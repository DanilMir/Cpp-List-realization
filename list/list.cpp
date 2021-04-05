

#include <iostream>
#include "BList.h"

int main()
{
    int * tt = new int[1];
    tt[0] = 0;
    BList b(tt, 1);
    b[0] = 228;
    
    for (size_t i = 0; i < b.Size(); i++)
    {
        std::cout << b[i] << ' ';
    }
    b.Add(2);
    b.Add(324);
    b.Add(12);

    std::cout << '\n';
    for (size_t i = 0; i < b.Size(); i++)
    {
        std::cout << b[i] << ' ';
    }

    b.Add(2);
    b.Add(324);
    b.Add(12);

    std::cout << '\n';
    for (size_t i = 0; i < b.Size(); i++)
    {
        std::cout << b[i] << ' ';
    }

    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();
    b.Remove();

    std::cout << '\n';
    for (size_t i = 0; i < b.Size(); i++)
    {
        std::cout << b[i] << ' ';
    }
}
