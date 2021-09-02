#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    std::vector<int> abg(3);

    int cnt = 1;

    for (int i = 0; i < n; ++i)
    {
        if (cnt > 3)
            cnt = 1;

        if (cnt == 1 && str[i] == 'A')
            ++abg[0];
        else if (cnt == 2 && str[i] == 'B')
            ++abg[0];
        else if (cnt == 3 && str[i] == 'C')
            ++abg[0];

        ++cnt;
    }

    cnt = 1;

    for (int i = 0; i < n; ++i)
    {
        if (cnt > 4)
            cnt = 1;

        if ((cnt == 1 || cnt == 3) && str[i] == 'B')
            ++abg[1];
        else if (cnt == 2 && str[i] == 'A')
            ++abg[1];
        else if (cnt == 4 && str[i] == 'C')
            ++abg[1];

        ++cnt;
    }

    cnt = 1;

    for (int i = 0; i < n; ++i)
    {
        if (cnt > 6)
            cnt = 1;

        if ((cnt == 1 || cnt == 2) && str[i] == 'C')
            ++abg[2];
        else if ((cnt == 3 || cnt == 4) && str[i] == 'A')
            ++abg[2];
        else if ((cnt == 5 || cnt == 6) && str[i] == 'B')
            ++abg[2];

        ++cnt;
    }

    int max_el = *std::max_element(abg.begin(), abg.end());

    std::cout << max_el << std::endl;

    if (abg[0] == max_el)
        std::cout << "Adrian\n";
    if (abg[1] == max_el)
        std::cout << "Bruno\n";
    if (abg[2] == max_el)
        std::cout << "Goran";
}
