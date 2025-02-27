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

short CountVowels(string str) {
  short count = 0;
  for(int i = 0; i < str.length(); i++) {
    if(IsVowel(str[i])) {
      count++;
    }
  }
  return count;
}


int main()
{
	string Sentence=ReadString();

cout<<"Vowels are:"<<CountVowels(Sentence)<<endl;
	return 0;
}
