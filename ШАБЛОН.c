#include <stdio.h>
#include <stdlib.h>

struct List
{
	int data;
	struct List* Next;
} *F;

void addToList(int value)
{
    struct List* new_node = malloc(sizeof(struct List));
	
    new_node->data = value;
    new_node->Next = NULL;
	
    if (F == NULL)
	{
        F = new_node;
        return;
    }
	
    struct List* current = F;
    while (current->Next != NULL)
	{
        current = current->Next;
    }
    current->Next = new_node;
}

// void func() {...}

int main()
{
	int array[] = {3,1,4,1,6,1,1}; 
	int i, j;
	
	for (i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		addToList(array[i]);
	}
	
	struct List* current = F;
	while (current) // Первый вывод
	{
		printf("%d ", current->data);
		current = current->Next;
	}
	
	printf("\n");
	func();
	printf("\n");
	
	current = F;
	while (current) // Первый вывод
	{
		printf("%d ", current->data);
		current = current->Next;
	}

	return 0;
}
