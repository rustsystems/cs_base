//
// Created by BRIAN ABBOTT on 1/13/24.
//
#include <stdio.h>
#include <stdlib.h>

#include <check.h>
#include "data_structures/lists/linked_lists/singly_linked_list/LinkedList.h"


// LinkedList* InitLinkedList()
// void DestroyLinkedList(LinkedList* list)
START_TEST (check_sll_linkedlist_init_and_destroy)
{
    LinkedList* ll = InitLinkedList();

    ck_assert(ll != NULL);
    ck_assert(ll->size == 0);

    int val = 22;
    InsertItem(ll, &val);
    ck_assert(ll->size == 1);

    int up = (int)*(int*)ll->head->item;
    printf("%d\n", up);
    ck_assert(up == 22);

    ll = DestroyLinkedList(ll);
    ck_assert(ll == NULL);
}
END_TEST

// Node* InitNode() {
// void DestroyNode(Node* node)
START_TEST(check_sll_node_init_and_destroy)
{
    Node* node = InitNode();
    ck_assert(node != NULL);

    node = DestroyNode(node);
    ck_assert(node == NULL);
}

// void InsertNode(LinkedList* list, Node* list_node)
START_TEST (check_sll_insert_node)
{
    LinkedList* ll = InitLinkedList();
    Node* n = InitNode();
    int val = 1234;
    n->item = &val;
    InsertNode(ll, n);

    ck_assert(ll->size == 1);
    ck_assert((int)*((int*)ll->head->item) == 1234);

    ll = DestroyLinkedList(ll);
}
END_TEST

// void InsertItem(LinkedList* list, void* item)
START_TEST (check_sll_insert_item)
{
    LinkedList* ll = InitLinkedList();
    int val = 1234;
    InsertItem(ll, &val);

    ck_assert(ll->size == 1);
    ck_assert((int)*((int*)ll->head->item) == 1234);

    ll = DestroyLinkedList(ll);
}
END_TEST

// void RemoveNode(LinkedList* list, Node* node)
START_TEST (check_sll_remove_node)
{
    LinkedList* ll = InitLinkedList();
    Node* n = InitNode();
    int val = 1234;
    n->item = &val;
    InsertNode(ll, n);

    ck_assert(ll->size == 1);
    ck_assert((int)*((int*)ll->head->item) == 1234);

    RemoveNode(ll, n);
    ck_assert(ll->size == 0);
}
END_TEST

// Node* FindNodeById(LinkedList* list, int id)
START_TEST (check_sll_node_by_id)
{
    LinkedList* ll = InitLinkedList();
    Node* n = InitNode();
    int val = 1234;
    n->item = &val;
    InsertNode(ll, n);
    const Node* found_node = FindNodeById(ll, n->id->id);

    ck_assert((int)*((int*)found_node->item) == val);
    ck_assert(found_node->id->id == n->id->id);
    ck_assert(found_node->id->global_id == n->id->global_id);
}
END_TEST


// Node* FindNodeByItem(LinkedList* list, void* item)
START_TEST (check_sll_node_by_item)
{
    LinkedList* ll = InitLinkedList();
    Node* n = InitNode();
    int val = 1234;
    n->item = &val;
    InsertNode(ll, n);

    const Node* found_node = FindNodeByItem(ll, &val);

    ck_assert((int)*((int*)found_node->item) == val);
    ck_assert(found_node->id->id == n->id->id);
    ck_assert(found_node->id->global_id == n->id->global_id);
}


// Node* FindNodeByIndex(LinkedList* list, int index)
START_TEST (check_sll_node_by_index)
{
    LinkedList* ll = InitLinkedList();
    Node* n = InitNode();
    int val = 1234;
    n->item = &val;
    InsertNode(ll, n);

    Node* nn = InitNode();
    int val_1 = 2345;
    nn->item = &val_1;
    InsertNode(ll, nn);

    Node* nnn = InitNode();
    int val_2 = 3456;
    nnn->item = &val_2;
    InsertNode(ll, nnn);

    const Node* found_node = FindNodeByIndex(ll, 2);
    const int item_val = *((int*)found_node->item);

    ck_assert(found_node != NULL);
    ck_assert(item_val == val_2);

    printf("%d\n", item_val);
}


// Node* FindTailNode(LinkedList* list)
// LinkedList* ReverseList(LinkedList* list)
// char* LinkedListToString(LinkedList* list)
