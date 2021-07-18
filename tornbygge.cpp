#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> niz(n);

    std::cin >> niz[0];

    int ans = 1;

    for (int i = 1; i < n; ++i)
    {
        std::cin >> niz[i];

        if (niz[i] > niz[i - 1])
            ++ans;
    }

    std::cout << ans;
}
