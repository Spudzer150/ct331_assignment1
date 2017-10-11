#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct genericlistElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
genericlistElement* createEl(void* data, size_t size, printFunction p);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
genericlistElement* insertAfter(listElement* after, char* data, size_t size);

//Delete the element after the given el
void deleteAfter(genericlistElement* after);

int length(genericlistElement* list);

void push(genericlistElement** list, void* data, size_t size);

genericlistElement* pop(genericlistElement** list);

void enqueue(genericlistElement** list, void* data, size_t size);

genericlistElement* dequeue(genericlistElement* list);



#endif