package Mursalin;

public class Student {
    private String id;
    private String name;
    private String address;
    private String hallName;

    public void setId(String id){
        this.id = id;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setAddress(String address){
        this.address = address;
    }
     
    public void setHallName(String hallName){
        this.hallName = hallName;
    }

    public String getId(){
        return id;
    }

    public String getName(){
        return name;
    }

    public String getAddress(){
        return address;
    }

    public String getHallName(){
        return hallName;
    }
}
