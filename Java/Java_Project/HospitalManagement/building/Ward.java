package building;
import staff.Nurse;
import service.Patient;

public class Ward {
    private String wardNo;
    private Patient patient;
    private Nurse nurse;

    public Ward(String wardNo){
        this.wardNo=wardNo;
    }

    public String getWardNo(){
        return wardNo;
    }

    public Patient getPatient(){
        return patient;
    }

    public void setPatient(Patient patient){
        this.patient=patient;
    }

    public Nurse getNurse(){
        return nurse;
    }

    public void setNurse(Nurse nurse){
        this.nurse = nurse;
    }
}
