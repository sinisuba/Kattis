#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int t, d;
    std::cin >> t >> d;
    int prev[2]{t, d};

    int ans = 0;

    for (int i = 1; i < n; ++i)
    {
        std::cin >> t >> d;

        ans = std::max(ans, (d - prev[1]) / (t - prev[0]));

        prev[0] = t;
        prev[1] = d;
    }

    std::cout << ans;
}
