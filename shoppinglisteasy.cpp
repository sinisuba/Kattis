#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<std::string>> niz(n, std::vector<std::string>(m));
    std::vector<std::string> ans;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            std::cin >> niz[i][j];

    int cnt = 0;

    for (int i = 0; i < m; ++i)
    {
        int temp = 0;
        std::string curr_item = niz[0][i];

        for (int j = 1; j < n; ++j)
        {
            for (int k = 0; k < m; ++k)
            {
                if (curr_item == niz[j][k])
                {
                    ++temp;
                    break;
                }
            }
        }

        if (temp == n - 1)
        {
            ++cnt;
            ans.push_back(curr_item);
        }
    }

    std::cout << cnt << std::endl;

    std::sort(ans.begin(), ans.end());

    for (std::string x : ans)
        std::cout << x << std::endl;
}
