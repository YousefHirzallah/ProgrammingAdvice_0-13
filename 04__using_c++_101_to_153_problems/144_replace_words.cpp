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


vector <string> v_StoreWords(string Sentence,string Seperator=" ") {
	vector <string> v_Words;
	string word="";
	short Position=0;
	while((Position=Sentence.find(Seperator))!=string::npos)
	{
		word=Sentence.substr(0,Position);
		Sentence.erase(0,Position+Seperator.length());

		if(word!="")
			v_Words.push_back(word);

	}
	v_Words.push_back(Sentence);

	return v_Words;

}
string	JoinString(vector<string> &v_string, string delimiter = " ")
{
	string	str_of_vector="";

for(string &c:v_string)
	str_of_vector=str_of_vector+c+delimiter;

return str_of_vector.substr(0,str_of_vector.length()-delimiter.length());


}

string ReplaceSpecificWords(string Sentence, string OldWord, string NewWord) {
  vector <string> v_Words=v_StoreWords(Sentence," ");

  for(string &word:v_Words)
    if(word==OldWord)
      word=NewWord;

  return JoinString(v_Words," ");

}

int main()
{
	string Sentence=ReadString();
    string WordToReplace=ReadString();
    string NewWord=ReadString();

	cout<<Sentence<<endl;
	cout<<"The Sentence after replacing the words is:"<<ReplaceSpecificWords(Sentence,WordToReplace,NewWord)<<endl;
	return 0;
}
