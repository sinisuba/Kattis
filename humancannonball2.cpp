#include <iostream>
#include <cmath>

#define PI 3.141592653589793238463

int main()
{
    int n;
    std::cin >> n;
	
    float v0, theta, x1, h1, h2;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> v0 >> theta >> x1 >> h1 >> h2;

        float t = x1 / (v0 * cos(theta * PI / 180));
        float yt = v0 * sin(theta * PI / 180) * t - (0.5 * 9.81 * t * t);

        if (h1 + 1 <= yt && h2 - 1 >= yt)
            std::cout << "Safe" << std::endl;
        else std::cout << "Not Safe" << std::endl;
    }
}
