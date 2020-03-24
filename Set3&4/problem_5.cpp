#include <iostream>

using namespace std;
int myQueue[10];
int frontOfQueue = -1;
int rearOfQueue = -1;

void enqueue(int number){
    if(frontOfQueue == -1){
        frontOfQueue = 0;
        rearOfQueue = 0;
    }
    myQueue[rearOfQueue] = number;
    rearOfQueue = (rearOfQueue+1) % 10;
}

int dequeue(){
    if(frontOfQueue == -1 ){
        return -1;
    }
    int item = myQueue[frontOfQueue];
    frontOfQueue = (frontOfQueue+1) % 10;
    if(frontOfQueue == rearOfQueue){
        frontOfQueue = -1;
        rearOfQueue = -1;
    }
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
                int number;
                cout << "Enter the number you want to enqueue: ";
                cin >> number;
                enqueue(number);
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
