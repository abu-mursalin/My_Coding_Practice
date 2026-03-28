package info;

public class Address {
    private String zipcode;
    private String street;
    private String district;

    public Address(String zipcode, String street, String district){
        this.zipcode=zipcode;
        this.street=street;
        this.district=district;
    }

    public String toString(){
        return "Zip code : "+this.zipcode+"\nStreet : "+this.street+"\nDistrict : "+this.district;
    }
}
