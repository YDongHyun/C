#include <stdio.h>
#include <stdlib.h>
struct LinkedList {
int data;
struct LinkedList* next;
};
typedef struct stackNode {
int data;
struct stackNode* link;
} stackNode;
stackNode* top = NULL;
struct LinkedList* head = NULL;
struct LinkedList* end = NULL;
void LL_insert_node_last(int data, struct LinkedList** head)
{
struct LinkedList* p;
p = (struct LinkedList*)malloc(sizeof(struct LinkedList));
p->data = data;
p->next = NULL;
if (*head == NULL)
*head = end = p;
else {
end->next = p;
end = p;
}
}
void LL_display(struct LinkedList* head)
{
struct LinkedList* p;
p = head;
printf("List after insert oprations: ");
while (p != NULL) {
printf("%d ", p->data);
p = p->next;
}
printf("\n");
}
int isEmpty() {
if (top == NULL) {
return 1;
}
else {
return 0;
}
}
void push(int data) {
stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
temp->data = data;
temp->link = top;
top = temp;
}
int pop() {
int item;
stackNode* temp = top;
if (isEmpty() == 1) {
return 0;
}
else {
item = temp->data;
top = temp->link;
free(temp);
return item;
}
}
int main(void)
{
int i;
for (i = 0; i < 10; i++) {
LL_insert_node_last(i, &head);
push(i);
}
LL_display(head);
printf("Reversed: ");
for (int j = 0; j < 10; j++) {
printf("%d ", pop());
}
return 0;
}
