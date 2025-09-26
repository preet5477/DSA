#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>

struct emp{
    int id;
    char nm[20];
    int sal;
    struct emp *next;
}*first,*last,*curr,*temp;

void init(){
    first=last=curr=temp=NULL;
}

void show(){
    curr=first;
    if(first==NULL){
        printf("Empty");
    }
    else{
        while(curr!=NULL){
            printf("\n-----------------------\n");
            printf("Id=%d,Name=%s,Salary=%d.\n",curr->id,curr->nm,curr->sal);
            curr=curr->next;
        }
    }
}
void append()
{
    temp = (struct emp*) malloc(sizeof(struct emp));
    printf("Entere id,nm,sal:\n");
    scanf("%d%s%d",&temp->id,temp->nm,&temp->sal);
    temp->next=NULL;

    if(first==NULL){
        first=last=temp;
    }
    else
    {
        last->next=temp;
        last=temp;
    }
    printf("Inserted at last.");
    show();
}


void insert_at_first()
{
    temp=(struct emp*)malloc (sizeof (struct emp));
    //temp->next=NULL;
    printf("Entere id,nm,sal:\n");
    scanf("%d%s%d",&temp->id,temp->nm,&temp->sal);
    //temp=first;
    if(first==NULL){
        first=last=temp;
    }
    else{
    temp->next=first;
    first=temp;  
    }
    printf("Inserted at first.");
  //  show();
}

int count(){
    int c=0;
     curr=first;    
        while(curr!=NULL){
           c++;
           curr=curr->next;
        }
    return c;
}

void insert_Before()
{
    int pos;
              printf("Enter Position :");
              scanf("%d",&pos);
    int len=count();

    if(pos<=0 || pos>len){
       printf("Wrong Positon.");
    }else{
        if(pos==1){
            append();
        }
        else{
            
            temp=(struct emp*)malloc (sizeof (struct emp));
            temp->next=NULL;
            printf("Entere id,nm,sal:\n");
            scanf("%d%s%d",&temp->id,temp->nm,&temp->sal);

            curr=first;
            for(int i=1;i<pos-1;i++)
            {
               curr= curr->next;
                
            }
            temp->next=curr->next;
           curr->next=temp;   
    }     
    }
    printf("Inserted at first.");
  //  show();
}

int main() 
{
    int choice;
    //const char* filename = "person.txt";
    void init();
    while (1) {
        printf("*****----------------------MENU----------------------*****\n");
        printf("1. Add at Last\n");
        printf("2. Add at First\n");
        printf("3. Add Before(At Position)\n");
        printf("4. Add after\n");
        printf("5. Delete First\n");
        printf("6. Delete Last\n");
        printf("7. Delete at Positon\n");
        printf("8. Show\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                append(); // Write to file
                break;
             case 2:
                  insert_at_first(); // Read from file
                 break;
             case 3:
             
                 insert_Before(); // Delete all data
                 break;
            // case 4:
            //     updateRecord(filename); // Update data
            //     break;                
            // case 5:
            //     deleteOneRecord(filename); // Delete a customer's record
            //     break;
            //  case 6:
            //     payTax(filename); // Pay Tax
            //     break; 
            // case 7:
            //     showOneRecord(filename); // Pay Tax
            //     break;  
            case 8:
                 show(); // show
                 break;              
            case 0:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}