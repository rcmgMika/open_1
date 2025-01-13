import tkinter
from tkinter import messagebox
from tkinter import simpledialog

root = tkinter.Tk()
root.withdraw()

messagebox.showinfo("title", "This is an info box")
messagebox.askokcancel("title", "Ask ok or cancel")
messagebox.showerror("title", "This is an error laaaaaaaaaaaaaaaaaaaaa")
messagebox.askyesno("title", "ask yes or no")
simpledialog.askstring("title", "Enter a string: ")

