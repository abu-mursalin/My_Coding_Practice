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

public class WordGui implements ActionListener{
    JLabel label1,label2,label3;
    JTextField tField1,tField2;
    JButton button1;
    JPanel panel;

    public WordGui(){
        label1 = new JLabel("Enter Ward Information : ");
        label1.setBounds(20,15,180,25);

        label2 = new JLabel("Ward No : ");
        label2.setBounds(20,45,110,25);

        tField1 = new JTextField();
        tField1.setBounds(125,45,200,25);
        tField1.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        label3 = new JLabel("Room No : ");
        label3.setBounds(20,75,110,25);

        tField2 = new JTextField();
        tField2.setBounds(125,75,200,25);
        tField2.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        button1 = new JButton("Add");
        button1.setBounds(140,265,80,25);
        button1.setFocusable(false);
        button1.addActionListener(this);

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
            String wordNo = tField1.getText();
            String s2 = tField2.getText();
            int roomNo = 0;

            if(!s2.equals("")){
                roomNo = Integer.parseInt(s2);
            }

            ManagementSystem mis = new ManagementSystem();
            Ward ward = new Ward(wordNo);
            mis.addWard(ward, roomNo);

            JOptionPane.showMessageDialog(null, "Word added successfully", "Word", JOptionPane.INFORMATION_MESSAGE);
        }
    }
}
