#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
typedef struct {
    int Arr[SIZE];
    int Head;
    int Tail;
    int count;
}Queue;

void init(Queue *Q){
    Q->Head=0;
    Q->Tail=0;
    Q->count=0;
}

int isFull(Queue *Q){
    return Q->count==SIZE;
}

int isEmpty( Queue *Q){
    return Q->count==0;
}

int Enqueue(int val,Queue *Q){
    if(isFull(Q)){
        printf("Queue is FULL \n");
        return 0;
    }
    
    Q->Arr[Q->Tail]=val;

    Q->Tail=(Q->Tail+1)%SIZE;

    Q->count++;

    return 1;
}

int Dequeue(Queue *Q){
    if(isEmpty(Q)){
        printf("Queue is Already Empty\n");
        return 0;
    }
    int Removed_value= Q->Arr[Q->Head];
    Q->Arr[Q->Head]=0;
    Q->Head= (Q->Head + 1) % SIZE;
    Q->count--;
    return Removed_value;
}
int main() {
    Queue Q;
    init(&Q);
    
    Enqueue(10, &Q);
    Enqueue(20, &Q);
    Enqueue(30, &Q);
    
    Dequeue(&Q);
    Dequeue(&Q);
    Dequeue(&Q); // Queue becomes completely empty here

    if (isEmpty(&Q)) {
        printf("The Queue is empty! No valid elements to display.\n");
    } else {
        int last_element_index = (Q.Tail - 1 + SIZE) % SIZE;
        printf("The Value at Head of the Queue is %d\n", Q.Arr[Q.Head]);
        printf("The Value at Tail of the Queue is %d\n", Q.Arr[last_element_index]);
    }

    return 0;
}
