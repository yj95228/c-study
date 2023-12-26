#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	struct node* next;
	int data;
} Node;


void appendFirst(Node* list, int newData) {
	Node* newNode = malloc(sizeof(Node));
	newNode->next = list->next;
	newNode->data = newData;
	list->next = newNode;
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

void insert(Node* list, int pos, int data) {
	// 현재 노드
	Node* curr = list;
	// 데이터를 담을 노드 만들기
	Node* newNode = malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	if (pos == 0) {
		newNode->next = list->next;
		list->next = newNode;
	}
	else {
		int count = 0;
		while (count != pos) {
			if (count == pos - 1) {
				newNode->next = curr->next;
				curr->next = newNode;
			}
			curr = curr->next;
			count++;
		}
	}
}

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

int main02() {
	printf("head 만들기\n");
	Node* list1 = malloc(sizeof(Node));
	list1->next = NULL;

	printf("앞쪽에 노드 추가하기\n");
	for (int i = 1; i <= 10; i++) {
		appendFirst(list1, i);
	}
	showList(list1);
	int length = getListLength(list1);
	printf("length = %d\n", length);

	// deleteList(list1);
	// showList(list1);

	insert(list1, 5, 99);
	showList(list1);

	searchList(list1, 99);
	return 0;
}