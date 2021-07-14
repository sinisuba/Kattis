#include <iostream>
#include <vector>

int main()
{
    int r, c;
    std::cin >> r >> c;
	
    std::vector<std::vector<char>> niz(r, std::vector<char>(c));
    std::vector<int> cnt(5);

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
            std::cin >> niz[i][j];
    }

    for (int i = 0; i < r - 1; ++i)
    {
        for (int j = 0; j < c - 1; ++j)
        {
            if (niz[i][j] != '#' && niz[i + 1][j] != '#' && niz[i][j + 1] != '#' && niz[i + 1][j + 1] != '#')
            {
                int cnt_cars = 0;
				
                if (niz[i][j] == 'X')
                    ++cnt_cars;
                if (niz[i + 1][j] == 'X')
                    ++cnt_cars;
                if (niz[i][j + 1] == 'X')
                    ++cnt_cars;
                if (niz[i + 1][j + 1] == 'X')
                    ++cnt_cars;
                ++cnt[cnt_cars];
            }
        }
    }

    for (int x : cnt)
        std::cout << x << std::endl;
}
