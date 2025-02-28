#include <iostream>
#include <vector>

using namespace std;

string ToUpperString(string OldS) {
	string NewS=OldS ;
	NewS[0] = tolower(OldS[0]);
	for (short i = 1; i < OldS.length(); i++)
	{
		if (OldS[i]==' ')
		{
			NewS[i+1] = tolower(OldS[i+1]);
		}
	}
	return NewS;
}



int main() {
	string Name="yousef omar ibrahim Hirzallah";
	cout<<"Name Before change: "<<Name<<endl;
	Name=ToUpperString(Name);
	cout<<"Name After change: "<<Name<<endl;

	return 0;
}