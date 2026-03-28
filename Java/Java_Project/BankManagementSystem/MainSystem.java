package Labtest2;

public class MainSystem {
    public static void main(String args[]){
        BankSystem banksys = new BankSystem(10); 
        banksys.addAccount("00011", "Jhon", 100);
        banksys.addAccount("00022", "Bob", 250);
        //banksys.accountDetails();
        
        banksys.performDeposit(500, "00011");
        banksys.performDeposit(400, "00022");
       // banksys.accountDetails();

        banksys.performWithdraw(300, "00011");
        banksys.performWithdraw(200, "00022");
       // banksys.accountDetails();

        banksys.setSavingAccountNumbers(5);
        banksys.addSavingAccount("000111", "Jhon", 900,8);
        banksys.addSavingAccount("000222", "Bob", 800,9);
       // banksys.printSavingAccount();
        
        banksys.performProfitAdd("000111");
        banksys.performSavingDeposit("000111", 200);
        banksys.performSavingDeposit("000111", 200);
        banksys.performSavingWithdraw("000222", 100);

        banksys.btransactionDetails();
        banksys.stransactionDetails();
    }
}
