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


vector <string> v_StoreWords(string Sentence,string Seperator) {
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


int main()
{
	string Sentence=ReadString();
	vector <string> v_Words=v_StoreWords(Sentence,"***");
	cout<<"Words are:";
	for(string Word: v_Words) {
		cout<<Word<<"\n";
	}
	return 0;
}
