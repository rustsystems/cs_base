//
// Created by BRIAN ABBOTT on 1/13/24.
//

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H


typedef struct DoubleNode {
    int id;
    void* item;
    struct DoubleNode* prev;
    struct DoubleNode* next;
} DoubleNode;


typedef struct DoubleLinkedList {
    DoubleNode* head;
    DoubleNode* tail;
    int size;
} DoubleLinkedList;

DoubleLinkedList* InitDoubleLinkedList();
void InsertDoubleNode(DoubleLinkedList* list, DoubleNode* list_node);
void InsertDoubleItem(DoubleLinkedList* list, void* item);
void InsertDoubleItem(DoubleLinkedList* list, void* item);
void RemoveDoubleNode(DoubleLinkedList* list, DoubleNode* node);
DoubleNode* FindDoubleNodeById(DoubleLinkedList* list, int id);
DoubleNode* FindDoubleNodeByIndex(DoubleLinkedList* list, int index);
DoubleNode* FindDoubleTailNode(DoubleLinkedList* list);


DoubleLinkedList* InitDoubleLinkedList() {
    DoubleLinkedList* dll = malloc(sizeof(DoubleLinkedList));
    dll->size = 0;
    return dll;
}

void InsertDoubleNode(DoubleLinkedList* list, DoubleNode* list_node) {
    DoubleNode* tail_node = FindDoubleTailNode(list);
    tail_node->next = list_node;
    list_node->prev = tail_node;
    list->size += 1;
}

void InsertDoubleItem(DoubleLinkedList* list, void* item) {
    DoubleNode* node = malloc(sizeof(DoubleNode));
    node->item = item;
    InsertDoubleNode(list, node);
}

void RemoveDoubleNode(DoubleLinkedList* list, DoubleNode* node) {
    DoubleNode* n = list->head;
    while (n->next != NULL) {
        if (n->next == node) {
            n->next = n->next->next;
            n->next->next->prev = n->next;
            list->size -= 1;
        }
    }
}

DoubleNode* FindDoubleNodeById(DoubleLinkedList* list, int id) {
    DoubleNode* n = list->head;
    while (n->next != NULL) {
        if (n->id == id) {
            return n;
        }
        n = n->next;
    }
    return NULL;
}

DoubleNode* FindDoubleNodeByItem(DoubleLinkedList* list, void* item) {
    DoubleNode* n = list->head;
    while (n->next != NULL) {
        if (n->item == item) {
            return n;
        }
        n = n->next;
    }
    return NULL;
}


DoubleNode* FindDoubleNodeByIndex(DoubleLinkedList* list, int index) {
    Node* n = list->head;
    int i = 0;
    do {
        if (index == i++) {
            return n;
        }
        if (n->next != NULL)
            n = n->next;
    } while (n->next != NULL);
    return NULL;
}


DoubleNode* FindDoubleTailNode(DoubleLinkedList* list) {
    DoubleNode* n = list->head;
    while (n->next != null) {
        n = n->next;
    }
    return n;
}

#endif //DOUBLYLINKEDLIST_H
