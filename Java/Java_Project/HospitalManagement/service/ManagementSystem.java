package service;

import javax.swing.JTextArea;
import building.Building;
import building.Room;
import building.Ward;
import staff.Doctor;
import staff.Nurse;

public class ManagementSystem {
    private static Building build;
    private static Doctor doctors[];
    private static Nurse nurses[];
    private static Patient patients[];
    private static int currentDoctor=0;
    private static int currentNurse=0;
    private static int currentPatient=0;

    public ManagementSystem(){

    }
    
    public ManagementSystem(int noDoctors, int noNurses, int noRooms, int noPatient){
        this.build = new Building(noRooms);
        this.doctors = new Doctor[noDoctors];
        this.nurses = new Nurse[noNurses];
        this.patients = new Patient[noPatient];
    }

    public void addDoctor(Doctor doctor){
        doctors[currentDoctor++]=doctor;
    }

    public void addNurse(Nurse nurse){
        nurses[currentNurse++]=nurse;
    }

    public void addPatient(Patient patient){
        patients[currentPatient++]=patient;
    }

    public Patient searchPatient(String id){
        for(Patient pat : patients){
            if(pat != null && pat.getId().equals(id)){
                return pat;
            }
        }
        return null;
    }

    public Doctor searchDoctor(String id){
        for(Doctor doc : doctors){
            if(doc != null && doc.getId().equals(id)){
                return doc;
            }
        }
        return null;
    }

    public void assignPatientToDoctor(String pid, String did){
        Patient patient = searchPatient(pid);
        Doctor doctor = searchDoctor(did);

        if(doctor != null && patient != null){
            patient.setDoctor(doctor);
            doctor.setPatient(patient);
        }
        
        else if(doctor == null){
            System.out.println("Invalid doctor Id.\n");
        }

        else if(patient == null ){
            System.out.println("Invalid patient Id.\n");
        }
    }

    public void addRoom(Room room){
        build.setRooms(room);
    }

    public void addWard(Ward ward, int roomNo){

        for(Room ro : build.getRooms()){
            if(ro != null && ro.getRoomNo() == roomNo){
                ro.setWard(ward);
                return;
            }
        }

        System.out.println("Invalid room number.\n");
    }

    public Nurse searchNurse(String nid){
        for(Nurse nur : nurses){
            if(nur != null && nur.getId().equals(nid)){
                return nur;
            }
        }
        return null;
    }

    public Ward searchWard(String wardNo){
        for(Room ro : build.getRooms()){
            if(ro != null){
                for(Ward wa : ro.getWards()){
                    if(wa != null && wa.getWardNo().equals(wardNo)){
                        return wa;
                    }
                }
            }
        }
        return null;
    }

    public int searchRoomNo(String wardNo){
        for(Room ro : build.getRooms()){
            if(ro != null){
                for(Ward wa : ro.getWards()){
                    if(wa != null && wa.getWardNo().equals(wardNo)){
                        return ro.getRoomNo();
                    }
                }
            }
        }
        return 0;
    }

    public void assignNurseToWard(String nid, String wardNo){
        Nurse nurse = searchNurse(nid);
        Ward ward = searchWard(wardNo);

        if(nurse != null && ward != null){
            if(ward.getNurse() != null){
                System.out.println("Another nurse is already assigned.\n");
                return;
            }

            nurse.assigned_wards(ward);
            ward.setNurse(nurse);
        }

        else if(nurse == null){
            System.out.println("Invalid nurse Id.\n");
        }

        else if(ward == null){
            System.out.println("Invalid ward number.\n");
        }
    }

    public void assignPatientToWard(String id, String wardNo){
        Patient patient = searchPatient(id);
        Ward ward = searchWard(wardNo);
        int roomNo = searchRoomNo(wardNo);

        if(patient != null && ward != null){
            if(ward.getPatient() != null){
                System.out.println("Ward is already booked.\n");
                return;
            }

            patient.setWard(ward);
            patient.setRoomNo(roomNo);
            ward.setPatient(patient);
        }

        else if(patient == null){
            System.out.println("Invalid patient Id.\n");
        }

        else if(ward == null){
            System.out.println("Invalid ward number.\n");
        }
    }

    public void showDoctor(JTextArea tArea){
        String s;
        boolean flag = true;
        for(Doctor doc : doctors){
            if(doc != null) {
                s = String.format("Doctor Name : "+doc+"\n");
                tArea.append(s);
                tArea.append("Assigned Patient : \n");
                for(Patient p : doc.getAssignPatient()){
                    if(p != null){
                        tArea.append("Patient Id : "+p.getId()+"\n");
                        flag = false;
                    }
                }
                if(flag)tArea.append("No patient added\n");
                tArea.append("\n");
            }
        }
        tArea.setEditable(false);
    }

    public void showNurse(JTextArea tArea){
        String s;
        boolean flag = true;
        for(Nurse nur : nurses){
            if(nur != null) {
                s = String.format("Nurse name : "+nur+"\n");
                tArea.append(s);
                tArea.append("Assigned Ward : \n");
                for(Ward wa : nur.getAssignedWard()){
                    if(wa != null){
                        tArea.append("Ward No : "+wa.getWardNo()+"\n");
                        flag = false;
                    }
                }
                if(flag)tArea.append("No ward added\n");
                tArea.append("\n");
            }
        }
        tArea.setEditable(false);
    }

    public void showPatient(JTextArea tArea){
        String s;
        for(Patient pat : patients){
            if(pat != null){
                s = String.format("Patient Name : "+pat);
                if(pat.print() != null)s = s.concat(pat.print());
                s = s.concat("\n\n");
                tArea.append(s);
            }
        }
        tArea.setEditable(false);
    }
}
