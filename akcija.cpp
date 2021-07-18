#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> niz(n);

    for (int i = 0; i < n; i++)
        std::cin >> niz[i];

    std::sort(niz.begin(), niz.end(), std::greater<int>());

    int ans = 0;

    if (n % 3 == 0)
    {
        for (int i = 0; i < n; i += 3)
            for (int j = i; j < i + 3 - 1; j++)
                ans += niz[j];
    }
    else
    {
        int i = 0;

        for (i = 0; i < n - 3; i += 3)
            for (int j = i; j < i + 3 - 1; j++)
                ans += niz[j];

        for (int x = i; x < n; x++)
            ans += niz[x];
    }

    std::cout << ans;
}
