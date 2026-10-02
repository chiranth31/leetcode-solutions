#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* createNode(int value) {
    struct ListNode* newNode =
        (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* next = current->next;

        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL) {
            printf(" ");
        }

        head = head->next;
    }

    printf("\n");
}

void freeList(struct ListNode* head) {
    while (head != NULL) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {

    // Test Case 1
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    head1 = reverseList(head1);

    printf("Test Case 1: ");
    printList(head1);

    freeList(head1);

    // Test Case 2
    struct ListNode* head2 = createNode(1);
    head2->next = createNode(2);

    head2 = reverseList(head2);

    printf("Test Case 2: ");
    printList(head2);

    freeList(head2);

    // Test Case 3 - Empty list
    struct ListNode* head3 = NULL;

    head3 = reverseList(head3);

    printf("Test Case 3: ");
    printList(head3);

    return 0;
}