#ifndef UTILITIES_H
#define UTILITIES_H

typedef struct Node
{
    void* data;
    size_t dataSize;
    struct Node* next;
}tNode;
enum bool {True, False};
typedef enum bool bool;

void memcpy(void*, const void*, unsigned int);
int lenght(const void*);
int checkSpace(const size_t);



#endif
