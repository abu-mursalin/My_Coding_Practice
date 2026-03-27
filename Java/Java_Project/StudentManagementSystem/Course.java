package Mursalin;

public class Course {
    private String code;
    private String title;
    private double creditHour;
    private String type;
    private boolean prerequestic;

    public void setCode(String code){
        this.code = code;
    }

    public void setTitle(String title){
        this.title = title;
    }

    public void setCreditHour(double creditHour){
        this.creditHour = creditHour;
    }

    public void setType(String type){
        this.type = type;
    }

    public void setPrerequestic(boolean prerequestic){
        this.prerequestic = prerequestic;
    }

    public String getCode(){
        return code;
    }

    public String getTitle(){
        return title;
    }

    public double getCreditHour(){
        return creditHour;
    }

    public String getType(){
        return type;
    }

    public boolean getPrerequestic(){
        return prerequestic;
    }
}
 