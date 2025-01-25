#include <iostream>
using namespace std;

int main()
{

	//L1F24BSCS0135 {Adil}
	//L1F24BSCS0132 {Sohaib}
	//L1F24BSCS0205 {Fahad}
	//L1F24BSCS0223 {Saad}

	//Maam mera code Chat GPT se copied nahi hai !



	char choice = '\0';
	//arrays for storing team names
	const int teams = 6;
	const int teamsize = 50;
	char teamname[teams][teamsize] = {"Lahore Qalanders", "Karachi Kings","Peshawar Zalmi",
									"Quetta Gladiators","Islamabad United","Multan Sultans" };
	//arrays for storing home city
	const int cities = 6;
	const int citysize = 50;
	char cityname[cities][citysize] = { "Lahore","Karachi","Peshawar","Quetta","Islamabad","Multan" };
	//arrays for storing home grounds;
	const int grounds = 6;
	const int groundsize = 50;
	char groundname[grounds][groundsize] = { "Gaddafi Stadium","National Stadium","Arbab Niaz Stadium",
											"Bugti Stadium","Rawalpindi Cricket Stadium","Multan Cricket Stadium" };




	cout << "Welcome to the PSL Management System" << endl;

	while (true)   // Loop to run the code until the user don't want to exit the Program . 
	{

		cout << "1. View Teams and Home Grounds " << endl;
		cout << "2. Draft Players for Teams " << endl;
		cout << "3. View Match Schedule " << endl;
		cout << "4. Enter Match Results " << endl;
		cout << "5. Display Points Table " << endl;
		cout << "6. Search for Teams or Players " << endl;
		cout << "7. Exit " << endl;

		cout << "Enter Your Choice Number : ";
		cin >> choice;

		switch (choice)
		{
		case'1':
			cout << "\nPSL Team Details: " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "| Team Name\t\t\t| Home City\t\t\t| Home Ground" << endl;
			for (int i = 0; i < teams; i++)
			{
				cout << "| " << teamname[i]   << "\t\t\t";
				cout << "| " << cityname[i]   << "\t\t\t";
				cout << "| " << groundname[i] << "\t\t\t";
				cout << endl;
			}
			cout << "-------------------------------------------------" << endl;

			break;

		case'2':

			break;

		case'3':

			break;

		case'4':

			break;

		case'5':

			break;

		case'6':

			break;

		case'7':
			cout << "Thank You For Using PSL Management System." << endl;
			cout << "Exiting the Program !" << endl;

			exit(0);  // To exit the Program .
			break;

		default:
			cout << "Enter valid choice ! " << endl;
			break;
		}


	}



	return 0;
}
