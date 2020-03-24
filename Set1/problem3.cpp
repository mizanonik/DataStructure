#include <iostream>
#include <List>
using namespace std;

main(){
    int noOfStudents = 0;
    list <int> numbersList;
    cout << "Enter the number of students: ";
    cin >> noOfStudents;

    for(int i=0; i<noOfStudents; i++){
        int mark = 0;
        cout << "Enter mark of student " << i+1 << " : ";
        cin >> mark;
        numbersList.push_back(mark);
    }
    list<int> :: iterator num;
    noOfStudents = 0;
    for(num = numbersList.begin(); num!=numbersList.end(); num++){
        if(*num>=40){
            noOfStudents++;
        }
    }

    cout << "No of passed students: " << noOfStudents;
}
