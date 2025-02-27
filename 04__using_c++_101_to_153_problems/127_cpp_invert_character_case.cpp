#include <iostream>
#include <vector>

using namespace std;

void InvertChar(char &Old) {
	if (Old >= 97 && Old <= 122) {
		Old = Old - 32;
	}
	else if (Old >= 65 && Old <= 90) {
		Old = Old + 32;
	}

}


int main() {
	char Old='c';
	InvertChar(Old);
cout<<Old<<endl;

	InvertChar(Old);
cout<<Old<<endl;
	return 0;
}