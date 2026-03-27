package BankProject;

public class BankAccount {
    private String accountNumber;
    private String holderName;
    private double balance;

    public String getaccountNumber(){
        return accountNumber;
    }

    public String getholderName(){
        return holderName;
    }

    public BankAccount(String number, String holdername,double balance){
        this.accountNumber = number;
        this.holderName = holdername;
        this.balance = balance;
    }

    public void deposit(double amount){
        balance += amount;
    }

    public void withdraw(double amount){
        balance -= amount;
    }

    public double getBalance(){
        return balance;
    }
}
