package info;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import java.awt.Color;

public class PersonGui {
    protected JPanel panel;
    protected JButton button1;
    protected JLabel label1,label2,label3,label4,label5,label6,label7,label8;
    protected JTextField tField1,tField2,tField3,tField4,tField5,tField6,tField7;

    public PersonGui(){
        label1 = new JLabel("Name : ");
        label1.setBounds(20,45,110,25);

        tField1 = new JTextField();
        tField1.setBounds(125,45,200,25);
        tField1.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        label2 = new JLabel("Zipcode : ");
        label2.setBounds(20,75,110,25);

        tField2 = new JTextField();
        tField2.setBounds(125,75,200,25);
        tField2.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        label3 = new JLabel("Street : ");
        label3.setBounds(20,105,110,25);

        tField3 = new JTextField();
        tField3.setBounds(125,105,200,25);
        tField3.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        label4 = new JLabel("District : ");
        label4.setBounds(20,135,110,25);

        tField4 = new JTextField();
        tField4.setBounds(125,135,200,25);
        tField4.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        label5 = new JLabel("Phone : ");
        label5.setBounds(20,165,110,25);

        tField5 = new JTextField();
        tField5.setBounds(125,165,200,25);
        tField5.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        label6 = new JLabel("Id : ");
        label6.setBounds(20,195,110,25);

        tField6 = new JTextField();
        tField6.setBounds(125,195,200,25);
        tField6.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        tField7 = new JTextField();
        tField7.setBounds(125,225,200,25);
        tField7.setBorder(BorderFactory.createLineBorder(Color.BLACK));

        button1 = new JButton("Add");
        button1.setBounds(140,265,80,25);
        button1.setFocusable(false);

        label7 = new JLabel();

        panel = new JPanel();
        panel.setBounds(240,40,340,310);
        panel.setBorder(BorderFactory.createLineBorder(Color.DARK_GRAY));
        panel.setLayout(null);
        panel.add(label1);
        panel.add(tField1);
        panel.add(label2);
        panel.add(tField2);
        panel.add(label3);
        panel.add(tField3);
        panel.add(label4);
        panel.add(tField4);
        panel.add(label5);
        panel.add(tField5);
        panel.add(label6);
        panel.add(tField6);
        panel.add(button1);
    }

    public JPanel getPanel(){
        return panel;
    }

    public void setTextField(){
        panel.add(tField7);
    }

}
