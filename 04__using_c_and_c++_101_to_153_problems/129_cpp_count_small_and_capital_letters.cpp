#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
  string input;
  cout<<"Enter a string: ";
 getline(cin, input);

  return input;
}

bool IsUppercase(char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}


bool IsLowercase(char ch)
{
      return (ch >= 'a' && ch <= 'z');
}

short CountUppercase(string String)
{
  int Counter = 0;
  for(int i = 0; i < String.length(); i++)
    {
    if(IsUppercase(String[i]))
      Counter++;
    }
  return Counter;
}

short CountLowercase(string String)
{
  int Counter = 0;
  for(int i = 0; i < String.length(); i++)
  {
    if(IsLowercase(String[i]))
      Counter++;
  }
  return Counter;
}


  int main()
 {
    string input=ReadString();

    short UpperCount=CountUppercase(input);
    short LowerCount=CountLowercase(input);
    cout<<"Uppercase: "<<UpperCount<<endl;
    cout<<"Lowercase: "<<LowerCount<<endl;
    return 0;
 }
