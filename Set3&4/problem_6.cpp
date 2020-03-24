#include <iostream>
#include <map>

using namespace std;

map<int, int> queueMap;

void enqueue(int number, int priority){
    queueMap[priority] = number;
}

int dequeue(){
    if(queueMap.size() == 0){
        return -1;
    }
    int itemNo = 0;
    map<int, int>::iterator it;
    for ( it = queueMap.begin(); it != queueMap.end(); it++ )
    {
        if(it->first > itemNo){
            itemNo = it->first;
        }
    }
    int item = queueMap[itemNo];
    queueMap.erase(itemNo);
    return item;
}

int main(){
    int choice;
    do{
    cout << "1) press 1 to Enqueue: " << endl;
    cout << "2) press 2 to Dequeue: " << endl;
    cout << "3) press any other key to exit: " << endl;

    cin >> choice;
        switch(choice){
            case 1:{
                int numberElement;
                int priority;

                cout << "Enter the number element: ";
                cin >> numberElement;

                cout << "Enter priority of that element: ";
                cin >> priority;
                enqueue(numberElement, priority);
                break;
            }
            case 2:{
                int result = dequeue();
                if(result == - 1){
                    cout << "Queue is empty." << endl;
                }
                else{
                    cout << "The number you dequeued: " << result << endl;
                }
                break;
            }
        }
    }while(choice == 1 || choice == 2);

    return 0;
}
