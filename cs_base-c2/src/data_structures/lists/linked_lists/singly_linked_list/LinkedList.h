

#include <stdlib.h>
#include "utils/IDGenerator.h"

typedef struct Node {
    ObjectID* id;
    void* item;
    struct Node* next;
} Node;


typedef struct LinkedList {
    ObjectID* id;
    Node* head;
    int size;
} LinkedList;


Node* FindTailNode(const LinkedList* list);


Node* InitNode() {
    Node* node = malloc(sizeof(Node));
    node->id = GenerateObjectID();
    return node;
}

LinkedList* InitLinkedList() {
    LinkedList* ll = malloc(sizeof(LinkedList));
    ll->id = GenerateObjectID();
    ll->size = 0;
    return ll;
}

void DestroyNode(Node* node) {
    printf("DestroyNode\n");

    if(node == NULL)
        return;

    free(node->item);
    free(node);
}

void DestroyLinkedList(LinkedList* list) {
    Node* nodes[list->size - 1];
    Node* n = list->head;
    int i = 0;
    nodes[i] = n;
    while (n->next != NULL) {
        i += 1;
        nodes[i] = n->next;
        n = n->next;
    }

    for (int ii = 0; ii < list->size; ii++) {
        DestroyNode(nodes[ii]);
    }

    free(list);
}

void InsertNode(LinkedList* list, Node* list_node) {
    Node* tail_node = FindTailNode(list);
    if (tail_node == NULL) {
        list->head = list_node;
        list->size +=1;
    } else {
        tail_node->next = list_node;
        list->size += 1;
    }
}


void InsertItem(LinkedList* list, void* item) {
    Node* node = InitNode();
    node->item = item;
    InsertNode(list, node);
}


void RemoveNode(LinkedList* list, Node* node) {
    if(list == NULL || node == NULL)
        return;

    Node* n = list->head;
    while (n->next != NULL) {
        if (n->next == node) {
            n->next = n->next->next;
            list->size -= 1;
        }
    }
    DestroyNode(node);
}


Node* FindNodeById(const LinkedList* list, const int id) {
    Node* n = list->head;
    while (n->next != NULL) {
        if (n->id->id == id) {
            return n;
        }
        n = n->next;
    }
    return NULL;
}


Node* FindNodeByItem(const LinkedList* list, const void* item) {
    Node* n = list->head;
    while (n->next != NULL) {
        if (n->item == item) {
            return n;
        }
        n = n->next;
    }
    return NULL;
}


Node* FindNodeByIndex(const LinkedList* list, const int index) {
    Node* n = list->head;
    int i = 0;
    while (n->next != NULL) {
        if (index == i++) {
            return n;
        }
        n = n->next;
    }
    return NULL;
}


Node* FindTailNode(const LinkedList* list) {
    if (list == NULL || list->head == NULL) {
        return NULL;
    } else {
        Node* n = list->head;
        while (n->next != NULL) {
            n = n->next;
        }
        return n;
    }
}


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
    node->item;
    sprintf("(Node: {id: %s, item: %s})", objectid_str, );
}
