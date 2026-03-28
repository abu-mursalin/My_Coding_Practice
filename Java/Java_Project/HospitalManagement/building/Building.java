package building;

public class Building {
    private int no;
    private int cpacity;
    private Room rooms[];
    private int currentRoom = 0;

    public Building(int capacit){
        this.cpacity = capacit;
        rooms = new Room[capacit];
    }

    public void setRooms(Room room){
        rooms[currentRoom++]=room;
    }

    public Room [] getRooms(){
        return rooms;
    }
}
