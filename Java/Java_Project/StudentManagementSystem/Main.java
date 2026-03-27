package Mursalin;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Student student = new Student();
        StudentManagementSystem sManagementSystem = new StudentManagementSystem();
        Registration registration =new Registration();
        ResultSystem rSystem = new ResultSystem();
        Course course = new Course();
        ArrayList<Integer> markList = new ArrayList<>();
        ArrayList<Double> gradeList = new ArrayList<>();
        ArrayList<Course> courseList = new ArrayList<>();


        student.setName(scan.nextLine());
        student.setId(scan.nextLine());
        sManagementSystem.Add(student);

        course.setTitle(scan.nextLine());
        sManagementSystem.Add1(course);

        registration.addCourse(sManagementSystem.students.get(0),sManagementSystem.courses.get(0));

        courseList = registration.getCourses(sManagementSystem.students.get(0).getId());
        System.out.println("Course name : "+courseList.get(0).getTitle());
        
        rSystem.enterMark(student, 78);
        rSystem.courseWiseGrade();
        markList = rSystem.getMarks(sManagementSystem.students.get(0).getId());
        System.out.println("mark : "+markList.get(0));
        gradeList = rSystem.getCourseGrades(sManagementSystem.students.get(0).getId());
        System.out.println("grade : "+gradeList.get(0));

        sManagementSystem.resutl(sManagementSystem.students.get(0));
        //System.out.println(rSystem.studentCgpa.get(sManagementSystem.students.get(0)));

        scan.close();
    }
}
