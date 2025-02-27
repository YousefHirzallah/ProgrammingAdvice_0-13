#include <string>
#include <iostream>
#include <vector>

using namespace std;

string	JoinString(vector<string> &v_string, string delimiter = " ")
{
	string	str_of_vector="";
	short	c=v_string.size();

for(string &c:v_string)
	str_of_vector=str_of_vector+c+delimiter;

return str_of_vector.substr(0,str_of_vector.length()-delimiter.length());


}

int main()
{
    vector<string>	v_string;
	string	str_of_vector;

	v_string = {"Mohammad", "Ahmad", "Leen", "Maher", "Waleed"};
	str_of_vector = JoinString(v_string);
	printf("The string of vector is: '%s'\n", str_of_vector.c_str());
	str_of_vector = JoinString(v_string, " ||--|| ");
	printf("\nThe 2'nd string of vector is: '%s'\n", str_of_vector.c_str());
	str_of_vector = JoinString(v_string, ",");
	printf("\nThe 2'nd string of vector is: '%s'\n", str_of_vector.c_str());
	str_of_vector = JoinString(v_string, " ### ");
	printf("\nThe 2'nd string of vector is: '%s'\n", str_of_vector.c_str());
    return (0);
}

