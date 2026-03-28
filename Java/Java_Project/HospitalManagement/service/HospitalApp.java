package service;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import building.RoomGui;
import building.WordGui;
import staff.DoctorGui;
import staff.NurseGui;

public class HospitalApp extends JFrame implements ActionListener{
    JPanel panel;
    public JButton button1,button2,button3,button4,button5,button6,button7,button8,button9,button10,button11,button12,button13;
    JLabel label1,label2,label3,label4;
    JTextArea tArea;
    JTextField tField1,tField2;

    
    public HospitalApp(){
        button1 = new JButton("Add Doctor");
        button1.setBounds(30,20,180,25);
        button1.setFocusable(false);
        button1.addActionListener(this);

        button2 = new JButton("Add Nurse");
        button2.setBounds(30,50,180,25);
        button2.setFocusable(false);
        button2.addActionListener(this);

        button3 = new JButton("Add Patient");
        button3.setBounds(30,80,180,25);
        button3.setFocusable(false);
        button3.addActionListener(this);

        button4 = new JButton("Add Room");
        button4.setBounds(30,110,180,25);
        button4.setFocusable(false);
        button4.addActionListener(this);

        button5 = new JButton("Add Ward");
        button5.setBounds(30,140,180,25);
        button5.setFocusable(false);
        button5.addActionListener(this);

        button6 = new JButton("Show Doctor Details");
        button6.setBounds(30,170,180,25);
        button6.setFocusable(false);
        button6.addActionListener(this);

        button7 = new JButton("Show Patient Details");
        button7.setBounds(30,200,180,25);
        button7.setFocusable(false);
        button7.addActionListener(this);

        button8 = new JButton("Show Nurse Details");
        button8.setBounds(30,230,180,25);
        button8.setFocusable(false);
        button8.addActionListener(this);

        button9 = new JButton("Assign Patient to Doctor");
        button9.setBounds(30,260,180,25);
        button9.setFocusable(false);
        button9.addActionListener(this);

        button10 = new JButton("Assign Patient to Ward");
        button10.setBounds(30,290,180,25);
        button10.setFocusable(false);
        button10.addActionListener(this);

        button11 = new JButton("Assign Nurse to Ward");
        button11.setBounds(30,320,180,25);
        button11.setFocusable(false);
        button11.addActionListener(this);

        button12 = new JButton("Exit");
        button12.setBounds(30,350,180,25);
        button12.setFocusable(false);
        button12.addActionListener(this);

        setTitle("Hospital Management System");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(650,460);
        this.setResizable(false);
        this.setLayout(null);
        this.add(button1);
        this.add(button2);
        this.add(button3);
        this.add(button4);
        this.add(button5);
        this.add(button6);
        this.add(button7);
        this.add(button8);
        this.add(button9);
        this.add(button10);
        this.add(button11);
        this.add(button12);
        this.setVisible(true);
    }

