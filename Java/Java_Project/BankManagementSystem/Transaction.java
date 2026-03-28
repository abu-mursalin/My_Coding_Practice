package Labtest2;

public class Transaction {
    private BankAccount bankAccount;
    private String operation;
    private double changeAmount;
    private double interestRate;

    public Transaction (BankAccount bankAccount, String operation, double changeAmount){
        this.bankAccount = bankAccount;
        this.operation = operation;
        this.changeAmount = changeAmount;
    }

    public double getInterestRate(){
        return this.interestRate;
    }
    
    @Override
    public String toString(){
        return "Account number:"+ bankAccount.getAccountNumber()+ ", Balance: "+ bankAccount.getBalance()+
        ", Operation: "+operation+", Amount change: "+changeAmount;
    }
}
