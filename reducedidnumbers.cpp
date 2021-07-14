#include <iostream>
#include <unordered_set>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> myset(n);
    
    for (int i = 0; i < n; ++i)
        std::cin >> myset[i];

    int x = 1;
    
    while (1)
    {
        std::unordered_set<int> odgovor;
        
        for (auto &i : myset)
        {
            if(!odgovor.insert(i % x).second)
                break;
        }
        
        if (odgovor.size() == myset.size())
        {
            std::cout << x;
            return 0;
        }
        
        else ++x;
    }
}
