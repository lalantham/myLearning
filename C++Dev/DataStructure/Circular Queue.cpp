#include <iostream>

using namespace std;

class Queue{
    int front;
    int rear;
    int queue[5];
    int c;

public:
    Queue(){
        front = -1;
        rear = -1;
        c = 0;
        for(int i = 0; i < 5; i++){
            queue[i] = 0;
        }
    }

    void enQueue(){

        int val;
        cout << "Enter Value to Queue: ";
        cin >> val;

        if((rear+1) % 5 == front){
            cout  << "Queue is Full" << endl;
        }else if(front == -1 && rear == -1){
            front++;
            rear++;
            queue[rear] = val;
            c++;
            cout << "Value " << val << " is Added to the " << rear << " Position" << endl;
        }else{
            rear = (rear+1) % 5;
            queue[rear] = val;
            c++;
            cout << "Value " << val << " is Added to the " << rear << " Position" << endl;
        }
    }

    void deQueue(){
        int x;
        if(front == -1 && rear == -1){
            cout << "Queue is Empty" << endl;
        }else if(front == rear){
            x = queue[front];
            queue[front] = 0;
            front = -1;
            rear = -1;
            c--;
            cout << "Value " << x << " is Removed from the Queue and Queue is now Empty" << endl;
        }else{
            x = queue[front];
            queue[front] = 0;
            front = (front+1) % 5;
            c--;
            cout << "Value " << x << " is Removed from the Queue" << endl;
        }
    }

    void display(){
        for(int i = 0; i < 5; i++){
            cout << queue[i] << " ";
        }
        cout << endl;
    }

    void count(){
        if(front == -1 && rear == -1){
            cout << "Queue is Empty" << endl;
        }else{
            cout << "There are " << c << " Number os Vales in the Queue" << endl;
        }
    }

};


int main(){

    Queue q1;

    int opt;

    do{
        cout << "1: enQueue, 2: deQueue, 3: Display, 4: Count" << endl;
        cout << "Enter Option Number: " << endl;
        cin >> opt;

        switch(opt){
            case 1:
                q1.enQueue();
                break;

            case 2:
                q1.deQueue();
                break;

            case 3:
                q1.display();
                break;

            case 4:
                q1.count();
                break;

            default:
                cout << "Invalid Option Number" << endl;
                break;
        }

    }while(opt != 0);

    return 0;
}