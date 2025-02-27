#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string input;
	cout<<"Enter a string: ";
	getline(cin, input);

	return input;
}

char ReadChar()
{
	char c;
	cout<<"Enter a character: ";
	cin>>c;
	return c;
}


bool IsVowel(char c) {
	c=tolower(c);
	 return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')? true: false;
}




int main()
{
	char LetterToCheck=ReadChar();

	if (IsVowel(LetterToCheck))
cout<<LetterToCheck<<" is a vowel";
	else
		cout<<LetterToCheck<<" is not a vowel";

	return 0;
}