    public void actionPerformed(ActionEvent e){
        if(panel != null)remove(panel);

        if(e.getSource() == button1 ){
            label1 = new JLabel("Enter Doctor Information : ");
            label1.setBounds(20,15,180,25);
            label2 = new JLabel("Pateint capacity : ");
            label2.setBounds(20,225,110,25);
            
            DoctorGui dg = new DoctorGui();
            dg.setTextField();
            panel = dg.getPanel();
            panel.add(label1);
            panel.add(label2);
            this.add(panel);
            this.revalidate();
            this.repaint();
        }

        else if(e.getSource() == button2){
            label1 = new JLabel("Enter Nurse Information : ");
            label1.setBounds(20,15,180,25);
            label2 = new JLabel("Word capacity : ");
            label2.setBounds(20,225,110,25);

            NurseGui ng = new NurseGui();
            ng.setTextField();
            panel = ng.getPanel();
            panel.add(label1);
            panel.add(label2);
            this.add(panel);
            this.revalidate();
            this.repaint();
        }

        else if(e.getSource() == button3 ){
            label1 = new JLabel("Enter Patient Information : ");
            label1.setBounds(20,15,180,25);
            
            PatientGui pg = new PatientGui();
            panel = pg.getPanel();
            panel.add(label1);
            this.add(panel);
            this.revalidate();
            this.repaint();
        }

        else if(e.getSource() == button4){
            RoomGui rg = new RoomGui();
            panel = rg.getPanel();
            this.add(panel);
            this.revalidate();
            this.repaint();
           
        }

        else if(e.getSource() == button5){
            WordGui wg = new WordGui();
            panel = wg.getPanel();
            this.add(panel);
            this.revalidate();
            this.repaint();
        }

        else if(e.getSource() == button6 || e.getSource() == button7 || e.getSource() == button8){
            ManagementSystem mis = new ManagementSystem();
            tArea = new JTextArea();
            tArea.setBounds(0,0,340,310);
            tArea.setEditable(true);
            if(e.getSource() == button6) mis.showDoctor(tArea);
            if(e.getSource() == button7) mis.showPatient(tArea);
            if(e.getSource() == button8) mis.showNurse(tArea);

            JScrollPane scroll = new JScrollPane(tArea);
            scroll.setBounds(0,0,340,310);

            panel = new JPanel();
            panel.setBounds(240,40,340,310);
            panel.setBorder(BorderFactory.createLineBorder(Color.DARK_GRAY));
            panel.setLayout(null);
            panel.add(scroll);
            this.add(panel);
            this.revalidate();
            this.repaint();
        }

        else if(e.getSource() == button9 || e.getSource() == button10 || e.getSource() == button11){
            label1 = new JLabel("Enter Information : ");
            label1.setBounds(20,15,180,25);

            label2 = new JLabel("Patient Id : ");
            label2.setBounds(20,45,110,25);

            tField1 = new JTextField();
            tField1.setBounds(125,45,200,25);
            tField1.setBorder(BorderFactory.createLineBorder(Color.BLACK));

            label3 = new JLabel("Doctor Id : ");
            label3.setBounds(20,75,110,25);

            tField2 = new JTextField();
            tField2.setBounds(125,75,200,25);
            tField2.setBorder(BorderFactory.createLineBorder(Color.BLACK));

            button13 = new JButton("Assign");
            button13.setBounds(140,265,80,25);
            button13.setFocusable(false);  
            button13.addActionListener(this); 

            if(e.getSource() == button10)label3.setText("Word No : ");
            if(e.getSource() == button11){
                label2.setText("Nurse Id : ");
                label3.setText("Word No : ");
            }

            panel = new JPanel();
            panel.setBounds(240,40,340,310);
            panel.setBorder(BorderFactory.createLineBorder(Color.DARK_GRAY));
            panel.setLayout(null);
            panel.add(label1);
            panel.add(label2);
            panel.add(tField1);
            panel.add(label3);
            panel.add(tField2);
            panel.add(button13);
            this.add(panel);
            this.revalidate();
            this.repaint();
        }

        else if(e.getSource() == button12){
            System.exit(0);
        }

        else if(e.getSource() == button13){
            ManagementSystem mis = new ManagementSystem();

            String s1 = tField1.getText();
            String s2 = tField2.getText();

            if(label2.getText().equals("Patient Id : ") && label3.getText().equals("Doctor Id : ")){
                try{
                    mis.assignPatientToDoctor(s1,s2);
                    JOptionPane.showMessageDialog(null, "Assign patient to doctor successfully", "Assigning", JOptionPane.INFORMATION_MESSAGE);
                }
                catch(ArrayIndexOutOfBoundsException f){
                    label4.setText("This doctor is not available");
                }
            }
            else if(label2.getText().equals("Nurse Id : ") && label3.getText().equals("Word No : ")){
                try{
                    mis.assignNurseToWard(s1, s2);
                    JOptionPane.showMessageDialog(null, "Assign nurse to word successfully", "Assigning", JOptionPane.INFORMATION_MESSAGE);
                }
                catch(ArrayIndexOutOfBoundsException f){
                    label4.setText("Nurse is already full");
                }
            }
            else {
                try{
                    mis.assignPatientToWard(s1, s2);
                    JOptionPane.showMessageDialog(null, "Assign patient to word successfully", "Assigning", JOptionPane.INFORMATION_MESSAGE);
                }
                catch(ArrayIndexOutOfBoundsException f){
                    label4.setText("This doctor is not available");
                }
            }
        }
    }
    
}