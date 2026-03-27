package BankProject;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.Random;

public class BankSystem {
    private Transaction transaction =new Transaction();
    ArrayList<BankAccount>accounts = new ArrayList<>();
    private double balanc;
    private int idx;
    private String statement;
    Random rand = new Random();

    public String temp(String type,double amount){
        String s;
        if(type.equals("Deposit")){
            s="Deposited : "+amount;
        }
        else s= "Withdraw : "+amount;

        return s;
    }

    public void createAccount(BankAccount account){
        accounts.add(account);
    }

    public void deleteAccount(String accountNumber){
        
        for(int i=0;i<accounts.size();i++){
            if(accounts.get(i).getaccountNumber() == accountNumber){
                accounts.remove(i);
                break;
            }
        }
        
        System.out.println("Delete account");
    }

    public void performtransaction(String number, double amount, String type){

        for(int i=0;i<accounts.size();i++){

            if(type.equals("Deposit") && accounts.get(i).getaccountNumber() == number){
                accounts.get(i).deposit(amount);
                idx=i;
                break;
            }

            else if(accounts.get(i).getaccountNumber() == number){
                accounts.get(i).withdraw(amount);
                idx=i;
                break;
            }
        }

        String e= temp(type,amount);
        transaction.setTemp(e);
        transaction.setAmount(accounts.get(idx).getBalance());
        transaction.setNumber(accounts.get(idx).getaccountNumber());
        transaction.setId(rand.nextLong());
    }

    public void getStatement(){
        statement = transaction.transactionDetails();
        System.out.println(statement);
        System.out.println(LocalDateTime.now()+"\n");
    }
}
