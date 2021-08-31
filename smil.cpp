#include <iostream>
#include <vector>

int main()
{
    std::string str;

    std::cin >> str;
    std::vector<int> ans;

    int n = str.size();

    for (int i = 0; i < n - 2; ++i)
    {
        if (str[i] == ':' || str[i] == ';')
        {
            if (str[i + 1] == ')')
            {
                ans.push_back(i);
                ++i;
            }
            else if (str[i + 1] == '-' && str[i + 2] == ')')
            {
                ans.push_back(i);
                i += 2;
            }
        }
    }

    if ((str[n - 2] == ':' || str[n - 2] == ';') && str[n - 1] == ')')
        ans.push_back(n - 2);

    if (ans.size() == 0)
        std::cout << 0;

    for (int &x : ans)
        std::cout << x << std::endl;
}
