#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ڱ���������ü
typedef struct person {
	char name[20];
	int age;
} Person;

typedef struct node{
	int num;
	Person* p;
	struct node* next;
} Node;

int main01() {
	Node a = { 1,0,0 };
	Node b = { 3,0,0 };
	Node c = { 5,0,0 };

	a.p = (Person*)malloc(sizeof(Person));
	b.p = (Person*)malloc(sizeof(Person));
	c.p = (Person*)malloc(sizeof(Person));
	strcpy(a.p->name, "�Ѹ�");
	a.p->age = 7;
	strcpy(b.p->name, "��ġ");
	b.p->age = 8;
	strcpy(c.p->name, "�����");
	c.p->age = 9;

	Node* head = &a;
	a.next = &b;
	b.next = &c;
	printf("%d %d\n", head->num, head->next->num);

	Node* curr = head;
	while (curr != NULL) {
		printf("num: %d, name: %s, age: %d\n", curr->num, curr->p->name, curr->p->age);
		curr = curr->next;
	}
	return 0;
}