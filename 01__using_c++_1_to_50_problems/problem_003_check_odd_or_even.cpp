#include <iostream>
#include<string>

using namespace std;

bool IsEven(int Number){
  if(Number%2==0)
    return true;
 else
   return false;
}
int main() {
    if(IsEven(10))
      cout<<"Number is Even"<<endl;
    else
      cout<<"Number is Odd"<<endl;

    return 0;
}