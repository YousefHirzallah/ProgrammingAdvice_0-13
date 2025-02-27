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


vector <string> v_StoreWords(string Sentence) {
	vector <string> v_Words;
	string word="";
	for(char c : Sentence)
	{
		if(c != ' ')
			word+=c;

		else if (word!="")//Yousef Omar Ibrahim
		{
			v_Words.push_back(word);
			word="";
		}
	}
	if (word!="")
		v_Words.push_back(word);
	return v_Words;
}

short CountWords(string Sentence)
{
  short Counter=0;

  string word="";
  for(char c:Sentence)
  {
	 if(c!=' ')
		 word+=c;

	 else if (word!="")//Yousef Omar Ibrahim
	 {
    	Counter++;
    	word="";
	 }
  }


    return Counter+1;
}

int main()
{
	string Sentence=ReadString();
	vector <string> v_Words=v_StoreWords(Sentence);
	cout<<"Number of Words is:"<<CountWords(Sentence)<<endl;

	return 0;
}
