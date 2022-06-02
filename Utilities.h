#ifndef UTILITIES_H
#define UTILITIES_H

typedef struct Node
{
    void* data;
    size_t dataSize;
    struct Node* next;
}tNode;
typedef enum bool {True, False};

void memcpy(void*, const void*, const size_t);
int lenght(const void*);



#endif
