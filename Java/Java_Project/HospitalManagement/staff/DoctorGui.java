package staff;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;

import info.Address;
import info.PersonGui;
import service.ManagementSystem;

public class DoctorGui extends PersonGui implements ActionListener{

    public DoctorGui(){
        button1.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e){
        if(e.getSource() == button1){
            String name = tField1.getText();
            String zipcode = tField2.getText();
            String street = tField3.getText();
            String district = tField4.getText();
            String phone = tField5.getText();
            String id = tField6.getText();
            String capacit = tField7.getText();
            int capacity=0;

            try {
                capacity = Integer.parseInt(capacit);
                label7.setText("");
            } 
            catch (NumberFormatException f) {
                label7.setText("Invalid capacity.");
            }

            Address address = new Address(zipcode, street, district);
            Doctor doctor = new Doctor(name,address,phone,id,capacity);
            ManagementSystem mis = new ManagementSystem();
            try{
                mis.addDoctor(doctor);
                label7.setText("");
            }
            catch(ArrayIndexOutOfBoundsException f){
                label7.setText("Doctor is already full.");
            }
            
            JOptionPane.showMessageDialog(null, "Doctor added successfully", "Doctor", JOptionPane.INFORMATION_MESSAGE);
        }
    }   
    
    
}
