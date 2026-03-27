package Mursalin;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class ResultSystem {
    private double cgpa;
    private double totalGrade=0;
    private double tempGrade;
    private String tempId;
    int cnt=0;

    Registration registrationData = new Registration();
    Student student = new Student();
    CalculateGrade cGrade = new CalculateGrade();

    ArrayList<Integer>marks = new ArrayList<>();
    HashMap<Student,ArrayList<Integer>>studentMark = new HashMap<>();

    ArrayList<Double>grades = new ArrayList<>();
    HashMap<Student,ArrayList<Double>>studentGrade = new HashMap<>();

    HashMap<Student,Double>studentCgpa = new HashMap<>();

    public void enterMark(Student student, int mark){
        this.student=student;
        marks = studentMark.get(student);
        if(marks==null)marks=new ArrayList<>();
        marks.add(mark);
        studentMark.put(student , marks );
    }

    public void courseWiseGrade(){
        for(Map.Entry<Student,ArrayList<Integer>>entry : studentMark.entrySet()){
            student = entry.getKey();
            for(int u : entry.getValue()){
                tempGrade = cGrade.calGrade(u);
                grades.add(tempGrade);
                totalGrade += tempGrade;
                cnt++;
            }

            studentGrade.put(student, grades);
            studentCgpa.put(student, totalGrade/cnt);
        }
    }

    public ArrayList<Integer> getMarks(String id){
        for(Map.Entry<Student,ArrayList<Integer>>entry : studentMark.entrySet()){
            String tempId = entry.getKey().getId();
            if(tempId.equals(id)){
                marks = entry.getValue();
            }
        }

        return marks;
    }

    public ArrayList<Double> getCourseGrades(String id){
        for(Map.Entry<Student,ArrayList<Double>>entry : studentGrade.entrySet()){
            tempId = entry.getKey().getId();
            if(tempId.equals(id)){
                grades = entry.getValue();
                break;
            }
        }

        return grades;
    }

    public double getCgpa(Student student){
        return cgpa;
    }
}
