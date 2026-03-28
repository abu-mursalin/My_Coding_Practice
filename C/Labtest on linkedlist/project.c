#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX_NAME 100
#define MAX_ID 20
#define NUM_SEMISTER 8

FILE *f;

typedef struct Student{
    char name [MAX_NAME];
    char id [MAX_NAME];
    float gpa[NUM_SEMISTER];
    float cgpa ;
    struct Student *next;
}Student;

Student *head = NULL;

void create_linked_list(char *str){
    Student *prenode, *newnode;
    char st[100];
    char id[100];
    int i=0;
    f = fopen(str,"r");
    float gpa[8];
    bool flag = false;

    while(fscanf(f,"%[^\n]s",str) == 1){
        fscanf(f,"%s",id);
        float temp;

        newnode = malloc(sizeof(Student));
        strcpy(newnode -> name,str);
        strcpy(newnode -> id,id);
        while(fscanf(f,"%f",&temp) == 1){
            newnode -> gpa[i++]=temp;
        }
        i=0;
        newnode -> cgpa = 0.0;
        newnode -> next = NULL;

        if(flag){
            prenode -> next = newnode;
            prenode = newnode;
        }
        else{
            head = newnode;
            prenode = newnode;
            flag = true;
        }

    }
    fclose(f);
}

void display(){
    Student *head1 = head;
    while(head1 != NULL){
        printf("%s\n",head1 -> name);
        printf("%s\n",head1 -> id);
        for(int i=0;i<8;i++)printf("%.2f ",head1 -> gpa[i]);
        printf("\n%.2f\n\n",head1 -> cgpa);

        head1 = head1 -> next;
    }

}

void search(char *str){
    Student *head1 = head;
    while(head1 != NULL){
        if(strcmp(head1 -> id,str) == 0){
            printf("%s\n",head1 -> name);
            printf("%s\n",head1 -> id);
            for(int i=0;i<8;i++)printf("%.2f ",head1 -> gpa[i]);
            printf("\n%.2f\n\n",head1 -> cgpa);
            return;
        }
    }

    printf("Invalid Id \n");
}

void cgpa_calculated(){
    Student *head1 = head;

    while(head1 != NULL){
        float sum =0 ;
        for(int i=0;i<8;i++){
            sum += head1 -> gpa[i];
        }
        head1 -> cgpa = sum/8;
        head1 = head1 -> next;
    }
}

void delete(char *str){
    bool flag1 = true;
    Student *prenode, *newhead2 = head, *head1=head;

    while(head1 != NULL){
        if(flag1){
            if(strcmp(head1 -> id, str) == 0){
                head = head1 -> next;
                return;
            }
            flag1 = false;
            head1 = head1 -> next;
            prenode = head1;
        }

        else{
            if(strcmp(head1 -> id, str) == 0){
                if(head1 -> next == NULL)prenode -> next = NULL;
                else prenode -> next = head1 -> next;
                return;
            }
            else{
                prenode = head1;
            }

            head1 = head1 -> next;
        }
    }

    printf("Invalid Id.");
}

void save (char *str){
    f = fopen(str,"w");
    Student *head1 = head;

    while(head1 != NULL){
        fprintf(f,"%s\n",head1 -> name);
        fprintf(f,"%s\n",head1 -> id);
        for(int i=0;i<8;i++)fprintf(f,"%.2f ",head1 -> gpa[i]);
        fprintf(f,"\n%.2f\n\n",head1 -> cgpa);
        head1 = head1 -> next;
    }
    fclose(f);
}

int main(){

    while(true){
        printf("--Menu---\n");
        printf("1. Read from file and Store in a linked list\n");
        printf("2. Display the linked list.\n");
        printf("3. Search Student by ID.\n");
        printf("4. Delete Student by ID.\n");
        printf("5. Update linked list with cgpa.\n");
        printf("6. Write the linked list to a new file.\n");
        printf("7. Exit.\n");
        printf("Enter your choice : ");

        int a;
        scanf("%d",&a);
        getchar();

        switch(a){
            case 1:{
                printf("Enter your filename : ");
                char str [100];
                scanf("%s",str);
                create_linked_list(str);
                break;
            }
            case 2:{
                display();
                break;
            }
            case 3:{
                char str[100];
                printf("Enter Student Id : ");
                scanf("%s",str);
                search(str);
                break;
            }
            case 4:{
                printf("Enter Student Id : ");
                char str[100];
                scanf("%s",str);
                delete(str);
                break;
            }
            case 5:{
                cgpa_calculated();
                break;
            }
            case 6:{
                printf("Enter output file name : ");
                char str[100];
                scanf("%s",str);
                save(str);
                break;
            }
            case 7:{
                return 0;
            }
            default :
        }
    }
}