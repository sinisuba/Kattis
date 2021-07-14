#include <iostream>

int main()
{
    int n, p, s;
    std::cin >> n >> p >> s;

    int m;
    bool flag = false;

    for (int i = 0; i < s; ++i)
    {
        flag = false;
        int k;
        std::cin >> k;

        for (int j = 0; j < k; ++j)
        {
            std::cin >> m;

            if (m == p)
                flag = true;
        }

        if (flag)
            std::cout << "KEEP" << std::endl;
        else std::cout << "REMOVE" << std::endl;
    }
}
