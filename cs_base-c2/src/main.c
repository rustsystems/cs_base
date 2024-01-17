
#include <stdio.h>

#include "data_structures/lists/linked_lists/singly_linked_list/LinkedList.h"
#include "utils/Generator.h"
#include <json-c/json.h>

void read_config() {
    // json_object *root = json_object_from_file("contact.json");
}

int main(int argc, char** argv)
{
    int min = 100;
    int max = 1000;
    NumberGen np = {
        .length = 10,
        .seriesKind = Linear,
        .numberKind = Random,
        .params = {
            .random = {
                .seedWith = Time,
                .between = {
                    .min = &min,
                    .max = &max
                }
            }
        }
    };
    int* numbers_list = GenerateNumbers(np);
    for (int i = 0; i < np.length; i++) {
        printf("%d\n", numbers_list[i]);
    }

    LinkedList* ll = InitLinkedList();

    return 0;
}
