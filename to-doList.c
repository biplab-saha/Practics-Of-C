#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a to-do item
typedef struct TodoItem {
    char description[100];
    struct TodoItem* next;
} TodoItem;

// Function to create a new to-do list
TodoItem* createTodoList() {
    return NULL;
}

// Function to add a new item to the to-do list
TodoItem* addTodoItem(TodoItem* list, char* description) {
    TodoItem* newItem = (TodoItem*) malloc(sizeof(TodoItem));
    if (newItem == NULL) {
        printf("Error: unable to allocate memory\n");
        exit(1);
    }
    strcpy(newItem->description, description);
    newItem->next = list;
    return newItem;
}

// Function to display the to-do list
void displayTodoList(TodoItem* list) {
    TodoItem* current = list;
    while (current != NULL) {
        printf("%s\n", current->description);
        current = current->next;
    }
}

// Function to free the memory allocated for the to-do list
void freeTodoList(TodoItem* list) {
    TodoItem* current = list;
    while (current != NULL) {
        TodoItem* next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    TodoItem* todoList = createTodoList();

    // Add some items to the list
    todoList = addTodoItem(todoList, "Buy milk");
    todoList = addTodoItem(todoList, "Walk the dog");
    todoList = addTodoItem(todoList, "Do laundry");

    // Display the list
    printf("To-do list:\n");
    displayTodoList(todoList);

    // Free the memory allocated for the list
    freeTodoList(todoList);

    return 0;
}