package GUI;

import javax.swing.JFrame;
import javax.swing.JTextArea;

import java.awt.Color;
import java.awt.TextArea;

import javax.swing.ImageIcon;

interface sample_ui {
    void set_frame();
}

class note implements sample_ui {
    @Override
    public void set_frame() {
        JFrame Window = new JFrame(); // sets the GUI window
        Window.setTitle("Akim's Note"); // sets the GUI's title
        Window.setSize(690, 420); // sets the x and y dimensions
        Window.setResizable(false); // sets if the user can resize the gui
        Window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // sets what happens when a user closes a program. The default is hide on close
        Window.setVisible(true); // sets the frame visible. This is what shows the GUI

        ImageIcon image = new ImageIcon ("PRG\\2024\\Java\\Main\\GUI\\Images\\logo.png"); // sets the logo
        Window.setIconImage(image.getImage());

        Window.getContentPane().setBackground(Color.white); // sets the background image
    }
}

public class jframe {
    public static void main(String[] args) {
        note ui = new note();
        ui.set_frame();
    }
}
