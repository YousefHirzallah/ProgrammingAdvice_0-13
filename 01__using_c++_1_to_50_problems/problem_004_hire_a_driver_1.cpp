#include <iostream>
#include<string>

using namespace std;

bool CheckRequirements(int Age,bool HasLicense){
return (Age>=21&&HasLicense);
}
int main() {
  int Age;
  bool HasLicense;
 cout<<"Enter you age?"<<endl;
 cin>>Age;
 cout<<"Do you have a license?(0=No,1=Yes)"<<endl;
 cin>>HasLicense;

 if(CheckRequirements(Age,HasLicense))
    cout<<"Yes"<<endl;
 else
   cout<<"No"<<endl;
    return 0;
}