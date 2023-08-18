#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int random_number = ((rand()) % 10) +1;
    int user_guess;
    int count;
    cout<< "Welcome to Number guess game"<<endl;
    while (true)
    {
        cout << "Enter a Number between 1 and 10: ";
        cin >> user_guess;
        count++; 
        if (user_guess == random_number)
        {
            cout<< "Congratulations! Your guess is correct"<<endl;
            break;
        }
        else if (user_guess > random_number)
        {
            cout<< "Incorrect! Your guess is greator"<<endl;
        }
        else if (user_guess < random_number)
        {
            cout<< "Incorrect! Your guess is less than number"<<endl;
        }
        else
        {
            cout<< "Invalid Input!"<<endl;
        }
    }
    cout<< "\n\tYou guess the number in " << count <<" attempts";
}
