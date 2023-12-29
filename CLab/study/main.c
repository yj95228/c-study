#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: head/tail -> 전역 변수 바꾸기
typedef struct nodeList {
	Node* head;
	Node* tail;
};
typedef struct node {
	struct node* prev;
	struct node* next;
	int data;
} Node;

Node* head;
Node* tail;

void appendFirst(int newData) {
	Node* newNode = (Node*) malloc(sizeof(Node));
	newNode->prev = NULL;
	newNode->next = head;
	newNode->data = newData;
	head->prev = newNode;
	head = newNode;
}

void appendLast(int newData) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->prev = tail;
	newNode->data = newData;
	tail->next = newNode;
	tail = newNode;
}

void append(int index, int newData) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (index < 0) return;
	else if (index == 0) appendFirst(newData);
	else if (index == getListLength(head)-1) appendLast(newData);
	else {
		Node* curr = head->next;
		// TODO: while문 바꾸기
		for (int i = 0; i < index; i++) {
			curr = curr->next;
			if (curr == NULL) return;
		}
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->prev = curr->prev;
		newNode->next = curr;
		curr->prev->next = newNode;
		curr->prev = newNode;
		newNode->data = newData;
	}
}

void showList(Node* list) {
	Node* curr = list->next;
	while (curr != NULL) {
		printf("%d\t", curr->data);
		curr = curr->next;
	}
	printf("\n");
}

int getListLength(Node* list) {
	int count = -1;
	Node* cur = list;
	while (cur != NULL) {
		cur = cur->next;
		count++;
	}
	return count;
}

// TODO: 구현하기
int deleteList(Node* list) {
	Node* curr = list->next;
	Node* next;
	while (curr != NULL) {
		list->next = curr->next;
		//next = curr->next;
		free(curr);
		curr = list->next;
	}
}

//TOOD
int searchList(Node* list, int data) {
	Node* curr = list;
	int count = 0;
	while (curr != NULL) {
		if (curr->data == data) {
			printf("find data %d at %d \n", curr->data, count);
			return count;
		}
		curr = curr->next;
		count++;
	}
}

int main() {
	printf("head 만들기\n");
	Node* list1 = malloc(sizeof(Node));
	list1->next = NULL;
	list1->prev = NULL;
	head = list1;
	tail = list1;
	list1->data = 0;

	printf("앞쪽에 노드 추가하기\n");
	for (int i = 1; i <= 3; i++) {
		appendFirst(i);
	}
	showList(head);

	printf("뒤쪽에 노드 추가하기\n");
	for (int i = 1; i <= 3; i++) {
		appendLast(i);
	}
	showList(head);

	append(3, 99);
	showList(head);

	return 0;
}