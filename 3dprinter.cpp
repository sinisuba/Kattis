#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int printers = 1;
    int cnt = 1;

    while (printers < n)
    {
        printers *= 2;
        cnt++;
    }

    std::cout << cnt;
}
