#include <iostream>

int main()
{
    std::string a, b;
    char ch;

    std::cin >> a >> ch >> b;

    if (ch == '*')
    {
        if (a >= b)
        {
            std::cout << a;

            for (int i = 0; i < b.size(); ++i)
                if (b[i] == '0')
                    std::cout << '0';
        }
        else
        {
            std::cout << b;

            for (int i = 0; i < a.size(); ++i)
                if (a[i] == '0')
                    std::cout << '0';
        }
    }
    else
    {
        if (a >= b)
        {
            int cnt = 0;

            for (int i = 0; i < b.size(); ++i)
                if (b[i] == '0')
                    ++cnt;

            if (a == b)
            {
                std::cout << '2';

                while (cnt--)
                    std::cout << '0';
            }
            else
            {
                a[a.size() - 1 - cnt] = '1';

                std::cout << a;
            }
        }
        else
        {
            int cnt = 0;

            for (int i = 0; i < a.size(); ++i)
                if (a[i] == '0')
                    ++cnt;

            if (a == b)
            {
                std::cout << '2';

                while (cnt--)
                    std::cout << '0';
            }
            else
            {
                b[b.size() - 1 - cnt] = '1';

                std::cout << b;
            }
        }
    }
}
