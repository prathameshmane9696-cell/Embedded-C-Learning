#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 5

typedef struct{
    int stack[SIZE];
    int st_ptr;
}Stack;


void init(Stack *st){
    st->st_ptr=0;
}


bool isEmpty(Stack *st){
    return st->st_ptr==0;
}


bool isFull(Stack *st){
    return st->st_ptr==SIZE;
}


int Push(int val,Stack *st){
    if(isFull(st)){
        printf("Stack is Overflow \n ");
        return 0;
    }
    st->stack[st->st_ptr]=val;
    st->st_ptr++;
}

void Pop(Stack*st){
    if(isEmpty(st)){
        printf("Stack is Underflow\n");
        exit(0);
    }

    st->st_ptr--;
}

int top(Stack *st){
    return st->stack[st->st_ptr];
}

void Display(Stack *st){
    int i=st->st_ptr-1;
    while(i>=0){
        printf("%d ,",st->stack[i]);
        i--;
    }
}

int main(){
    Stack st;
    init(&st);
    Push(10,&st);
    Push(20,&st);
    Push(30,&st);
    Push(40,&st);
    Push(50,&st);

    Pop(&st);
    Pop(&st);
     
    Display(&st);
    printf("Top Of Stack is %d\n",st.stack[st.st_ptr-1]);
}
