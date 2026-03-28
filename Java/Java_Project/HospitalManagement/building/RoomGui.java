package building;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;
import service.ManagementSystem;

public class RoomGui implements ActionListener{
    JLabel label1,label2,label3,label4;
    JTextField tField1,tField2;
    JButton button1;
    JPanel panel;

    public RoomGui(){
        label1 = new JLabel("Enter Room Information : ");
        label1.setBounds(20,15,180,25);

        label2 = new JLabel("Room No : ");
        label2.setBounds(20,45,110,25);

        tField1 = new JTextField();
        tField1.setBounds(125,45,200,25);
        tField1.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        label3 = new JLabel("Room capacity : ");
        label3.setBounds(20,75,110,25);

        tField2 = new JTextField();
        tField2.setBounds(125,75,200,25);
        tField2.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        button1 = new JButton("Add");
        button1.setBounds(140,265,80,25);
        button1.setFocusable(false); 
        button1.addActionListener(this);  

        label4 = new JLabel();

        panel = new JPanel();
        panel.setBounds(240,40,340,310);
        panel.setBorder(BorderFactory.createLineBorder(Color.DARK_GRAY));
        panel.setLayout(null);
        panel.add(label1);
        panel.add(label2);
        panel.add(tField1);
        panel.add(label3);
        panel.add(tField2);
        panel.add(button1);
    }

    public JPanel getPanel(){
        return panel;
    }

    public void actionPerformed(ActionEvent e){
        if(e.getSource() == button1){
            String s1 = tField1.getText();
            String s2 = tField2.getText();
            int roomNo = 0, capacity = 0;
            
            try {
                roomNo = Integer.parseInt(s1);
                label4.setText("");
            } 
            catch (NumberFormatException f) {
                label4.setText("Invalid Room No.");
            }
        
            try {
                capacity = Integer.parseInt(s2);
                label4.setText("");
            } 
            catch (NumberFormatException f) {
                label4.setText("Invalid capacity.");
            }

            ManagementSystem mis = new ManagementSystem();
            Room room = new Room(capacity, roomNo);
            
            try{
                mis.addRoom(room);
                label4.setText("");
            }
            catch(ArrayIndexOutOfBoundsException f){
                label4.setText("Building is already full.");
            }

            JOptionPane.showMessageDialog(null, "Room added successfully", "Room", JOptionPane.INFORMATION_MESSAGE);
        }
    }
}
