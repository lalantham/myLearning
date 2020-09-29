#include <iostream>

using namespace std;

int top = -1;
int stack[5];

void push(){

    int val;
    cout << "Enter Value to Stack: ";
    cin >> val;

    if(top == 4){
        cout << "Stack is Full" << endl;
    }else {
        top++;
        stack[top] = val;
        cout << "Value " << val << " is Pushed" << endl;
    }
}

void pop(){
    int x;
    if(top == -1){
        cout << "Stack is Empty" << endl;
    }else{
        x = stack[top];
        stack[top] = 0;
        top--;
        cout << "Value " << x << " is Poped out " << endl;
    }
}

void peek(){
    if(top == -1){
        cout << "Stack is Empty" << endl;
    }else{
        cout << "Top Value is " << stack[top] << endl;
    }

}

void display(){
    for(int i = 0; i < 5; i++){
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main(){

    int opt;

    do{

        cout << "1: Push, 2: Pop, 3: Peek 4: Display" << endl;
        cout << "Enter Option Number: ";
        cin >> opt;

        switch(opt){
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;
        }


    }while(opt!=0);


    return 0;
}