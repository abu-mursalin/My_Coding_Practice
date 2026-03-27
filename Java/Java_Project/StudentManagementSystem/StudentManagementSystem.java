package Mursalin;

import java.util.ArrayList;

public class StudentManagementSystem {

    ArrayList<Student>students = new ArrayList<>();
    ArrayList<Course>courses = new ArrayList<>();
    Registration registration = new Registration();
    ResultSystem rSystem = new ResultSystem();

    public void Add(Student student){
        students.add(student);
        System.out.println(student.getName()+" is added");
    }

    public void Add1(Course course){
        courses.add(course);
    }

    public void delete(Student student){
        students.remove(student);
        System.out.println(student.getName()+" is removed");
    }

    public void registration(Student student,Course course){
        registration.addCourse(student, course);
        System.out.println(student.getName()+", congratulations for completing your registration");
    }
     
    public void resutl(Student student){
        System.out.println("Your cgpa is : "+ rSystem.getCgpa(student));
    }
}
