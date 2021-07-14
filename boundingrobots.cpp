#include <iostream>
#include <vector>

int main()
{
    int w, l;
    int rx = 0, ry = 0, ax = 0, ay = 0;
    int curr_move;
    int n;
    char ch;

    while (1)
    {
        rx = 0, ry = 0, ax = 0, ay = 0;
        std::cin >> w >> l;
		
        if (w == 0 && l == 0)
            break;

        std::cin >> n;
		
        for (int i = 0; i < n; ++i)
        {
            std::cin >> ch >> curr_move;

            if (ch == 'u')
            {
                ax += curr_move;
                rx += curr_move;
            }
            else if (ch == 'd')
            {
                ax -= curr_move;
                rx -= curr_move;
            }
            else if (ch == 'l')
            {
                ay -= curr_move;
                ry -= curr_move;
            }
            else
            {
                ay += curr_move;
                ry += curr_move;
            }
			
            if (ax >= l)
                ax = l - 1;
            if (ay >= w)
                ay = w - 1;
            if (ax < 0)
                ax = 0;
            if (ay < 0)
                ay = 0;
        }
		
        std::cout << "Robot thinks " << ry << " " << rx << std::endl;
        std::cout << "Actually at " << ay << " " << ax << std::endl;
        std::cout << std::endl;
    }
}
