/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	cout <<"Welcome to GuessTheNumber game!"<< endl;
	cout << "You have to guess a number between 1 and 100."<< endl;

	while (true) {
		cout << "\nEnter the difficulty level: \n";
		cout << "1 for easy!\t";
		cout << "2 for medium!\t";
		cout << "3 for difficult!\t";
		cout << "0 for ending the game\n" << endl;
		int q;
		cout << "Enter the number: ";
		cin >>q;

		// To generate the secret number
		srand(time(0));
		int sn = 1 + (rand() % 100); //sn is the secret number
		int n; //n is the number which user will guess
		if (q == 1) {
			cout << "\nYou have 10 choices for finding the "
					"secret number between 1 and 100.";
			int choiceLeft = 10;
			for (int i = 1; i <= 10; i++) {
				cout << "\n\nEnter the number: ";
				cin >> n;
				if (n == sn) {
					cout << "Well played! You won"<< endl;
					break;
				}
				else {
					cout << "Nope"<<n<< " is not the right number\n";
					if (n > sn) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< n<<endl;
					}
				}
			}
		}
		else if (q == 2) {
			cout << "\nYou have 7 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {
				cout << "\n\nEnter the number: ";
				cin >> n;
				if (n == sn) {
					cout << "Well played! You won"<<endl;
					break;
				}
				else {
					cout << "Nope, " << n<< " is not the right number\n";
					if (n > sn) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< sn<<endl;
					}
				}
			}
		}
		else if (q == 3) {
			cout << "\nYou have 5 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {
				cout << "\n\nEnter the number: ";
				cin >> n;
				if (n == sn) {
					cout << "Well played! You won"<<endl;
					break;
				}
				else {
					cout << "Nope, " << n<< " is not the right number\n";
					if (n > sn) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< sn<<endl;
					}
				}
			}
		}
		else if (q== 0) {
			exit(0);
		}
		else {
			cout << "Wrong choice, Enter valid choice to "<< endl;
		}
	}
	return 0;
}
