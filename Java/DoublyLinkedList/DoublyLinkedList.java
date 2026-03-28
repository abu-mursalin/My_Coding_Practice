package linkedlist;

import java.util.Scanner;

public class DoublyLinkedList {
    Node head=null,tail,preNode;
    int totalNode = 0;
    Scanner scan = new Scanner(System.in);
    int idx=2,deleteData;

    public void create(){
        while(true){
            int data = scan.nextInt();

            if(data == 0)return;

            else if(head == null){
                tail = new Node (data);
                head = tail;
            }

            else{
                preNode = tail;
                tail.next = new Node(data);
                tail = tail.next;
                tail.prev = preNode;
            }

            totalNode ++;
        }
    }

    public void insertFirst(Node node){
        preNode = head;
        node.next = head;
        head = node;
        preNode.prev = head;
        totalNode ++;
    }

    public void insertLast(Node node){
        preNode = tail;
        tail.next = node;
        tail = node;
        tail.prev = preNode;
        totalNode ++;
    }

    public void insert(Node node,int index){
        int idx = 1;

        if(index == 1){
            insertFirst(node);
        }

        else if(index == totalNode+1){
            insertLast(node);
            tail = node;
        }

        else {
            Node travarseNode = head;
            while(true){
                if(index == idx+1){
                    preNode = travarseNode;
                    node.next = travarseNode.next;
                    node.prev = preNode;
                    travarseNode.next = node;
                    node.next.prev = node;
                    return;
                }

                idx++;
                travarseNode = travarseNode.next;
            }
        }
    }

    public void deleteFirst(){
        head = head.next;
        head.prev = null;
        totalNode --;
    }

    public void deleteLast(){

        if(totalNode == 1){
            head = null;
            tail = null;
            totalNode --;
            return;
        }

        tail.prev.next = null;
        tail = tail.prev;
    }


    public void deleteElement(int element){
        
        if(head.data == element){
            deleteFirst();
            idx=1;
            deleteData = element;
        }

        else if(tail.data == element){
            deleteLast();
            idx=totalNode;
            deleteData = element;
        }

        else{
            Node travarseNode = head;
            while(true){
                if(travarseNode.next.data == element){
                    travarseNode.next = travarseNode.next.next;
                    travarseNode.next.prev = travarseNode;
                    deleteData = element;
                    return;
                }

                travarseNode = travarseNode.next;
                idx++;
            }
        }
        
    }

    public void print(){
        Node travarseNode = head;
        System.out.println();
        while(travarseNode != null){
            System.out.print(travarseNode.data + " ");
            travarseNode = travarseNode.next;
        }
        System.out.println("\n");
    }

    public void undo(){
        insert(new Node(deleteData), idx);
    }
}
