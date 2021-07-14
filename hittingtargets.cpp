#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> circles;
    std::vector<std::vector<int>> rectangles;

    int x1, y1, x2, y2;
    int r;
    std::string temp;
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> temp;

        if (temp == "circle")
        {
            std::cin >> x1 >> y1 >> r;
            circles.push_back({x1, y1, r});
        }
        else
        {
            std::cin >> x1 >> y1 >> x2 >> y2;
            rectangles.push_back({x1, y1, x2, y2});
        }
    }

    int m;
    std::cin >> m;

    int x, y;
    int ans = 0;

    for (int i = 0; i < m; ++i)
    {
        std::cin >> x >> y;

        for (int k = 0; k < circles.size(); ++k)
        {
            if ((((x - circles[k][0]) * (x - circles[k][0])) + ((y - circles[k][1]) * (y - circles[k][1]))) <= circles[k][2] * circles[k][2])
                ++ans;
        }

        for (int k = 0; k < rectangles.size(); ++k)
        {
            if (x >= rectangles[k][0] && x <= rectangles[k][2] && y >= rectangles[k][1] && y <= rectangles[k][3])
                ++ans;
        }

        std::cout << ans << std::endl;
        ans = 0;
    }
}
