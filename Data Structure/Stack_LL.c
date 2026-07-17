#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int Data;
    struct Node *next;
};

struct Node* Create(int val){
    struct Node* NewNode=(struct Node*)malloc((sizeof(struct Node)));
    if(NewNode==NULL){
        printf("Memory Allocation failed \n");
        return 0;
    }
    NewNode->Data=val;
    NewNode->next=NULL;

    return NewNode;
}

struct Node *Push(int val,struct Node *Curr_Head){
    struct Node * NewNode=Create(val);
    if (NewNode == NULL) return Curr_Head;
    NewNode->next=Curr_Head;
    return NewNode;
}

struct Node *Pop(struct Node *Curr_Head){
    if (Curr_Head == NULL) {
        printf("Stack Underflow! Cannot pop from empty stack.\n");
        return NULL;
    }
    struct Node*temp=Curr_Head;
    Curr_Head =Curr_Head->next;
    return Curr_Head;
    free(temp);
}

struct Node * Display(struct Node* Curr_Head){
    struct Node*temp=Curr_Head;
    while(temp!=NULL){
        printf("%d,",temp->Data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    struct Node *Head=NULL;
    Head= Push(10,Head);
    Head= Push(20,Head);
    Head= Push(30,Head);
    Head= Push(40,Head);
    Head=Pop(Head);
    Display(Head);

    printf("Top Of the Stack is %d\n",Head->Data);
}
