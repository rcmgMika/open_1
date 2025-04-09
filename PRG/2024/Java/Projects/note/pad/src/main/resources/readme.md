## Note in Java

#### This is a program that loads, saves, and edit text files in Java. Made from JFrame, BorderLayout, JFileChooser, and etc.

```java

import java.io.*;
import java.awt.*;
import java.awt.event.*;

import javax.swing.*;
import javax.swing.filechooser.FileNameExtensionFilter;

public class Main extends JFrame implements ActionListener {

    int fontDefaultSize = 14;
    Font defaultFont = new Font(Font.SANS_SERIF, Font.PLAIN, fontDefaultSize);

    MenuBar menu = new MenuBar();
    Menu file = new Menu("file"), fontSize = new Menu("font size"), help = new Menu("help");
    MenuItem load = new MenuItem("load"), save = new MenuItem("save"), exit = new MenuItem("exit"),
            increase = new MenuItem("increase font"), decrease = new MenuItem("decrease font"),
            customSize = new MenuItem("custom font size"), about = new MenuItem("about");

    JFileChooser acceptFile = new JFileChooser();
    FileNameExtensionFilter textOnly = new FileNameExtensionFilter("text file (*.txt)", "txt");

    JTextArea textArea = new JTextArea();;
    JScrollPane scrollableArea;

    Main() {
        setTitle("RMA Note");
        setSize(1280, 780);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setIconImage(new ImageIcon("PRG/2024/Java/Projects/note/pad/src/main/java/note/92481.jpg").getImage());

        scrollableArea = new JScrollPane(textArea);
        textArea.setFont(new Font(Font.SANS_SERIF, Font.PLAIN, fontDefaultSize));
        add(scrollableArea, BorderLayout.CENTER);
    }

    void window() {
        menu.add(file);
        menu.add(fontSize);
        menu.add(help);
        menu.setFont(new Font(Font.SANS_SERIF, Font.BOLD, 14));
        file.add(load);
        file.add(save);
        file.add(exit);
        fontSize.add(increase);
        fontSize.add(decrease);
        fontSize.add(customSize);
        help.add(about);
        setMenuBar(menu);

        load.addActionListener(e -> loadFile());
        save.addActionListener(e -> saveFile());
        exit.addActionListener(e -> System.exit(1));
        about.addActionListener(e -> aboutMe());

        increase.addActionListener(this);
        decrease.addActionListener(this);
        customSize.addActionListener(this);

        acceptFile.setFileFilter(textOnly);
        setVisible(true);
    }

    void loadFile() {
        int status = acceptFile.showOpenDialog(this);

        if (status == JFileChooser.APPROVE_OPTION) {
            try (BufferedReader thisFile = new BufferedReader(new FileReader(acceptFile.getSelectedFile()))) {
                textArea.read(thisFile, null);
            } catch (IOException e) {
                JOptionPane.showMessageDialog(this, "Error in opening file. Try again.", "File Open Error",
                        JOptionPane.ERROR_MESSAGE);
            }
        }
    }

    void saveFile() {
        int status = acceptFile.showSaveDialog(this);

        if (status == JFileChooser.APPROVE_OPTION) {
            try (BufferedWriter thisFile = new BufferedWriter(new FileWriter(acceptFile.getSelectedFile()))) {
                textArea.write(thisFile);
            } catch (IOException e) {
                JOptionPane.showMessageDialog(this, "Error saving file. Try Again", "Error save file",
                        JOptionPane.ERROR_MESSAGE);
            }
        }
    }

    void aboutMe() {
        JOptionPane.showMessageDialog(this,
                "This is the about page of this note taking tool.\nThis was made by Robby. It is very simple and user friendly.",
                "About", JOptionPane.INFORMATION_MESSAGE);
    }

    @Override
    public void actionPerformed(ActionEvent c) {
        remove(scrollableArea);
        remove(textArea);
        if (c.getSource() == increase) {
            fontDefaultSize += 2;
            System.out.println("call");
        } else if (c.getSource() == decrease) {
            fontDefaultSize -= 2;
            System.out.println("call");
        } else if (c.getSource() == customSize) {
            try {
                fontDefaultSize = Integer.parseInt(JOptionPane.showInputDialog(this, "Input your font size",
                        "custom font size", JOptionPane.INFORMATION_MESSAGE));
                System.out.println("call");
            } catch (Exception p) {
                JOptionPane.showMessageDialog(this, "Invalid font size", "Error font size", JOptionPane.ERROR_MESSAGE);
            }
        }
        textArea.setFont(new Font(Font.SANS_SERIF, Font.PLAIN, fontDefaultSize));
        scrollableArea = new JScrollPane(textArea);
        add(scrollableArea);
        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new Main().window());
    }
}

```
