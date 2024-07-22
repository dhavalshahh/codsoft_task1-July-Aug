
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "\n\t-----------Welcome to the Number Gussing Game -----------" << endl;
    cout << "\n\t-->Guess a Number between 1 to 100 . \n" << endl;

    srand(time(0));
    int randNumber = (rand() % 100) + 1;
    int input ;

    while (true)
    {
        cout << " Enter the Guess Number :- ";
        cin >> input;

        if (input == randNumber)
        {
            cout << "\nCongratulations.\n You have guessed the right number!!\n"<< endl;
            cout << "Thanks for playing . Have a nice day ";
            break;
        }
        else{
            if (input > randNumber){
                cout<<"Try a smaller number."<<endl;
            }
            else{
                cout<<"Try a bigger number."<<endl;
            }
        }
       
    }
    return 0 ;
}
