//Containers hold components, and cannot have action listeners

import java.awt.*;
import javax.swing.*;

public class notepad extends JFrame {
    int font_size = 11;

    JTextArea text_area = new JTextArea();

    ImageIcon icon = new ImageIcon("/home/akim/Downloads/Backyard.png");

    void Window() {
        setTitle("Notepad");
        setIconImage(icon.getImage());
        setSize(1280, 780);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        JMenuBar menu = new JMenuBar();
        JMenu file = new JMenu("file");
        JMenu edit = new JMenu("edit");
        JMenu help = new JMenu("help");
        JMenuItem decreaseFont = new JMenuItem("decrease font size");
        JMenuItem increaseFont = new JMenuItem("increase font size");
        JMenuItem customFont = new JMenuItem("custom font size");
        menu.add(file);
        menu.add(edit);
        menu.add(help);
        edit.add(increaseFont);
        edit.add(decreaseFont);
        edit.add(customFont);
        setJMenuBar(menu);

        text_area.setFont(new Font(Font.MONOSPACED, Font.PLAIN, font_size));
        add(text_area, BorderLayout.CENTER);

        decreaseFont.addActionListener(e -> setDecreaseFontSize(text_area));
        increaseFont.addActionListener(e -> setIncreaseFontSize(text_area));
        customFont.addActionListener(e -> setCustomFontSize(text_area));
        help.addActionListener(e -> help_me());

        setVisible(true);
    }

    void setDecreaseFontSize(JTextArea pilot) {
        remove(pilot);
        font_size -= 2;
        Window();
    }

    void setIncreaseFontSize(JTextArea pilot) {
        remove(pilot);
        font_size += 2;
        Window();
    }

    void setCustomFontSize(JTextArea pilot) {
        remove(pilot);
        while (true) {
            String temp = JOptionPane.showInputDialog(this, "Enter font size: ");
            try {
                font_size = Integer.parseInt(temp);
            } catch (Exception e) {
                continue;
            }
            break;
        }
        Window();
    }

    void help_me() {
        System.out.println("Shit!");
        JOptionPane.showMessageDialog(this,
                "Hello there! This contains all the necessary tools for you to have your investigations ready!");

    }

    public static void main(String[] args) {
        notepad pDiddy = new notepad();
        pDiddy.Window();
    }

}