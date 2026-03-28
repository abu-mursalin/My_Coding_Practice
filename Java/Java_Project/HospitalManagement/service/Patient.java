package service;
import info.Person;
import info.Address;
import building.Ward;
import staff.Doctor;

public class Patient extends Person{
    private Ward assinged_ward;
    private int roomNo=0;
    private Doctor doctor;

    public Patient(String name, Address address, String phone, String id){
        super(name, address, phone, id);
    }

    public void setDoctor(Doctor doctor){
        this.doctor = doctor;
    }

    public void setWard(Ward ward){
        this.assinged_ward = ward;
    }

    public void setRoomNo(int roomNo){
        this.roomNo = roomNo;
    }

    public String print(){
        String s = "";
        if(roomNo != 0)s = s.concat("\nRoom no : "+this.roomNo);
        if(assinged_ward != null)s = s.concat("\nWard no : "+assinged_ward.getWardNo());
        if(doctor != null)s = s.concat("\nAssiged Doctor name : "+doctor.getName());
        return s;
    }
}
