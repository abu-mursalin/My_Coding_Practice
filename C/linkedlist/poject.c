#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

FILE *f ;
int count = 0;

typedef struct Node{
    char str[100];
    struct Node *next;
}Node;

int create_list_from_file(Node **head){
    f = fopen("hh.txt","r");
    char str[1000];
    int cnt = 0;
    bool flag = false;
    Node *newnode, *prenode;

    while(fscanf(f,"%s",str) == 1){
        newnode = malloc(sizeof(Node));
        strcpy(newnode -> str , str);
        newnode -> next = NULL;
        cnt++;

        if(flag){
            prenode -> next = newnode;
            prenode = newnode;
        }
        else{
            prenode = newnode;
            *head = prenode;
            flag = true;
        }
    }
    fclose(f);
    return cnt;
}

int create_list_from_string(Node **head, char *str){
    char str1[1000];
    int i = 0, j = 0, cnt = 0;
    bool flag = false;
    Node *newnode, *prenode;

    while(str[i] != '\0'){
        if(str[i] == ' ' && str1[0] != '\0'){
            newnode = malloc(sizeof(Node));
            strcpy(newnode -> str, str1);
            newnode -> next = NULL;
            cnt++;

            if(flag){
                prenode -> next = newnode;
                prenode = newnode;
            }
            else{
                prenode = newnode;
                *head = prenode;
                flag = true;
            }

            str1[0] = '\0';
            j=0;
        }

        else {
            str1[j++] = str[i];
            str1[j] = '\0';
        }

        i++;
    }

    if(j != 0){
        newnode = malloc(sizeof(Node));
        strcpy(newnode -> str , str1);
        newnode -> next = NULL;
        cnt++;

        if(flag){
            prenode -> next = newnode;
            prenode = newnode;
        }
        else{
            prenode = newnode;
            *head = prenode;
            flag = true;
        }
    }

    return cnt;
}

void print(Node *head){
    while(head != NULL){
        printf("%s ",head -> str);
        head = head -> next;
    }
    printf("\n");
}

bool search(Node *head, Node*head1){
    Node *newhead1 = head1;

    while(head != NULL){
        if(strcmp(head -> str , newhead1 -> str) == 0){
            newhead1 = newhead1 -> next;
        }
        else newhead1 = head1;
        
        head = head -> next;
        count++;

        if(newhead1 == NULL)return true;
    }

    return false;
}

void save(Node *head){
    f = fopen("hh.txt","w");

    while(head != NULL){
        fprintf(f,"%s ",head -> str);
        head = head -> next;
    }

    fclose(f);
}

void delete(Node ** head, Node *head1, Node *head2, char *str){
    bool flag = false;
    bool flag1 = true;
    Node *prenode, *newhead2 = head2;

    while(head1 != NULL){
        if(flag1){
            if(strcmp(head1 -> str, newhead2 -> str) == 0){
                newhead2 = newhead2 -> next;
            }
            else{
                newhead2 = head2;
                flag1 = false;
                prenode = head1;
            }

            if(newhead2 == NULL){
                *head = head1 -> next;
                flag = true;
                newhead2 = head2;
            }

            head1 = head1 -> next;
        }

        else{
            if(strcmp(head1 -> str, newhead2 -> str) == 0){
                newhead2 = newhead2 -> next;
            }
            else{
                prenode = head1;
                newhead2 = head2;
            }

            if(newhead2 == NULL){
                flag = true;
                prenode -> next = head1 -> next;
                newhead2 = head2;
            }

            head1 = head1 -> next;
        }
    }

    if(flag)printf("All %s is deleted successfully.\n",str);
    else printf("%s is not found.\n",str);

    save(*head);
}

void insert(Node **head, Node **head1, int a,int b){
    Node  *newhead=*head, *newhead1=*head1, *prenode = NULL, *postnode = NULL;
    if(a <= 0){
        while(newhead1 != NULL){
            postnode = newhead1;
            newhead1 = newhead1 -> next;
        }

        postnode -> next = *head;
        *head = *head1;
    }

    else if(a >= b){
        while(newhead != NULL){
            postnode = newhead;
            newhead = newhead -> next;
        }

        if(postnode == NULL)*head = *head1;
        else postnode -> next = *head1;
    }

    else{
        int c = 1;

        while(a >= c){
            prenode = newhead;
            postnode = newhead -> next;
            newhead = newhead -> next;
            c++;
        }

        prenode -> next = *head1;

        while(newhead1 != NULL){
            if(newhead1 -> next == NULL){
                newhead1 -> next = postnode;
                break;
            }
            newhead1 = newhead1 -> next;
        }
    }
}

void free_memory(Node **head){
    Node *temp = *head;

    while(*head != NULL){
        *head = (*head) -> next;
        free(temp);
        temp = *head;
    }

    free(*head);
    free(temp);
}

int main(){
    Node *head = NULL;
    Node *head1 = NULL;

    while(1){
        printf("1. Insert\n2. Print\n3. Delete\n4. Search\n5. Exit\nSelect a option : ");

        int c;
        scanf("%d",&c);
        getchar();

        switch(c){
            case 1 :{
                printf("Enter what you want to insert : ");
                char str[1000];
                scanf("%[^\n]s",str);

                printf("Enter how much word after you want to insert : ");
                int a ;
                scanf("%d",&a);

                create_list_from_string(&head1,str);
                int b = create_list_from_file(&head);
                insert(&head,&head1,a,b);
                save(head);
                
                free_memory(&head);
                
                break;
            }

            case 2 :{
                create_list_from_file(&head);
                print(head);

                free_memory(&head);

                break;
            }

            case 3 :{
                printf("Enter what you want to delete : ");
                char str[1000];
                scanf("%[^\n]s",str);

                create_list_from_file(&head);
                create_list_from_string(&head1,str);
                delete(&head,head,head1,str);

                free_memory(&head);
                free_memory(&head1);

                break;
            }

            case 4 :{
                printf("Enter what you want to search : ");
                char str[1000];
                scanf("%[^\n]s",str);

                create_list_from_file(&head);
                int b = create_list_from_string(&head1,str);
                
                if(search(head,head1)) printf("%s is found after %d words\n",str,count-b);
                else printf("%s is not found\n",str);

                free_memory(&head);
                free_memory(&head1);
                count = 0;

                break;
            }

            case 5 :{
                return 0;
            }
        }
    }
}