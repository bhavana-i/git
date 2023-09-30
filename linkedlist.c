#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node* insertfront(struct node *front, int val) {
	struct node *temp = malloc(sizeof(struct node));
	temp->data = val;
	temp->next = front;
	front = temp;
	return front;
}

void display(struct node *front) {
	struct node *t = front;
	while(t != NULL) {
		printf("%d ", t->data);
		t = t->next;
	}
}

int main() {
	int choice, val;
	struct node *head = NULL;
	for(;;) {
		printf("Enter the choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1: printf("Enter the value: ");
				scanf("%d", &val);
				head = insertfront(head, val);
				break;
			case 2: display(head);
				break;
		}
	}
	return 0;
}






