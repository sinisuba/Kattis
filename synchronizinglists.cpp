#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    int n;
    while (std::cin >> n && n != 0)
    {
        std::vector<int> prvi_niz(n);
        
        std::vector<int> drugi_niz(n);

        int min = INT_MAX;
        int* index_values = new int[n] {};

        for (int i = 0; i < n; i++)
            std::cin >> prvi_niz[i];

        std::vector<int> prvi_niz_copy(prvi_niz);

        for (int i = 0; i < n; i++)
            std::cin >> drugi_niz[i];

        std::sort(prvi_niz.begin(), prvi_niz.end());

        for (int i = 0; i < n; i++)
        {
            int element_to_find = prvi_niz[i];
            for (int j = 0; j < n; j++)
            {
                if (prvi_niz_copy[j] == element_to_find)
                {
                    index_values[i] = j;
                    break;
                }
            }
        }

        std::sort(drugi_niz.begin(), drugi_niz.end());

        std::vector<int> rezultat(n);

        for (int i = 0; i < n; i++)
            rezultat[index_values[i]] = drugi_niz[i];

        for (auto& i : rezultat)
            std::cout << i << std::endl;
        std::cout << std::endl;
        
        delete[] index_values;
    }
}
