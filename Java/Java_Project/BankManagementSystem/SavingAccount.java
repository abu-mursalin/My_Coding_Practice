package Labtest2;

public class SavingAccount extends BankAccount{

    private double interestRate ;

    public SavingAccount(String number, String holdername, double balance,double interest) {
        super(number, holdername, balance);
        this.interestRate = interest;
    }

    public double profitAdd(){
        double profit = (this.interestRate*this.balance)/100;
        super.deposit(profit);
        return profit;
    }

    public double getInterestRate(){
        return interestRate;
    }
    
    @Override
    public String toString(){
        return "Saving Account [Account number:"+ this.accountNumber+ ", Holder name: "+ this.holderName+ ", Balance: "+ this.balance+" Interest: "+interestRate+"]";
    }
}
