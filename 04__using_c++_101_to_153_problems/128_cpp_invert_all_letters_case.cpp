#include <iostream>

using namespace std;

string	ReadString()
{
	string	entered_str;

	printf("Please enter the string:\n");
	getline(cin >> ws, entered_str);
	return (entered_str);
}

void	InvertLetter(char &entered_char)
{
	if (entered_char >= 'a' && entered_char <= 'z')
		entered_char= (entered_char - 32);
	else if (entered_char >= 'A' && entered_char <= 'Z')
		entered_char= (entered_char + 32);

}

void InvertAllLetters(string &entered_string)
{
	short	c;

	c = -1;
	while (++c < entered_string.length())
	{
		InvertLetter(entered_string[c]);
	}
}

int	main()
{
	string	entered_string;

	entered_string = ReadString();
	printf("\nThe entered string is:  (%s)\n", entered_string.c_str());
	InvertAllLetters(entered_string);
	printf("\nThe string after converting is:  (%s)\n", entered_string.c_str());
	return (0);
}

