package Mursalin;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class Registration {

    Student student = new Student();
    ArrayList<Course>courses = new ArrayList<>();
    HashMap<Student,ArrayList<Course>>studentCourse = new HashMap<>();

    public void addCourse(Student student, Course course){
        this.student=student;
        courses = studentCourse.get(student);
        if(courses==null)courses=new ArrayList<>();
        courses.add(course);
        studentCourse.put(student , courses );
        System.out.println(course.getTitle()+" is added");
    }

    public ArrayList<Course> getCourses(String id){
        for(Map.Entry<Student,ArrayList<Course>>entry : studentCourse.entrySet()){
            String tempId = entry.getKey().getId();
            if(tempId.equals(id)){
                courses = entry.getValue();
                break;
            }
        }
        return courses;
    }
}
