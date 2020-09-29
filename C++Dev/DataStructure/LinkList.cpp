#include <iostream>
#include <stdlib.h>

using namespace std;

//Create Struct with variable for data and pointer for next node
struct node{
	int data;
	node *next;
};

// Create three pointers for head, newNode and temp
struct node *head; // store head address
struct node *newNode; // newly created node address
struct node *temp; // store prevous node address temporary

void createNodeStart(){

	int val;
	cout << "Enter Value to Store in List: ";
	cin >> val;

	newNode = (struct node*) malloc(sizeof(struct node*));

	newNode->data = val;
	newNode->next = 0;

	if(head == 0){
		head = newNode;
		temp = newNode;
		cout << endl;
		cout << "Value " << val << " is added to the begining of the list" << endl;
		cout << endl;
	}else{
		newNode->next = head;
		head = newNode;
		cout << endl;
		cout << "Value " << val << " is added to the begining of the list" << endl;
		cout << endl;
	}
}

void createNodeEnd(){
	int val;
	cout << "Enter Value to Store in List: ";
	cin >> val;

	newNode = (struct node*) malloc(sizeof(struct node*));

	newNode->data = val;
	newNode->next = 0;

	if(head == 0){
		head = newNode;
		temp = newNode;
		cout << endl;
		cout << "Value " << val << " is added to the end of the list" << endl;
		cout << endl;
	}else{
		temp = head;

		while(temp->next != 0) {
		    temp = temp->next;
		}
		temp->next = newNode;
		cout << endl;
		cout << "Value " << val << " is added to the end of the list" << endl;
		cout << endl;
	}
}

int countListItems(){

	int count = 0; // for store number of counts
	struct node *temp; // temp node for counting

	temp = head; // assign head becourse we need to start in head position

	while(temp != 0){
		// count = count + 1
		count++;
		// Assign next node address which store in current temp temp pointer next pointer part. 
		temp = temp->next; 
	}
	cout << "Number of Elemets: " << count << endl; // Print number of elements
	return count;
}

void createNodeMiddle(){
	int val, pos, count, i=1;
	cout << endl;
	cout << "Enter Value to add List: ";
	cout << endl;
	cin >> val;
	cout << endl;
	cout << "Enter Position You want to add value: ";
	cout << endl;
	cin >> pos;
	count = countListItems();

	if(count < pos){
		cout << endl;
		cout << "Position is Invalid" << endl;
		cout << endl;
	}else {

		newNode = (struct node*) malloc(sizeof(struct node*));

		newNode->data = val;
		newNode->next = 0;

		temp = head;

		while(i < pos) {
			temp = temp->next;
			i++;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		cout << endl;
		cout << "Value " << val << " is added to the middle of the list" << endl;
		cout << endl;


	}
}

void deleteFromStart(){
	if(head == 0){
		cout << endl;
		cout << "There is nothing to Delete" << endl;
		cout << endl;
	}else{
		struct node* temp;
		temp = head;
		head = temp->next;
		free(temp);
		cout << endl;
		cout << "First Element Deleted from List" << endl;
		cout << endl;

	}
}

void deleteFromEnd(){
	
	struct node *temp, *prev;

	temp = head;

	while(temp->next != 0){
		prev = temp;
		temp = temp->next;
	}

	if(head == temp){
		head = 0;
		free(temp);
		cout << endl;
		cout << "One Elemen Deleted from List & List is now Empty" << endl;
		cout << endl;
	}else{
		prev->next = 0;
		free(temp);
		cout << endl;
		cout << "One Elemen Deleted from List" << endl;
		cout << endl;
	}


}

void deleteFromMiddle(){

	int pos, i = 1;
	cout << "Enter Position: ";
	cin >> pos;

	struct node *temp, *nextnode;

	temp = head;

	while(i < pos - 1){
		temp = temp->next;
		i++;
	}

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	cout << endl;
	cout << "Selected Value Deleted from List" << endl;
	cout << endl;

}

void reverseList(){

	struct node *currentNode, *nextNode, *prevNode;

	prevNode = 0;

	currentNode = nextNode = head;

	while(nextNode != 0){
		nextNode = nextNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	head = prevNode;
	cout << endl;
	cout << "List is Reversed" << endl;
	cout << endl;

}


void printList(){

	int i = 1;
	struct node *temp;

	temp = head;

	cout << endl;
	while(temp != 0){
		cout << i++ << " Data: " << temp->data << " Pointer Value: " << temp->next << endl;
		temp = temp->next;
	}
	cout << endl;
}


int main(){

	int opt;
	

	do{
		cout << "Link List by LalanthaM\n\n 1: createNodeStart\n 2: createNodeEnd\n 3: createNodeMiddle\n 4: deleteFromStart\n 5: deleteFromEnd\n 6: deleteFromMiddle\n 7: reverseList\n 8: printList\n 9: countListItems\n" << endl;
		cout << endl;
		cout << "Enter Option Number: ";
		cin >> opt;
		cout << endl;

		switch(opt){
			case 1:
				createNodeStart();
				break;

			case 2:
				createNodeEnd();
				break;

			case 3:
				createNodeMiddle();
				break;

			case 4:
				deleteFromStart();
				break;
			
			case 5:
				deleteFromEnd();
				break;

			case 6:
				deleteFromMiddle();
				break;

			case 7:
				reverseList();
				break;

			case 8:
				printList();
				break;

			case 9:
				countListItems();
				break;

			default:
				cout << "Invalid Operations" << endl;
				break;
			
		}
	}while(opt != 0);

	return 0;
}