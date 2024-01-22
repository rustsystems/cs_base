//
// Created by BRIAN ABBOTT on 1/20/24.
//
#include "data_structures/lists/linked_lists/singly_linked_list/check_linkedlist.h"

void tc_list_sll_setup(void)
{
}


void tc_list_sll_teardown(void)
{
}


Suite * test_suite(void)
{
    Suite *s;
    TCase *tc_list_sll;
    TCase *tc_limits;

    s = suite_create("CS_Base");
    tc_list_sll = tcase_create("compsci://CS_Base/DataStructures/Lists/LinkedLists/SinglyLinkedList");

    tcase_add_checked_fixture(tc_list_sll, tc_list_sll_setup, tc_list_sll_teardown);
    tcase_add_test(tc_list_sll, check_sll_linkedlist_init_and_destroy);
    tcase_add_test(tc_list_sll, check_sll_node_init_and_destroy);
    tcase_add_test(tc_list_sll, check_sll_insert_node);
    tcase_add_test(tc_list_sll, check_sll_insert_item);
    tcase_add_test(tc_list_sll, check_sll_remove_node);
    tcase_add_test(tc_list_sll, check_sll_node_by_id);
    tcase_add_test(tc_list_sll, check_sll_node_by_item);
    tcase_add_test(tc_list_sll, check_sll_node_by_index);
    suite_add_tcase(s, tc_list_sll);

    return s;
}


// No Fork Mode
// Check normally forks to create a separate address space. This allows a
// signal or early exit to be caught and reported, rather than taking down
// the entire test program, and is normally very useful. However, when you
// are trying to debug why the segmentation fault or other program error
// occurred, forking makes it difficult to use debugging tools. To define
// fork mode for an SRunner object, you can do one of the following:
//
//      Define the CK_FORK environment variable to equal “no”.
//
//      Explicitly define the fork status through the use of the following function:
//          void srunner_set_fork_status (SRunner * sr, enum fork_status fstat);
//
// The enum fork_status allows the fstat parameter to assume the following values:
//      CK_FORK
//      CK_NOFORK.
// An explicit call to srunner_set_fork_status() overrides the CK_FORK environment variable.


int main(int argc, char** argv) {
    printf("LinkedList Test222...\n");

    Suite *s;
    SRunner *sr;
    int number_failed;

    s = test_suite();
    sr = srunner_create(s);
    srunner_set_fork_status(sr, CK_NOFORK);

    srunner_run_all(sr, CK_VERBOSE);
    number_failed = srunner_ntests_failed(sr);

    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
