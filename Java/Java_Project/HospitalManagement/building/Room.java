package building;

public class Room {
    private int roomNo;
    private int capacity;
    private Ward wards[];
    private  int currentWard = 1;
    
    public Room(int capacit,int roomNo){
        this.capacity = capacit;
        wards = new Ward[capacit];
        this.roomNo = roomNo;
    }

    public void setWard(Ward ward){
        wards[currentWard++]=ward;
    }

    public Ward [] getWards(){
        return wards;
    }

    public int getRoomNo(){
        return roomNo;
    }
}
