#include<iostream>
#include<conio.h>
using namespace std;
            //Simple Queue using linked List
struct node
{
    int data;
    struct node *next;
    
};
struct node *front = 0;
struct node *rear = 0;

void enQueue(int value){
    node *newNode = new node;
    newNode->data = value;
    newNode->next = 0;

    if(front == 0 && rear == 0){
        front = rear = newNode;
        cout << "\n\n" << newNode->data << " has been enqueued\n\n";
    }else {
        rear->next = newNode;
        rear = newNode;
        cout << "\n\n" << newNode->data << " has been enqueued\n\n";
    }
}

void deQueue(){
    node *temp;
    temp = front;
    if(front == 0 && rear == 0){
        cout << "\nQueue is Empty...!\n";
    }else {
        cout << '\n' << front->data << " has been dequeued";
        front = front->next;
        free(temp);
    }

}

void peek(){
    if(front == 0 && rear == 0){
        cout << "\nQueue is Empty...!\n";
    }else {
        cout << "\nFront Data is : " << front->data ;
    }
}

void display(){
    node *temp;
    if(front == 0 && rear == 0){
        cout << "\nQueue is Empty....!\n";
    }else{
        temp = front;
        while (temp != 0)
        {
            cout << temp->data << '\t';
            temp = temp->next;
        }
        
    }
}



int main(){


    int ch, num;
    A:
    cout << "\n\t\t(1) >> Insert the Element in Queue\n";
    cout << "\t\t(2) >> Delete the Element From Queue\n";
    cout << "\t\t(3) >> Display the Queue\n";
    cout << "\t\t(4) >> Peek Funtion\n";
    cout << "\t\t(5) >> Exit\n";

        cout << "\nEnter your Choice : ";
        cin >> ch;
        switch(ch){
            case 1:
                cout << "\nEnter the Element : ";
                cin >> num;
                enQueue(num);
                cout << '\n' ;
                system("pause");
                system("cls");
                goto A;
            break;
            case 2:
                deQueue();
                cout << '\n' ;
                system("pause");
                system("cls");
                goto A;
            break;
            case 3:
                display();
                cout << '\n' ;
                system("pause");
                system("cls");
                goto A;
            break;
            case 4:
                peek();
                cout << '\n' ;
                system("pause");
                system("cls");
                goto A;
            break;
            case 5:
                exit(0);
            break;
            default:
                cout << "\nChoose the correct Option...!";
        }

    getch();
    return(0);

}
