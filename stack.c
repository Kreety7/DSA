  #include <stdio.h>

 int MAXSIZE=8;
 int stack[8];
 int top=-1;
 int isfull(){
    if (top==MAXSIZE-1)
    return 1;
    else
     return 0;
 }
 int isEmpty(){
    if (top==-1)
    return 1;
    else
     return 0;
 }
 void push(int data){
    if (!isfull()){
        top=top+1;
        stack[top]=data;    
    } else{
        printf("could not insert data,Stack is full.\n");
    }
 }
 int pop(){
    int data;
    if (!isEmpty()){
        data=stack[top];
        top=top-1;
        return data;
    } else{
        printf("could not retrieve data,Stack is empty.\n");
    }
 }
 int peek(){
    return stack[top];
 }
 void display(){
    int i;
    if(!isEmpty()){
        for(i=top; i>=0;i--)
        printf("%d", stack[i]);
        printf("\n");
    }else{
        printf("Stack is empty.\n");
        return;
    }
 }
 void search (int element){
    printf("\n");
    for (int i=0; i<top; i++){
        if(stack[i]==element){
            printf("element found at index %d \n",i);
            return;
        }
    }
    printf("element not found \n");
 }
 int main(){
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);
   push(12);
   push(15);
   push(15);
   printf("Element at top of the stack: %d\n", peek());
   printf("Elements: \n");
   display();
   printf("\nElement popped: %d\n", pop());
   printf("Element at top of the stack: %d\n", peek());
   printf("Elements: \n");
   display();
   search(9);
    return 0;
}

 



