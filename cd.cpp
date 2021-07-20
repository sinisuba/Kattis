#include <iostream>
#include <unordered_set>

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    int n, m;
    
    while (std::cin >> n >> m && n != 0 && m != 0)
    {
        std::unordered_set<int> s;
        
        for (int i = 0; i < n; ++i)
        {
            int x;
            std::cin >> x;
            
            s.insert(x);
        }
        
        int cnt = 0;
        
        for (int j = 0; j < m; ++j)
        {
            int y;
            std::cin >> y;
            
            if (s.count(y))
                ++cnt;
        }
        
        std::cout << cnt << std::endl;
    }
}
