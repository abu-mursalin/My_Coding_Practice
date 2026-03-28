package linkedlist;

import java.util.Scanner;


public class Maind {
        public static void main(String[] args) {
        int n;
        DoublyLinkedList List = new DoublyLinkedList();
        Scanner scan = new Scanner(System.in);

        while (true) {
            System.out.println("1. Create ");
            System.out.println("2. Print ");
            System.out.println("3. Insert ");
            System.out.println("4. Delete Element ");
            System.out.println("5. Undo");
            System.out.println("6. Exit");
            System.out.print("Choose a option : ");
            n = scan.nextInt();

            if(n == 1){
                System.out.print("Enter your data : ");
                List.create();
            }

            else if(n == 2){
                List.print();
            }

            else if(n == 3){
                System.out.print("Enter your data and index: ");
                List.insert(new Node(scan.nextInt()),scan.nextInt());
            }

            else if(n == 4){
                System.out.print("Enter your element : ");
                List.deleteElement(scan.nextInt());
            }

            else if(n==5){
                List.undo();
            }

            else if(n==6){
                return;
            }
        }
    }
}
