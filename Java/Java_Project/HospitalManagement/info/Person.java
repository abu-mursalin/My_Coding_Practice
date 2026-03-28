package info;

public class Person{
    protected String name;
    protected String phone;
    protected Address address;
    protected String id;

    public Person (String name, Address address, String phone, String id){ 
        this.name = name;
        this.phone = phone;
        this.address = address;
        this.id = id;
    }

    public String getId(){
        return id;
    }

    public String getName(){
        return name;
    }

    public String toString(){
        return this.name+"\n"+this.address+"\nPhone : "+this.phone+"\nId : "+this.id;
    }
}
