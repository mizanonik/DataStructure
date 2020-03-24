#include <iostream>

using namespace std;

int main(){

    string str;
    string pattern;
    int occurance;
    bool flag = false;
    int index = 0;

    cout << "Enter your string: ";
    cin >> str;

    cout << "Enter your pattern: ";
    cin >> pattern;

    for(int i = 0; i<str.length(); i++){
        if(str[i] == pattern [0]){
            int loopCount = pattern.length();
            int indexOfPattern = 0;
            int indexOfStr = i;
            occurance = 0;
            while(true){
                if(str[indexOfStr] == pattern[indexOfPattern]){
                    occurance ++;
                }
                else{
                    break;
                }
                loopCount--;
                indexOfPattern++;
                indexOfStr++;
            }
        }
        if(occurance == pattern.length()){
            flag = true;
            index = i;
            break;
        }
    }

    if(flag){
        cout << "Pattern found at index: " << index << endl;
    }
    else{
        cout << "pattern not found";
    }

    return 0;
}
