#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data; //data 
    struct Node* next;//member for pointer to next
};

//combineList
void combineList(struct Node** array1, struct Node** array2) {
    if (*array1 == NULL) // If head1 is empty, assign it to head2
	{
        *array1 = *array2;
    }
    else 
	{
        struct Node* temp = *array1;// Traverse to the end of array1 list
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = *array2;// Connect array2 list to the end of array1
    }
    *array2 = NULL;// avoid dangling pointer
}

//insertFirstNode
void insertFirstNode(struct Node** array, int data) {
    struct Node* addNode = (struct Node*)malloc(sizeof(struct Node));//distribute memory for the new node
    addNode->data = data;//set new data
    addNode->next = *array;//new point to the current head of the list
    *array = addNode;//update array pointer
}

//listLength
int listLength(struct Node* array)
{
    int count = 0;//Initialize counter
    struct Node* current = array; // Create a pointer to traverse the list
    while (current != NULL)//Iterate until the(NULL)
    {
        count++;//accumlate
        current = current->next;//move the pointer
    }
    return count;
}

//reverseList
void reverseList(struct Node** array)
{
	// Initialize three pointers
    struct Node* former = NULL;
    struct Node* current = *array;
    struct Node* next = NULL;

    while (current != NULL)// Iterate through the list
    {
        next = current->next;//store the next code
        current->next = former;//reverse the pointer
        former = current;//move former and curret forward
        current = next;
    }
    *array = former;//update data
}

//printList
void printList(struct Node* array)
{
    struct Node* current = array;
    while (current != NULL)// Iterate
    {
        printf("%d ", current->data);
        current = current->next; // Move the pointer to the next node
    }
    printf("\n");
}

int main()
{
    struct Node* array1 = NULL;
    struct Node* array2 = NULL;

    int arr1[] = { 12, 43, 56, 34, 98 };
    int arr2[] = { 36, 77, 99 };
    int arr1_length = sizeof(arr1) / sizeof(arr1[0]);
    int arr2_length = sizeof(arr2) / sizeof(arr2[0]);

    //to set arr[1]
    int i ;
    for (i= arr1_length - 1; i >= 0; i--)
    {
        insertFirstNode(&array1, arr1[i]);
    }
    
	//to set arr[2]
    for (i = 0; i < arr2_length; i++)
    {
        insertFirstNode(&array2, arr2[i]);
    }
    
    //printf array[1] 
    printf("array[1] :");
    printList(array1);
    
    //printf array[2] 
    printf("array[2] :");
    printList(array2);

    //printf the result of link array[1] and array[2]
    combineList(&array1, &array2);
    printf("link array[1] and array[2] :");
    printList(array1);


    //ask for the reqirement and print the result
    int numNodes, data;
    printf("Enter the node of number inserted into the first position :");
    scanf("%d", &numNodes);
    printf("Enter the number :\n");
     
    //print the result after inserted 
    for ( i = 0; i < numNodes; i++) {
        scanf("%d", &data);
        insertFirstNode(&array1, data);
        printf("the result after inserted : ");
        printList(array1);
    }
    
    //print array length 
    int length = listLength(array1);
    printf("array length : %d\n", length);

    //printf revese result
    reverseList(&array1);
    printf("revese result :");
    printList(array1);

    return 0;
}
