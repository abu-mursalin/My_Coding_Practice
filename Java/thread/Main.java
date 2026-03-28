package thread;

public class Main {
    public static void main(String[] args) {
        System.out.println(Thread.currentThread().getName());
        MyThread myThread = new MyThread();
        myThread.start();

        Thread thread = new Thread(new MyRunnable());
        thread.start();

        Thread thread1 = new Thread("New Thread") {
            public void run(){
                System.out.println("run by: " + getName());
            }
        };

        thread1.start();
        System.out.println(thread1.getName());

        MyRunnable runnable = new MyRunnable();
        Thread thread2 = new Thread(runnable, "New Thread");
        thread2.start();
        System.out.println(thread.getName());

        // Thread thread3 = Thread.currentThread();
        // String threadName = Thread.currentThread().getName();
       System.out.println(Thread.currentThread().getName());
    }
}
