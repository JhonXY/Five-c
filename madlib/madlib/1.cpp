#include<iostream>
#include<string>
using namespace std;
string askText(string prompt);
int askNumber(string prompt);
void story(string name, string noun, int number, string bodyPart, string verb);
int main()
{
	cout << "Welecome\n\n";
	cout << "Answear the following questions to help create a new story .\n";
	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter averb: ");
	story(name, noun, number, bodyPart, verb);
	return 0;
}