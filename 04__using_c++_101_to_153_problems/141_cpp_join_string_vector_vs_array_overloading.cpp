#include <string>
#include <iostream>
#include <vector>

using namespace std;

string	JoinString(vector<string> &v_string, string delimiter = " ")
{
	string	NewString="";

	for(string &c:v_string)
		NewString=NewString+c+delimiter;

	return NewString.substr(0,NewString.length()-delimiter.length());
}

string JoinString(string Arr[],short Size, string delimiter=" ")
   {

	string	NewString="";

	for(short i=0;Size;i++)
		NewString=NewString+Arr[i]+delimiter;

	return NewString.substr(0,NewString.length()-delimiter.length());
  }

int main()
{
	vector<string>	v_string;
	string	StringFromVector;

	v_string = {"Mohammad", "Ahmad", "Leen", "Maher", "Waleed"};

	StringFromVector = JoinString(v_string);
	printf("The string of vector is: '%s'\n", StringFromVector);

	StringFromVector = JoinString(v_string, " ||--|| ");
	printf("\nThe 2'nd string of vector is: '%s'\n", StringFromVector);



	string Arr[5] = {"Yousef", "Ahmad", "Abood", "Mosub", "Omar"};

	string StringFromArray = JoinString(Arr,5);
	printf("The string of vector is: '%s'\n", StringFromArray.c_str());

	StringFromArray = JoinString(Arr,5, " ||--|| ");
	printf("\nThe 2'nd string of vector is: '%s'\n", StringFromArray.c_str());


	return (0);
}

