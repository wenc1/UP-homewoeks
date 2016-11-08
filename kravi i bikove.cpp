#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <ctype.h>
using namespace std;


int main()
{
	int userInput, compNum;
	char aComp, bComp, cComp, dComp, aUser, bUser, cUser, dUser;
	int kravi = 0;
	int bikove = 0;
	int difDigits = 0;

	do
	{
		srand(time(NULL));
		compNum = rand() % 9000 + 1000;
		dComp = compNum % 10;
		cComp = (compNum / 10) % 10;
		bComp = (compNum / 100) % 10;
		aComp = compNum / 1000;
		if (aComp == bComp || aComp == cComp || aComp == dComp || bComp == cComp || bComp == dComp || cComp == dComp)
		{
			difDigits = 0;
		}
		else
		{
			difDigits = 1;
			cout << "The computer number is: " << compNum << endl;
		}
	} while (difDigits != 1);

	int error = 0;
	do
	{
		cout << "Insert your 4 digit number here: ";
		cin >> userInput;
		dUser = userInput % 10;
		cUser = (userInput / 10) % 10;
		bUser = (userInput / 100) % 10;
		aUser = userInput / 1000;

		if (aUser == bUser || aUser == cUser || aUser == dUser || bUser == cUser || bUser == dUser || cUser == dUser)
		{
			cout << "Nepravilno chislo!" << endl;
		}
		else
		{

			if (aComp == aUser)
			{
				bikove += 1;
			}
			 if (bComp == bUser)
			{
				bikove += 1;
			}
			if (cComp == cUser)
			{
				bikove += 1;
			}
			if (dComp == dUser)
			{
				bikove += 1;
			}

			if (aComp == bUser || aComp == cUser || aComp == dUser)
			{
				kravi += 1;
			}
			if (bComp == aUser || bComp == cUser || bComp == dUser)
			{
				kravi += 1;
			}
			if (cComp == aUser || cComp == bUser || cComp == dUser)
			{
				kravi += 1;
			}
			if (dComp == aUser || dComp == bUser || dComp == cUser)
			{
				kravi += 1;
			}

			if (bikove != 4)
			{
				cout << "Imash " << bikove << " bikove " << "and " << kravi << " kravi " << endl;
			}
			bikove = 0;
			kravi = 0;
		}

	} while (compNum != userInput);

	if (compNum = userInput)
	{
		cout << "Ti Pechelishh!" << endl;
	}


		return 0;
}
