//
// Created by BRIAN ABBOTT on 1/22/24.
//



#ifndef DOUBLELINKEDLISTOPERATIONS_H
#define DOUBLELINKEDLISTOPERATIONS_H

#include "data_structures/lists/linked_lists/doubly_linked_list/DoubleLinkedList.h"

DoubleLinkedList* ReverseDoubleList(DoubleLinkedList* list) {
    DoubleLinkedList* reverse_list = InitDoubleLinkedList();
    int ii = list->size - 1;
    while (ii >= 0) {
        DoubleNode* n = FindDoubleNodeByIndex(list, ii--);
        InsertNode(reversed_list, n);
    }
    return reversed_list;
}


char* DoubleLinkedListToString(DoubleLinkedList* list) {
    return "";
}
#endif //DOUBLELINKEDLISTOPERATIONS_H
