#include <iostream>
using namespace std;

int main()
{

	//L1F24BSCS0135 {Adil}
	//L1F24BSCS0132 {Sohaib}
	//L1F24BSCS0205 {Fahad}
	//L1F24BSCS0223 {Saad}

	//Maam mera code Chat GPT se copied nahi hai !



	int choice = 0;



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
		case1:

			break;

		case2:

			break;

		case3:

			break;
		
		case4:

			break;
		
		case5:

			break;
		
		case6:

			break;
		
		case7:
			cout << "Thank You For Using PSL Management System." << endl; 
			cout << "Exiting the Program !" << endl;

			exit(0);  // To exit the Program .

		default:
			cout << "Enter valid choice ! " << endl;
			break;
		}


	}



	return 0;
}
