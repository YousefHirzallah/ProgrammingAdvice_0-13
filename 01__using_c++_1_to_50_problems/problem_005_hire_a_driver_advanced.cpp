#include <iostream>
#include<string>

using namespace std;

bool CheckRequirements(int Age,bool HasLicense,bool Recommended){
	return ((Age>=21&&HasLicense)||Recommended);
}
int main() {
	int Age;
	bool HasLicense,Recommended;

	cout<<"Enter you age?"<<endl;
	cin>>Age;
	cout<<"Do you have a license?(0=No,1=Yes)"<<endl;
	cin>>HasLicense;

	if(CheckRequirements(Age,HasLicense,Recommended))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}