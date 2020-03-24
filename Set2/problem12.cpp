#include <iostream>
#include <map>

using namespace std;

int main(){

    string text;
    map<char, int> characterList;
    map<char, int>::iterator it;

    cout << "Enter your text: ";
    getline(cin, text);
    char c;
    int currentCount;

    for(int i = 0 ; i < text.length(); i++){
        bool available = false;
        for( it = characterList.begin(); it != characterList.end(); it++ ){
            if(it->first == text[i]){
                available = true;
                c = it->first;
                currentCount = it->second;
            }
            else{
                c = text[i];
            }
        }
        if(available){
            characterList[c] = currentCount+1;
        }
        else{
            characterList[text[i]] = 1;
        }

    }

    for( it = characterList.begin(); it != characterList.end(); it++ ){
        cout << it->first << "----" << it->second << endl;
    }

    return 0;
}
