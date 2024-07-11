#include <iostream>
using namespace std;

int main()
{
    int yes_no = 1;
    do
    {
        int birth_month = 0;
        cout << "Horoscope Checker!" << endl;
        cout << "Enter your birth month and day (MMDD): ";
        cin >> birth_month;

        if (birth_month < 101 || birth_month > 1231)
        {
            cout << "Invalid birth month and day." << endl;
            continue;
        }

        int birth_day = birth_month % 100;
        birth_month = birth_month / 100;

        if ((birth_month == 1 && birth_day >= 20) || (birth_month == 2 && birth_day <= 18))
        {
            cout << "You are an Aquarius";
            if ((birth_month == 2 && (birth_day >= 19 && birth_day <= 21)))
                cout << " and on the cusp of being a Pisces!";
        }
        else if ((birth_month == 2 && birth_day >= 19) || (birth_month == 3 && birth_day <= 20))
        {
            cout << "You are a Pisces";
            if ((birth_month == 3 && (birth_day >= 21 && birth_day <= 23)))
                cout << " and on the cusp of being an Aries!";
        }
        else if ((birth_month == 3 && birth_day >= 21) || (birth_month == 4 && birth_day <= 19))
        {
            cout << "You are an Aries";
            if ((birth_month == 4 && (birth_day >= 20 && birth_day <= 22)))
                cout << " and on the cusp of being a Taurus!";
        }
        else if ((birth_month == 4 && birth_day >= 20) || (birth_month == 5 && birth_day <= 20))
        {
            cout << "You are a Taurus";
            if ((birth_month == 5 && (birth_day >= 21 && birth_day <= 23)))
                cout << " and on the cusp of being a Gemini!";
        }
        else if ((birth_month == 5 && birth_day >= 21) || (birth_month == 6 && birth_day <= 20))
        {
            cout << "You are a Gemini";
            if ((birth_month == 6 && (birth_day >= 21 && birth_day <= 23)))
                cout << " and on the cusp of being a Cancer!";
        }
        else if ((birth_month == 6 && birth_day >= 21) || (birth_month == 7 && birth_day <= 22))
        {
            cout << "You are a Cancer";
            if ((birth_month == 7 && (birth_day >= 23 && birth_day <= 25)))
                cout << " and on the cusp of being a Leo!";
        }
        else if ((birth_month == 7 && birth_day >= 23) || (birth_month == 8 && birth_day <= 22))
        {
            cout << "You are a Leo";
            if ((birth_month == 8 && (birth_day >= 23 && birth_day <= 25)))
                cout << " and on the cusp of being a Virgo!";
        }
        else if ((birth_month == 8 && birth_day >= 23) || (birth_month == 9 && birth_day <= 22))
        {
            cout << "You are a Virgo";
            if ((birth_month == 9 && (birth_day >= 23 && birth_day <= 25)))
                cout << " and on the cusp of being a Libra!";
        }
        else if ((birth_month == 9 && birth_day >= 23) || (birth_month == 10 && birth_day <= 22))
        {
            cout << "You are a Libra";
            if ((birth_month == 10 && (birth_day >= 23 && birth_day <= 25)))
                cout << " and on the cusp of being a Scorpio!";
        }
        else if ((birth_month == 10 && birth_day >= 23) || (birth_month == 11 && birth_day <= 21))
        {
            cout << "You are a Scorpio";
            if ((birth_month == 11 && (birth_day >= 22 && birth_day <= 24)))
                cout << " and on the cusp of being a Sagittarius!";
        }
        else if ((birth_month == 11 && birth_day >= 22) || (birth_month == 12 && birth_day <= 21))
        {
            cout << "You are a Sagittarius";
            if ((birth_month == 12 && (birth_day >= 22 && birth_day <= 24)))
                cout << " and on the cusp of being a Capricorn!";
        }
        else if ((birth_month == 12 && birth_day >= 22) || (birth_month == 1 && birth_day <= 19))
        {
            cout << "You are a Capricorn";
            if ((birth_month == 1 && (birth_day >= 20 && birth_day <= 22)))
                cout << " and on the cusp of being an Aquarius!";
        }
        else
        {
            cout << "Invalid birth month and day.";
        }

        cout << endl << "Would you like to go again? (1/0) yes/no ";
        cin >> yes_no;

    } while (yes_no == 1);

    return 0;
}
