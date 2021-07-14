#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int a = 0, b = 0;

    std::vector<int> niz(n);

    for (int i = 0; i < n; ++i)
        std::cin >> niz[i];

    std::sort(niz.begin(), niz.end());

    bool al = true;
	
    for (int i = n - 1; i >= 0; --i)
    {
        if (al)
        {
            a += niz[i];
            al = false;
        }
        else
        {
            b += niz[i];
            al = true;
        }
    }

    std::cout << a << " " << b;
}
