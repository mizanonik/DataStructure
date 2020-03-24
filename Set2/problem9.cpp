#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    string inputString;
    string newText;
    int position;


    cout << "Insert the text: " << endl;
    getline(cin,text);

    cout << "Insert your string: " << endl;
    cin >> inputString;

    cout << "Enter the position: " << endl;
    cin >> position;


    string part1 = text.substr(0, position);
    string part2 = text.substr(position);

    newText+=part1;
    newText+=inputString;
    newText+=part2;

    cout << newText;

    return 0;
}
