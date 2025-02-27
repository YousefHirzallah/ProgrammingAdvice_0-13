#include <iostream>
#include <string>
#include <vector>

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

vector <char> v_StoreVowels(string str) {
	vector <char> v_Vowels;
	for(int i = 0; i < str.length(); i++) {
		if(IsVowel(str[i])) {
		 v_Vowels.push_back(str[i]);
		}
	}
	return v_Vowels;
}


int main()
{
	string Sentence=ReadString();
	vector <char> v_Vowels=v_StoreVowels(Sentence);
	cout<<"Vowels are:";
        for(int i = 0; i < v_Vowels.size(); i++) {
          cout<<v_Vowels[i]<<" ";
        }
	return 0;
}
