package BankProject;

public class Transaction {
    private long transictionalId;
    private double amount;
    private String accountNumber;
    private String temp;
    
    public void setTemp(String temp){
        this.temp=temp;
    }

    public void setId(long Id){
        this.transictionalId = Id;
    }

    public void setNumber(String number){
        this.accountNumber = number;
    }

    public void setAmount(double amount){
        this.amount = amount;
    }

    public String transactionDetails(){

        return "Statement :\nTransictional Id : "+transictionalId+"\nAccount Number : "+accountNumber
        +"\n"+temp +"\nCurrent Amount : "+amount;

    }
}
