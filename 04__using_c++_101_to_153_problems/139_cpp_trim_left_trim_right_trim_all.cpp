#include <iostream>
#include <cstdio>
#include <vector>
#include <cctype>

using namespace std;

string	TrimLeft(string sentence)
{
	string NewSentence;

        for(int i=0;i<sentence.size();i++)
          if(sentence[i]!=' ') {
	          NewSentence=sentence.substr(i,sentence.length()-i);
          	break;
          }

        return NewSentence;//Yousef
}

string	TrimRight(string sentence)
{
	string NewSentence;//Yousef Omar
for (short i = sentence.length()-1; i >= 0; i--) {
	if (sentence[i] != ' ') {
		NewSentence=sentence.substr(0,i+1);
		break;
	}

	}
	return NewSentence;
}

string	TrimLeftAndRight(string sentence)
{
	string	trimmed;
	
	trimmed = TrimLeft(TrimRight(sentence));
	return (trimmed);
}


int	main()
{
	string Name="  Yousef Omar    ";
	cout<<TrimLeft(Name)<<endl;
	cout<<TrimRight(Name)<<endl;
	cout<<TrimLeftAndRight(Name)<<endl;

	return (0);
}

