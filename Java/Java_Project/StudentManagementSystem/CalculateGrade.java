package Mursalin;

public class CalculateGrade {
    private double grade;

    public double calGrade(int mark){
        if(mark>79)this.grade = 4.00;

        else if(mark>74)this.grade = 3.75;

        else if(mark>69)this.grade = 3.50;

        else if(mark>64)this.grade = 3.25;

        else if(mark>59)this.grade = 3.00;

        else if(mark>54)this.grade = 2.75;

        else if(mark>49)this.grade = 2.50;

        else if(mark>44)this.grade = 2.25;

        else if(mark>39)this.grade = 2.00;

        else this.grade = 0.00;

        return grade;
    }
}
