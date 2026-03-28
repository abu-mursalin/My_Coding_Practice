package staff;
import info.Person;
import info.Address;
import building.Ward;

public class Nurse extends Person{
    private int capacity;
    private Ward assigned_wards[];
    private int cnt = 0;
    
    public Nurse(String name, Address address, String phone, String id, int capacit){
        super(name, address, phone,id);
        this.capacity = capacit;
        assigned_wards = new Ward[capacit];
    }

    public void assigned_wards(Ward ward){
        assigned_wards[cnt++]=ward;
    }

    public Ward[] getAssignedWard(){
        return assigned_wards;
    }
}
