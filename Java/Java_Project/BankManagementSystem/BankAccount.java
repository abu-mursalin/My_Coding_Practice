package Labtest2;

public class BankAccount {
    protected String accountNumber;
    protected String holderName;
    protected double balance; 

    public BankAccount(String number, String holdername, double balance){
      this.accountNumber = number;
      this.holderName = holdername;
      this.balance = balance;
    }

    public void deposit(double amount){
        this.balance += amount;
    }

    public void withdraw(double amount){
        this.balance -= amount;
    }

    public String getAccountNumber(){
        return this.accountNumber;
    }

    public double getBalance(){
        return balance;
    }

    public String getHolederName(){
        return holderName;
    }

    public String toString(){
       return "Bank Account [Account number:"+ this.accountNumber+ ", Holder name: "+ this.holderName+ ", Balance: "+ this.balance+"]";
    }
}
