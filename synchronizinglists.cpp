#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    
    while (std::cin >> n && n != 0)
    {
        std::vector<int> prvi_niz(n), drugi_niz(n), index_values(n);

        for (int i = 0; i < n; i++)
            std::cin >> prvi_niz[i];

        std::vector<int> prvi_niz_copy(prvi_niz);
        
        std::sort(prvi_niz.begin(), prvi_niz.end());

        for (int i = 0; i < n; i++)
            std::cin >> drugi_niz[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (prvi_niz_copy[j] == prvi_niz[i])
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

        for (int i : rezultat)
            std::cout << i << std::endl;
            
        std::cout << std::endl;
    }
}
