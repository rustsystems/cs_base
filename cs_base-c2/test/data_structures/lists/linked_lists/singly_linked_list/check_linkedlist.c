//
// Created by BRIAN ABBOTT on 1/13/24.
//
#include <stdio.h>
#include <stdlib.h>

#include <check.h>

#include "data_structures/lists/linked_lists/singly_linked_list/LinkedList.h"

// typedef struct Node {
//     int id;
//     void* item;
//     struct Node* next;
// } Node;


// typedef struct LinkedList {
//     Node* head;
//     int size;
// } LinkedList;



// LinkedList* InitLinkedList()
// void DestroyLinkedList(LinkedList* list)
START_TEST (check_linkedlist_init_and_destroy)
{
    LinkedList* ll = InitLinkedList();

    ck_assert(ll != NULL);
    ck_assert(ll->size == 0);

    int val = 22;
    InsertItem(ll, &val);
    ck_assert(ll->size == 1);

    // int up = (int)*(int*)ll->head->item;
    // ck_assert(up == 22);
    //
    // DestroyLinkedList(ll);
    // ck_assert(ll == NULL);
}
END_TEST



// Node* InitNode() {
// void DestroyNode(Node* node)
START_TEST(check_node_init_and_destroy)
{
    // Node* node = InitNode();
    // ck_assert(node != NULL);
    //
    // DestroyNode(node);
    // ck_assert(node == NULL);
}


// void InsertNode(LinkedList* list, Node* list_node)
START_TEST (check_insert_node)
{
    // LinkedList* ll = InitLinkedList();
    // Node* n = InitNode();
    // int* val = NULL;
    // *val = 1234;
    // n->item = val;
    // InsertNode(ll, n);
    //
    // ck_assert(ll->size == 1);
    // ck_assert((int)*((int*)ll->head->item) == 1234);
}
END_TEST



// void InsertItem(LinkedList* list, void* item)
START_TEST (check_insert_item)
{
    // LinkedList* ll = InitLinkedList();
    // int val = 1234;
    // InsertItem(ll, &val);
    //
    // ck_assert(ll->size == 1);
    // ck_assert((int)*((int*)ll->head->item) == 1234);
}
END_TEST



// void RemoveNode(LinkedList* list, Node* node)
START_TEST (check_remove_node)
{
    // LinkedList* ll = InitLinkedList();
    // Node* n = InitNode();
    // int val = 1234;
    // n->item = &val;
    // InsertNode(ll, n);
    //
    // ck_assert(ll->size == 1);
    // ck_assert((int)*((int*)ll->head->item) == 1234);
    //
    // RemoveNode(ll, n);
    // ck_assert(ll->size == 0);
}
END_TEST


// Node* FindNodeById(LinkedList* list, int id)
START_TEST (check_node_by_id)
{
    // LinkedList* ll = InitLinkedList();
    // Node* n = InitNode();
    // int val = 1234;
    // n->item = &val;
    // InsertNode(ll, n);
    // Node* found_node = FindNodeById(ll, n->id->id);
    //
    // ck_assert((int)*((int*)found_node->item) == val);
    // ck_assert(found_node->id->id == n->id->id);
    // ck_assert(found_node->id->global_id == n->id->global_id);
}
END_TEST


// Node* FindNodeByItem(LinkedList* list, void* item)
START_TEST (check_node_by_item)
{
    // LinkedList* ll = InitLinkedList();
    // Node* n = InitNode();
    // int val = 1234;
    // n->item = &val;
    // InsertNode(ll, n);
    //
    // Node* found_node = FindNodeByItem(ll, &val);
    //
    // ck_assert((int)*((int*)found_node->item) == val);
    // ck_assert(found_node->id->id == n->id->id);
    // ck_assert(found_node->id->global_id == n->id->global_id);
}


// Node* FindNodeByIndex(LinkedList* list, int index)
START_TEST (check_node_by_index)
{
    // LinkedList* ll = InitLinkedList();
    // Node* n = InitNode();
    // int val = 1234;
    // n->item = &val;
    // InsertNode(ll, n);
    //
    // Node* nn = InitNode();
    // int val_1 = 1234;
    // nn->item = &val;
    // InsertNode(ll, nn);
    //
    // Node* nnn = InitNode();
    // int val_2 = 1234;
    // nnn->item = &val;
    // InsertNode(ll, nnn);
    //
    // Node* found_node = FindNodeByIndex(ll, 2);
    // int item_val = *((int*)found_node->item);
    //
    // ck_assert(found_node != NULL);
    // ck_assert(item_val == 123);
    //
    // printf("%d\n", item_val);
}


// Node* FindTailNode(LinkedList* list)
// LinkedList* ReverseList(LinkedList* list)
// char* LinkedListToString(LinkedList* list)


void setup(void)
{
}


void teardown(void)
{
}


Suite * test_suite(void)
{
    Suite *s;
    TCase *tc_core;
    TCase *tc_limits;

    s = suite_create("CS_Base");
    tc_core = tcase_create("compsci://DataStructures//Lists//LinkedLists//SinglyLinkedList");

    tcase_add_checked_fixture(tc_core, setup, teardown);
    tcase_add_test(tc_core, check_linkedlist_init_and_destroy);
    // tcase_add_test(tc_core, check_node_init_and_destroy);
    // tcase_add_test(tc_core, check_insert_node);
    // tcase_add_test(tc_core, check_insert_item);
    // tcase_add_test(tc_core, check_remove_node);
    // tcase_add_test(tc_core, check_node_by_id);
    // tcase_add_test(tc_core, check_node_by_item);
    // tcase_add_test(tc_core, check_node_by_index);
    suite_add_tcase(s, tc_core);

    return s;
}


int main(int argc, char** argv) {
    printf("LinkedList Test222...\n");

    Suite *s;
    SRunner *sr;
    int number_failed;

    s = test_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_VERBOSE);
    number_failed = srunner_ntests_failed(sr);

    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
