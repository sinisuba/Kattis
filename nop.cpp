#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    int n = str.length();

    if (n < 2)
        std::cout << 0;
    else
    {
        int ans = 0;

        for (int i = 1; i < n; ++i)
        {
            int cnt_lower = 0;

            while (i < n && str[i] >= 'a' && str[i] <= 'z')
            {
                ++cnt_lower;
                ++i;
            }

            while (i < n && (cnt_lower + 1) % 4 != 0)
            {
                ++ans;
                ++cnt_lower;
            }
        }

        std::cout << ans << std::endl;
    }
}
