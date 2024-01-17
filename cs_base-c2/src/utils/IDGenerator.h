//
// Created by BRIAN ABBOTT on 1/13/24.
//
#ifndef IDGENERATOR_H
#define IDGENERATOR_H

#include <stdlib.h>
#include <uuid/uuid.h>

static int last_generated_id = 0;


typedef struct ObjectID {
    int id;
    uuid_t global_id;
} ObjectID;


ObjectID* GenerateObjectID() {
    const int id = ++last_generated_id;

    ObjectID* object_id = malloc(sizeof(ObjectID));
    uuid_generate_random(object_id->global_id);

    object_id->id = id;

    return object_id;
}

ObjectID* DestroyObjectID(ObjectID* object_id) {
    if (object_id == NULL) {
        return NULL;
    }
    free(object_id);
    object_id = NULL;
    return object_id;
}

char* UUIDToString(uuid_t uuid) {
    int size = 16 + 1;
    char* uuid_str = (char *)malloc(sizeof(char)*size);;
    uuid_unparse_upper(uuid, uuid_str);
    return uuid_str;
}

char* ObjectIDToString(ObjectID* object_id) {
    char* objectid_str = "{id: %d, global_id: %s}";
    sprintf(objectid_str, object_id->id, UUIDToString(object_id->global_id));
    return objectid_str;
}


#endif //IDGENERATOR_H