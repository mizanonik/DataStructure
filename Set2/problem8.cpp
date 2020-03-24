#include <iostream>
using namespace std;

main(){
    string s, s1, s2;

    cout << "--------Finding length of a string--------" << endl;
    cout << "Enter a string: ";
    getline(cin, s);

    int strLength = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] != ' '){
            strLength++;
        }
    }

    cout << "Length of a string: "<< strLength << endl;

    cout << "----------Copy string-----------" << endl;
    cout << "Enter string S1: ";
    getline(cin, s1);

    for(int i = 0; i<s1.length(); i++){
        s2 += s1[i];
    }

    cout << "Input string: "<< s1 << endl;
    cout << "Copied String: " << s2 << endl;

    cout << "----------Concatenate two strings-----------" << endl;
    s1+=s2;

    cout << "String after concatenation : " << s1 << endl;

    cout << "--------Compare two string--------" << endl;
    cout << "Enter string S1: ";
    getline(cin, s1);

    cout << "Enter string S2: ";
    getline(cin, s2);

    int isSimilar = true;
    if(s1.length() != s2.length()){
        isSimilar = false;
    }
    else{
        for(int i = 0; i<s1.length(); i++){
            if(s1[i]!=s2[i]){
                isSimilar = false;
            }
        }
    }

    if(isSimilar){
        cout << "Both strings are same" << endl;
    }
    else{
        cout << "Strings are not same" << endl;
    }

    cout << "--------Reverse a string----------" << endl;
    cout << "Enter a string: ";
    getline(cin, s);
    string reversedString = "";
    for(int i = s.length()-1; i>=0; i--){
        reversedString+=s[i];
    }

    cout << "Reversed string: " << reversedString;
}
