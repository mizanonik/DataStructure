#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    string inputStringToDelete;
    string newText;
    int position;


    cout << "Insert the text: ";
    getline(cin, text);

    cout << "Insert your string to delete: ";
    cin >> inputStringToDelete;

    cout << "Enter the starting position of the string: ";
    cin >> position;

    string part1 = text.substr(0, position);
    string deletedPart = text.substr(position, inputStringToDelete.length());
    string part2 = text.substr(position+inputStringToDelete.length());

    newText+=part1;
    newText+=part2;

    cout << "String to be deleted: ";
    cout << deletedPart << endl;

    cout << "Text after deleting the string: ";
    cout << newText << endl;

    return 0;
}
