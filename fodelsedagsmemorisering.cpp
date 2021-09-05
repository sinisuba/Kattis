#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    int n, like;
    std::cin >> n;

    std::string name, date;

    std::map<std::string, std::pair<std::string, int>> m;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> name >> like >> date;

        if (!m.count(date))
            m[date] = {name, like};
        else if (like > m[date].second)
            m[date] = {name, like};
    }

    std::cout << m.size() << std::endl;

    std::vector<std::string> ans;

    for (auto &x : m)
        ans.push_back(x.second.first);

    std::sort(ans.begin(), ans.end());

    for (auto &x : ans)
        std::cout << x << std::endl;
}
