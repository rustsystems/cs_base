//
// Created by BRIAN ABBOTT on 1/20/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "data_structures/lists/linked_lists/doubly_linked_list/DoublyLinkedList.h"

START_TEST (check_dll_linkedlist_init_and_destroy) {
    printf("check_dll_linkedlist_init_and_destroy\n");
} END_TEST


START_TEST (check_dll_node_init_and_destroy) {
    printf("check_dll_node_init_and_destroy\n");
} END_TEST


START_TEST (check_dll_insert_node) {
    printf("check_dll_insert_node\n");
} END_TEST


START_TEST (check_dll_insert_item) {
    printf("check_dll_insert_item\n");
} END_TEST


START_TEST (check_dll_remove_node) {
    printf("check_dll_remove_node\n");
} END_TEST


START_TEST (check_dll_node_by_id) {
    printf("check_dll_node_by_id\n");
} END_TEST


START_TEST (check_dll_node_by_item) {
    printf("check_dll_node_by_item\n");
} END_TEST


START_TEST (check_dll_node_by_index) {
    printf("check_dll_node_by_index\n");
} END_TEST


void tc_list_doublylinkedlist_setup(void)
{
}


void tc_list_doublylinkedlist_teardown(void)
{
}

TCase* create_singlylinkedlist_tcase() {
    TCase* tc_list_dll = tcase_create("compsci://CS_Base/DataStructures/Lists/LinkedLists/DoublyLinkedList");

    tcase_add_checked_fixture(tc_list_dll, tc_list_doublylinkedlist_setup, tc_list_doublylinkedlist_teardown);
    tcase_add_test(tc_list_dll, check_dll_linkedlist_init_and_destroy);
    tcase_add_test(tc_list_dll, check_dll_node_init_and_destroy);
    tcase_add_test(tc_list_dll, check_dll_insert_node);
    tcase_add_test(tc_list_dll, check_dll_insert_item);
    tcase_add_test(tc_list_dll, check_dll_remove_node);
    tcase_add_test(tc_list_dll, check_dll_node_by_id);
    tcase_add_test(tc_list_dll, check_dll_node_by_item);
    tcase_add_test(tc_list_dll, check_dll_node_by_index);

    return tc_list_dll;
}