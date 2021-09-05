#include <iostream>

int main()
{
    // Note; problem statement: 'm is the first !three letters! of the name of the month'
    int n;
    std::cin >> n;

    int day;
    std::string month;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> day >> month;

        if (month == "Jan")
        {
            if (day <= 20)
                std::cout << "Capricorn";
            else std::cout << "Aquarius";
        }

        else if (month == "Feb")
        {
            if (day <= 19)
                std::cout << "Aquarius";
            else std::cout << "Pisces";
        }

        else if (month == "Mar")
        {
            if (day <= 20)
                std::cout << "Pisces";
            else std::cout << "Aries";
        }

        else if (month == "Apr")
        {
            if (day <= 20)
                std::cout << "Aries";
            else std::cout << "Taurus";
        }

        else if (month == "May")
        {
            if (day <= 20)
                std::cout << "Taurus";
            else std::cout << "Gemini";
        }

        else if (month == "Jun")
        {
            if (day <= 21)
                std::cout << "Gemini";
            else std::cout << "Cancer";
        }

        else if (month == "Jul")
        {
            if (day <= 22)
                std::cout << "Cancer";
            else std::cout << "Leo";
        }

        else if (month == "Aug")
        {
            if (day <= 22)
                std::cout << "Leo";
            else std::cout << "Virgo";
        }

        else if (month == "Sep")
        {
            if (day <= 21)
                std::cout << "Virgo";
            else std::cout << "Libra";
        }

        else if (month == "Oct")
        {
            if (day <= 22)
                std::cout << "Libra";
            else std::cout << "Scorpio";
        }

        else if (month == "Nov")
        {
            if (day <= 22)
                std::cout << "Scorpio";
            else std::cout << "Sagittarius";
        }

        else if (month == "Dec")
        {
            if (day <= 21)
                std::cout << "Sagittarius";
            else std::cout << "Capricorn";
        }

        std::cout << std::endl;
    }
}
