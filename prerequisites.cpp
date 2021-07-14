#include <iostream>
#include <unordered_set>
#include <cstdint>

int main()
{
    int k, m;
    while (std::cin >> k && k)
    {
        std::cin >> m;
        std::unordered_set<uint16_t> res;

        for (int i = 0; i < k; i++)
        {
            uint16_t x;
            std::cin >> x;
            res.insert(x);
        }

        bool good = true;

        for (int i = 0; i < m; i++)
        {
            int c, r;
            std::cin >> c >> r;

            if (r == 0)
            {
                for (int j = 0; j < c; j++)
                {
                    uint16_t x;
                    std::cin >> x;
                }
                continue;
            }

            int cnt = 0;

            for (int j = 0; j < c; j++)
            {
                uint16_t x;
                std::cin >> x;

                if (res.find(x) != res.end())
                    cnt++;
            }

            if (cnt < r)
                good = false;
        }

        if (good)
            std::cout << "yes" << std::endl;
        else std::cout << "no" << std::endl;
    }
}
