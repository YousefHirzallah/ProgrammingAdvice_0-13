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


short CountLetter(char Letter,string Sentence)
{
	int Counter = 0;
	for(int i = 0; i < Sentence.length(); i++)
	{
		if(Letter==Sentence[i])
			Counter++;
	}
	return Counter;
}




int main()
{
	string input=ReadString();
	char LetterToCheck=ReadChar();

	cout<<"The number of letters in string is: "<<CountLetter(LetterToCheck,input)<<endl;

	return 0;
}
