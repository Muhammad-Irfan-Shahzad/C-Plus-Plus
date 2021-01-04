#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

void getuserTicket(int userTicket[], int);
void getwinningNumbers(int winningNums[], int);
void results(string name, int userTicket[], int winningNums[], int size);
void playerMenu();
int checkMatches(int userTicket[], int winningNums[], int size);
bool checkDuplicates(int userticket[],int size , int i );


int main()
{
   time(0);

	const int num = 7;
	int userTicket [num]; // array holds user picked numbers
	int winningNums [num]; // array holds random winning numbers
	int matchingNumbers = 0;
	string name1; 
	char choice;

	playerMenu();
	cin >> choice;
	cout << endl;
	if (choice == '1')
	{
		cout << "Please enter your name: ";
		cin >> name1;
		cout << endl;

		getuserTicket(userTicket, num);
		getwinningNumbers(winningNums, num);
		cout << endl;
		results(name1, userTicket, winningNums, num);
		
	}
	else if (choice == 'q' || choice == 'Q')
	{
		cout << "You have chosen to quit the program" << endl;
	}
	else if (choice != '1' || choice != 'q' || choice != 'Q')
	{
		cout << "Invalid selection" << endl;
	}

	return 0;
}


void playerMenu()
{
	cout << "\nLITTLETON CITY LOTTO MODEL:" << endl
		<< "---------------------------" << endl
		<< "1) Play Lotto" << endl
		<< "q) Quit Program" << endl
		<< "Please make a selection" << endl;
}

bool playAgain()
{
	char choice;
	cout << " " << endl;
	cout << "If you would like to play again press Y/y\n"
		<< "otherwise press any key to exit the game" << endl;
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		choice = true;
	}
	else
		choice = false;

	return choice;
}


void getuserTicket(int userTicket[], int size)
{

	cout << setw(55) << "Enter 7 lottery numbers between the numbers 1-40: " << endl;

	
	for (int i = 0; i < size; i++)
	{
		cout << "selection # " << i + 1 << ": ";
		cin >> userTicket[i];

		while (checkDuplicates (userTicket, userTicket[i], i) || userTicket[i] < 1 || userTicket[i] > 40)
		{
			if (userTicket[i] < 1 || userTicket[i] > 40)
			{
			cout << "Invalid number" << endl;
			cout << "Enter a number between 1 and 40: ";
			cin >> userTicket[i];
			
			}
			if (checkDuplicates(userTicket, userTicket[i], i))
			{
				cout << "You have already entered that number, please choose a different number: " << endl;
				cin >> userTicket[i];
				cout << endl;
			}
		}
	}
}

void getwinningNumbers(int winningNums[], int size)
{
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		winningNums[i] = rand() % 40+1;
		
		while (checkDuplicates(winningNums, winningNums[i], i))
		{
			winningNums[i] = rand() % 40 +1;
		}
	}
}


void results(string name,int userTicket[], int winningNums[], int size)
{
	int count = checkMatches(userTicket, winningNums, size);
	cout << "" << name << " LOTTO RESULTS:" << endl;
	cout << "---------------------------" << endl;

	cout << "WINNING TICKET NUMBERS: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << winningNums[i];
	}
	cout << endl;
	cout << "" << name << "'s TICKET: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << userTicket[i];
	}
	for (int i = 0; i < size; i++)
	{
		if(userTicket[i]==winningNums[i])
		{
			
		}
	}
	cout << endl << endl;
	cout << "RESULTS:" << endl;
	cout << "--------" << endl;
	cout << "Number Matches: " << count << endl;
	cout << endl;
	cout << "Winnings : " ;
	for(int i=1;i<=count;i++)
	{
	
	switch (i)
	{
		case 1:
		   cout<<"Dinner set \n\n";
		   break;
		case 2:
			cout << "TV \n\n";
			break;
		case 3:
			cout << "FREE TICKET\n\n";
			break;
		case 4:
			cout << "NOT BAD - $100\n\n";
			break;
		case 5:
			cout << "LUCKY YOU! - $5,000\n\n";
			break;
		case 6:
			cout << "GREAT! - $100,000\n\n";
			break;
		case 7:
			cout << "JACKPOT - 1 MILLION\n\n";
			break;
	}
}
	cout << endl;
}

int checkMatches(int userTicket[], int winningNums[], int size)
{
	int count = 0;
    int k=0;
	for (int i = 0; i < size*size; i++)
	{
		int temp = userTicket[k];
     for(int j=0;j<size;j++)
     {
	 
 		if(temp == winningNums[j]) 
		{
			count++;
			
		}
	}
	k++;
   }
	
	return count;
}

bool checkDuplicates(int userticket[], int ticket, int i)
{
	bool duplicate = false;

	for (int j = 0; j < i; j++)
	{
		if (userticket[j] == ticket)
		{
			duplicate = true;
		}
	}
	return duplicate;
}
