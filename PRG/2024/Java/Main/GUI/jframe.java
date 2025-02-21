import javax.swing.JFrame;
import javax.swing.JMenuBar;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import javax.swing.JLabel;
import javax.swing.border.Border;
import java.awt.BorderLayout;
import javax.swing.BorderFactory;
import java.awt.Color;
import java.awt.Font;
import java.awt.event.*;

import javax.swing.ImageIcon;

interface sample_ui {
    void set_frame();
    void set_menu();
}

class note implements sample_ui, ActionListener{

    @Override
    public void set_frame() {
        JFrame Window = new JFrame();// sets the GUI window
        JLabel label = new JLabel();// sets the GUI display, you can input texts and images
        ImageIcon image = new ImageIcon(
                "/home/akim/Downloads/tumblr_12af193cdf23b136e5948dffa334b980_8aafc778_1280.jpg"); // sets the logo
        Border border = BorderFactory.createLineBorder(Color.white, 3);

        // JFRAME
        Window.setTitle("Akim's Note"); // sets the GUI's title
        Window.setSize(690, 420); // sets the x and y dimensions
        Window.setResizable(true); // sets if the user can resize the gui
        Window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // sets what happens when a user closes a program. The
                                                               // default is hide on close
        Window.setVisible(true); // sets the frame visible. This is what shows the GUI

        Window.setIconImage(image.getImage());
        Window.getContentPane().setBackground(Color.white); // sets the background image
        Window.add(label);// adds a label
        Window.setLayout(null); //allows for label space configuration with setBounds

        // JLABEL
        label.setText("Akim's notes"); // sets the text
        label.setIcon(image); // sets the image

        label.setHorizontalTextPosition(JLabel.LEFT); // sets the text's position to the image
        label.setVerticalTextPosition(JLabel.CENTER); // sets the text's position to the image

        label.setHorizontalAlignment(JLabel.CENTER); // sets the label's position
        label.setVerticalAlignment(JLabel.CENTER); // sets the label's position

        label.setForeground(Color.yellow); // sets the color of the font
        label.setFont(new Font("MV Boli", Font.PLAIN, 20)); // sets the font, style, and size
        label.setIconTextGap(-25); // sets the gap within the image

        label.setBackground(Color.black); // sets the background of the label
        label.setOpaque(true); // makes the background apply
        label.setBorder(border); //

        label.setBounds(0, 0, 760, 760); //sets the x and y position, and width and height
        // Window.pack(); automatically layouts the label and JFrame to fit the contents of the contents within label. This must be after the add label and labels to work
    }

    JMenuItem load;
    JMenuItem save;
    JMenuItem exit;

    @Override
    public void set_menu(){
        JFrame GUI = new JFrame();

        GUI.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        GUI.setSize(420, 420);
        GUI.setResizable(false);
        GUI.setTitle("Akim's Notes");

        JMenuBar menu = new JMenuBar();
        JMenu file = new JMenu("File");
        JMenu edit = new JMenu("Edit");
        JMenu help = new JMenu("Help");
        load = new JMenuItem("load");
        save = new JMenuItem("save");
        exit = new JMenuItem("exit");

        file.add(load);
        file.add(save);
        file.add(exit);

        menu.add(file);
        menu.add(edit);
        menu.add(help);

        GUI.setJMenuBar(menu);
        GUI.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==load){

        }
    }


}

public class jframe{
    public static void main(String[] args) {
        note ui = new note();
        ui.set_menu();
    }
}
