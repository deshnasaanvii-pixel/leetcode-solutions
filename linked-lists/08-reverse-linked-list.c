#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {

        struct ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}

void printList(struct ListNode* head) {

    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL) {
            printf(" -> ");
        }

        head = head->next;
    }

    printf("\n");
}

int main() {

    // Test Case 1
    struct ListNode n1 = {1, NULL};
    struct ListNode n2 = {2, NULL};
    struct ListNode n3 = {3, NULL};
    struct ListNode n4 = {4, NULL};

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    struct ListNode* head = &n1;

    head = reverseList(head);

    printf("Test Case 1: ");
    printList(head);

    // Test Case 2 - Edge Case
    struct ListNode n5 = {1, NULL};

    head = &n5;
    head = reverseList(head);

    printf("Test Case 2: ");
    printList(head);

    return 0;
}