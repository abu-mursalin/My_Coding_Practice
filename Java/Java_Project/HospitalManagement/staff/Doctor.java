package staff;
import info.Person;
import info.Address;
import service.Patient;

public class Doctor extends Person{
    private int capacity;
    private int currentPatient=0;
    private Patient assigned_patients[];
    
    public Doctor(String name, Address address, String phone, String id, int capacit){
        super(name, address, phone,id);
        this.capacity = capacit;
        assigned_patients = new Patient[capacit];
    }

    public int getCapacity(){
        return capacity;
    }

    public int getSize(){
        return currentPatient;
    }

    public void setPatient(Patient patient){
        assigned_patients[currentPatient++]=patient;
    }

    public Patient[] getAssignPatient(){
        return assigned_patients;
    }

}
