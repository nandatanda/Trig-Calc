

#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
	//Allowing the user to enter in their angle measure to be converted between radians and degrees
	double fullDegrees, radianMeasure, minutes, seconds; int c = 0;
	const int MAX_NAME_LEN = 10;
	//we add (+1) to account for the null character
	string unitName; char cStringUnitName[MAX_NAME_LEN + 1] = {}, symbol; bool isRad = 0;


	cout << "Please type the unit measure for your angle from the following options\n\n[1]\tRadians\n\n[2]\tDegrees\n\n>";

		
	cin.get(symbol);
			//store in char array
		while(symbol != '\n') {
			cStringUnitName[c] = symbol;
			cin.get(symbol);
			c++;
		}

		int USER_IN_LEN = strlen(cStringUnitName);

		
		for (int i = 0; i < USER_IN_LEN; i++) {
			cStringUnitName[i] = tolower(cStringUnitName[i]);
		}
		
			//put into a string
		unitName = cStringUnitName;
		try {
			if (unitName == "radians") {
				isRad = 1;
				cout << "Congrats, you have entered a correct full name measurement\n";
			}
			else if (unitName == "degrees") {
				cout << "Congrats, you have entered a correct full name measurement\n";
			}
			else {
				const int TEMP_LEN = 3;
				char temp1[TEMP_LEN + 1] = {'r','a','d', '\0'}, temp2[TEMP_LEN + 1] = { 'd', 'e', 'g','\0' };

				if (strncmp(cStringUnitName, temp1, TEMP_LEN) != 0) {
					if (strncmp(cStringUnitName, temp2, TEMP_LEN) != 0) {
						throw (-1);
					}
				}
				else {
					isRad = 1;
				}		
			}
		}

			//pre-condition: there is no match
		catch (int) {
			char proceed = ' ';
			cout << "Unit measure is invalid\n\n\tWould you like to try again? (Y/N)\n\n";
			cin >> proceed;
			if (proceed == 'y' || proceed == 'Y') {
				cout << "This part of the program is complete\n";
			}
			else if (proceed == 'n' || proceed == 'N') {
				cout << "Exiting...\n";
				exit(1);
			}		

		}

		if (isRad) {
			cout << "Now we will convert to radians\n";
		}
		else {
			cout << "Now we will convert to degrees\n";
		}
			
	
	return 0;
}

