package BankProject;

import java.util.Scanner;

public class MainSystem {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        BankAccount Account1 = new BankAccount("00011", "John",100);
        BankAccount Account2 = new BankAccount("00022", "Bob", 250);

        BankSystem bSystem = new BankSystem();

        bSystem.createAccount(Account1);
        bSystem.createAccount(Account2);

        bSystem.performtransaction(Account1.getaccountNumber(), 500, "Deposit");
        bSystem.getStatement();

        bSystem.performtransaction(Account1.getaccountNumber(), 250, "Withdraw");
        bSystem.getStatement();

        bSystem.performtransaction(Account2.getaccountNumber(), 600, "Deposit");
        bSystem.getStatement();
        
        bSystem.performtransaction(Account2.getaccountNumber(), 400, "Withdraw");
        bSystem.getStatement();

        scan.close();
    }
}
