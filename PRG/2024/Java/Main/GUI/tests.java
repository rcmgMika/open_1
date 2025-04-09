import javax.swing.*;
import java.awt.event.*;
import java.awt.FlowLayout;
import java.awt.BorderLayout;
import java.io.*;

public class tests extends JFrame implements ActionListener {
    JMenuBar bar = new JMenuBar();
    JMenu file = new JMenu("File");
    JMenu edit = new JMenu("Edit");
    JMenu help = new JMenu("Help");
    JMenuItem load = new JMenuItem("load");
    JMenuItem save = new JMenuItem("save");
    JMenuItem exit = new JMenuItem("exit");
    JTextArea text = new JTextArea();
    JFileChooser chooseFile;
    
    public void gui() {
        this.setSize(640, 640);
        this.setTitle("Akim's Notes");
        this.setResizable(false);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        this.bar.add(file);
        this.bar.add(edit);
        this.bar.add(help);

        this.file.add(load);
        this.load.addActionListener(this);
        this.file.add(save);
        this.save.addActionListener(this);
        this.file.add(exit);
        this.exit.addActionListener(this);

        this.setJMenuBar(bar);
        this.setVisible(true);
        this.add(new JScrollPane(text), BorderLayout.CENTER);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == load) {
            System.out.println("Loading file...");
        } else if (e.getSource() == save) {
            System.out.println("Saving file...");
        } else {
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        tests ping = new tests();
        ping.gui();
    }

}