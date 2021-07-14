#include <iostream>

int main()
{
    int n, x;
    std::cin >> n >> x;

    int cnt = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;

        if (a <= x)
        {
            flag = true;
            break;
        }
        else cnt++;
    }

    if (flag)
        std::cout << "It hadn't snowed this early in " << cnt << " years!";
    else std::cout << "It had never snowed this early!";
}
