//Code Hunter
//Debugged by Samael Newgate
//Create a new C++ project in Visual Studio and name it Code Hunter.
//Copy and paste the code below into your new project's main CPP file replacing all of its existing code.
//Run your code hunter program and type in a sentence for it to analyze.
//You should see the analysis printed out along with  WARNING!*** This program self checking has found this Analysis to be invalid!Do not use this data!
//Use your new debug skills to fix this program so when you run it and type in a sentence to analyze you see the analysis printed out along with the message  This program self checking has found this Analysis to be valid.
//Once the program is working and you have tested it a few times, create a new repository in your GitHub account called Code Hunter.
//Add your solution and files to your new Code Hunter Repository on GitHub.
//Take a screen shot of this project in GitHub
//Take a screen shot of the program working with the correct message.
//Comment where and how you fixed the code in each place in your.CPP file.

//
#include "stdafx.h"
#include <iostream>
#include <string>

//Std stands for standard library
using namespace std;

//The program always start at the main function
//This also applies to C#, Java, and other languages
//The int before the main stands for integer
//Integer is the return type
//The end of the main function is return 0;
//0 is an integer, that data type must match
//If you see the void main () , you will only see a return.
int main()
{
	//code inside the {} is called a code block
	//cout stands for console out
	//The ; is the end of the statement for the compiler to use
	//Int = integer
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;

	//This is the header
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	//User instruction to get started
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//This is the vowels it is searching for.
		//Includes both capital and lowercase vowels.
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			// Fix 1: Switched from -- to ++
			++vowels;
		}
		//This is the consonants it will search for.
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			//Fix 2: Uncommented ++consonants;
			++consonants;
		}
		//This is the digits it will search for.
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		//This is the type of space it will search for, blank space.
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}

		//This will list off everything else as unkownCharacters.
		else
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	//This is how it will display all the serches the code did.
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//This is what it searches as checkSum
	//And how it will display it.
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	//This is the error message results.
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	//This will make the debugger pause and not close.
	system("pause");

	//Return tells the program to exit back to the operating system.
	return 0;
}