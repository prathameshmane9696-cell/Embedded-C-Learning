#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
    int data;
    struct Node* Next;
};

struct Node* Create_Node(int val){
    struct Node* New_Node=(struct Node*)malloc((sizeof(struct Node)));
    if(New_Node==NULL){
        printf("Memory Allocation Failed\n");
    }
    New_Node->data=val;
    New_Node->Next=NULL;

    return New_Node;
}

struct Node* push_front(int val,struct Node* current_head){
    struct Node* first=Create_Node(val);

    first->Next=current_head;

    return first;
}

struct Node* push_back(int val, struct Node* current_head){
    struct Node* new_node=Create_Node(val);

    if(current_head==NULL){
        return new_node;
    }

    struct Node* temp=current_head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=new_node;
    return current_head;
}

bool search(int val,struct Node* current_head){
    struct Node*temp=current_head;

    while(temp!=NULL){
        if(temp->data==val){
            return 1;
        }
        temp=temp->Next;
    }
    return 0;
}
int main(){
    struct Node*Head=NULL;

    Head=push_front(10,Head);

    Head=push_front(20,Head);

    Head=push_back(30,Head);

    bool present;
    present=search(40,Head);

    struct Node*temp=Head;
    while(temp!=NULL){
        printf("%d ->",temp->data);

        temp=temp->Next;
    }
    printf("\n");
    printf("%d\n",present);
}