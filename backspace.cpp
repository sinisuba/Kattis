#include <iostream>
#include <deque>

int main()
{
    std::string str;
    std::cin >> str;
    
    std::deque<char> lista;

    for (char i : str)
    {
        if (i == '<')
            lista.pop_back();
        else lista.push_back(i);
    }

    for (char i : lista)
        std::cout << i;
}
