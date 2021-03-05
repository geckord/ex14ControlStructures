#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop." << endl;

    while (true)
    {
        int mass;
        int height;
        int age;
        char gender;

        cout << "Please enter your mass in kg: ";
        cin >> mass;
        cout << "Please enter your height in cm: ";
        cin >> height;
        cout << "Please enter your age: ";
        cin >> age;
        cout << "Please enter your gender ([M]ale/[F]emale): ";
        cin >> gender;

        double bmr;
        if ((gender == 'M') || (gender == 'm')) bmr = 13.75 * mass + 5.003 * height - 6.775 * age + 66.5;
        else if ((gender == 'F') || (gender == 'f')) bmr = 9.563 * mass + 1.850 * height - 4.676 * age + 655.1;

        char exercise;
        cout << "Please enter your physical activity frequency ([N]o/[L]ight/[F]requent): ";
        cin >> exercise;

        double dailyCaloriesNeed;
        if ((exercise == 'N') || (exercise == 'n')) dailyCaloriesNeed = bmr * 1.2;
        else if ((exercise == 'L') || (exercise == 'l')) dailyCaloriesNeed = bmr * 1.375;
        else if ((exercise == 'F') || (exercise == 'f')) dailyCaloriesNeed = bmr * 1.725;

        cout << "You need " << dailyCaloriesNeed << " calories daily." << endl;
    }
    return 0;
}
