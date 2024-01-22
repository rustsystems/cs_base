//
// Created by BRIAN ABBOTT on 1/17/24.
//

#ifndef LINKEDLISTOPERATIONS_H
#define LINKEDLISTOPERATIONS_H

#include "data_structures/lists/linked_lists/singly_linked_list/LinkedList.h"

LinkedList* ReverseList(const LinkedList* list) {
    LinkedList* reversed_list = InitLinkedList();
    int ii = list->size - 1;
    while (ii >= 0) {
        Node* n = FindNodeByIndex(list, ii--);
        InsertNode(reversed_list, n);
    }
    return reversed_list;
}


char* LinkedListToString(const LinkedList* list) {
    char* list_str = malloc(list->size + 3);
    list_str[0] = '[';


    // Node* n = list->head;
    // while (n->next != NULL) {
    //     itoa()
    //     n = n->next;
    // }


    return "";
}

char* NodeToString(const Node* node) {
    char* str = "";
    char* objectid_str = ObjectIDToString(node->id);
    // node->item;
    // sprintf("(Node: {id: %s, item: %s})", objectid_str, );
    return objectid_str;
}

#endif //LINKEDLISTOPERATIONS_H
