package gui_practice;

import java.awt.Color;
import javax.swing.*;

public class MyFrame extends JFrame{
    MyFrame(){
        this.setTitle("Abu Mursalin");
        this.setSize(500,500);
        this.setResizable(false);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        ImageIcon image = new ImageIcon("F:\\N\\gui_practice\\gui_practice\\icon.jpg");
        this.setIconImage(image.getImage());

        //frame.getContentPane().setBackground(Color.MAGENTA);
        this.getContentPane().setBackground(new Color(10,80,150));

        this.setVisible(true);
    }
}
