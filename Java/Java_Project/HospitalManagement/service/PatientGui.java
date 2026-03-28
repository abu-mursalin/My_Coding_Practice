package service;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JOptionPane;
import info.Address;
import info.PersonGui;

public class PatientGui extends PersonGui implements ActionListener{
    JButton button2;

    public PatientGui(){
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

            Address address = new Address(zipcode, street, district);
            Patient patient = new Patient(name,address,phone,id);
            ManagementSystem mis = new ManagementSystem();
            
            try{
                mis.addPatient(patient);
                label7.setText("");
            }
            catch(ArrayIndexOutOfBoundsException f){
                label7.setText("Doctor is already full.");
            }

            JOptionPane.showMessageDialog(null, "Patient added successfully", "Patient", JOptionPane.INFORMATION_MESSAGE);
        }
    }
}
