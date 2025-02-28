
#include <iostream>
#include <vector>

using namespace std;

vector <char> FirstLetterOfEachWord(string sentence){
    vector <char> LetterOfEachWord;
    LetterOfEachWord.push_back(sentence[0]);
    for (short i = 1; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            LetterOfEachWord.push_back(sentence[i+1]);
        }
    }
    return LetterOfEachWord;
}




int main() {
    vector <char> LetterOfEachWord=FirstLetterOfEachWord("Yousef Omar Ibrahim Hirzallah");

    for (short i = 0; i < LetterOfEachWord.size(); i++) {
        cout << LetterOfEachWord[i]<<"\t";
    }
    return 0;
}
