package gui_practice;



class My extends Thread{

    public My(String s){
        super(s);
    }
    public void run(){
        System.out.println("I ma ");
    }
}

class m extends Exception{

}

public class first {

    int s() throws Exception,ArithmeticException{
        // try{

        // }
        // catch(Exception e){
            
        // }
        return 9;
    }
    static int f(){
        return 8/0;
    }
    public static void main(String[] args) {
    //     My my = new My("harry");
    //     my.setName("Mursalin");
    //     System.out.println(my.getName());
    //     System.out.println(my.getId());
    //    // my.start();

    //     try{
    //        // throw new ArithmeticException("My nane is");
    //        //int a = 8/0;
    //        throw new m();
    //     }
    //     catch(Exception e){
    //         System.out.println(e.getMessage());
    //     }
    // int a = 
    
    // }
    // try{
    //     System.out.println(8/0);
    // }
    // catch(Exception e){
    //    // System.out.println(e);
    //    e.printStackTrace();
    // }
    System.out.println(9/0);
}
}
