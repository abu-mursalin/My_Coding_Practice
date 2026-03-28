package Labtest2;

public class BankSystem {
    private BankAccount account;
    private SavingAccount savingAccount;
    private BankAccount accountholders[]; 
    private SavingAccount savingAccounts[];
    private Transaction btransactions[];
    private Transaction stransactions[];
    private int currentIndex=0; 
    private int tNumber1=0;
    private int tNumber2=0;
    private int savingCounter=0;

    public BankSystem(int numberOfAccounts){
        this.accountholders = new BankAccount[numberOfAccounts];
        this.btransactions = new Transaction[numberOfAccounts*5];
    }

    public void setSavingAccountNumbers(int noOfSavings){
        this.savingAccounts = new SavingAccount[noOfSavings];
        this.stransactions = new Transaction[noOfSavings*5];
    }

    public void addAccount(String number, String name, double initBalance){
        account = new BankAccount(number, name, initBalance);
        this.accountholders[currentIndex] = account; 
        this.currentIndex++; 
    }

    public void addSavingAccount(String number, String name, double initBalance , double rate){
        SavingAccount account = new SavingAccount(number, name, initBalance, rate);
        this.savingAccounts[savingCounter] = account; 
        this.savingCounter++; 
    }

    public void printSavingAccount(){
        for(SavingAccount sa : savingAccounts){
            if(sa==null)break;
            System.out.println(sa);
        }
    }

    public BankAccount bSearchAccount(String number){
        for(BankAccount accnt: this.accountholders){
            if(accnt != null && accnt.getAccountNumber().equals(number)) {
                return accnt; 
            }
        }
        return null; 
    }

    public SavingAccount sSearchAccount(String number){
        for(SavingAccount accnt : savingAccounts){
            if(accnt != null && accnt.getAccountNumber().equals(number)){
                return accnt;
            }
        }
        return null;
    }

    public int getNumberOfCustomers(){
        return this.currentIndex;
    }

    public void performDeposit(double amount, String accountNumber){
        BankAccount acct = bSearchAccount(accountNumber);
        acct.deposit(amount);
        account = new BankAccount(accountNumber, acct.getHolederName(), acct.getBalance());
        btransactions[tNumber1] = new Transaction(account,"Deposited",amount);
        tNumber1++;
    }

    public void performWithdraw(double amount,String accountNumber){
        BankAccount acct = bSearchAccount(accountNumber);
        acct.withdraw(amount);
        account = new BankAccount(accountNumber, acct.getHolederName(), acct.getBalance());
        btransactions[tNumber1] = new Transaction(account,"Withdrawn",amount);
        tNumber1++;
    }

    public void performProfitAdd(String accountNumber){
        SavingAccount acct = sSearchAccount(accountNumber);
        double d = acct.profitAdd();
        savingAccount = new SavingAccount(accountNumber, acct.getHolederName(), acct.getBalance(),acct.getInterestRate());
        stransactions[tNumber2] = new Transaction(savingAccount,"Profit",d);
        tNumber2++;
    }

    public void performSavingDeposit(String accountNumber,double amount){
        SavingAccount acct = sSearchAccount(accountNumber);
        acct.deposit(amount);
        savingAccount = new SavingAccount(accountNumber, acct.getHolederName(), acct.getBalance(),acct.getInterestRate());
        stransactions[tNumber2] = new Transaction(savingAccount,"Deposited",amount);
        tNumber2++;
    }

    public void performSavingWithdraw(String accountNumber,double amount){
        SavingAccount acct = sSearchAccount(accountNumber);
        acct.withdraw(amount);
        savingAccount = new SavingAccount(accountNumber, acct.getHolederName(), acct.getBalance(),acct.getInterestRate());
        stransactions[tNumber2] = new Transaction(savingAccount,"Withdrawn",amount);
        tNumber2++;
    }

    public void accountDetails(){
        for(int i=0;i<currentIndex;i++){
            System.out.println(accountholders[i]);
        }
    }

    public void btransactionDetails(){
        for(int i=0;i<tNumber1;i++){
            System.out.println("Bank Account : "+btransactions[i]);
        }
    }

    public void stransactionDetails(){
        for(int i=0;i<tNumber2;i++){
            System.out.println("Saving Account : "+stransactions[i]+", Interest Rate: "+stransactions[i].getInterestRate());
        }
    }

}
