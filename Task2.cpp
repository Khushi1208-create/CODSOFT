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

		// select the level of difficulty
		int q;
		cout << "Enter the number: ";
		cin >>q;

		// generating the secret number
		srand(time(0));
		int sn = 1 + (rand() % 100);
		int n;

		// Difficulty Level:Easy
		if (q == 1) {
			cout << "\nYou have 10 choices for finding the "
					"secret number between 1 and 100.";
			int choiceLeft = 10;
			for (int i = 1; i <= 10; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> n;

				// determining if the playerChoice matches
				// the secret number
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

		// Difficulty level : Medium
		else if (q == 2) {
			cout << "\nYou have 7 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> n;

				// determining if the playerChoice matches
				// the secret number
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
		// Difficulty level : Medium
		else if (q == 3) {
			cout << "\nYou have 5 choices for finding the "
					"secret number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> n;

				// determining if the playerChoice matches
				// the secret number
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
		// To end the game
		else if (q== 0) {
			exit(0);
		}
		else {
			cout << "Wrong choice, Enter valid choice to "<< endl;
		}
	}
	return 0;
}
