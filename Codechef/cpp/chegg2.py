from tkinter import *
import tkinter as tk


#creating an instance
win = Tk()
# creating the entrybox
entry1 = tk.Entry()
entry1.place(x=300, y=90)
entry2 = tk.Entry()
entry2.place(x=300, y=140)


#function to clear the existing text first and then print the square
def get_square(event):
    entry2.delete("0", "end")
    x= entry1.get()
    x = int(x)
    entry2.insert(0, string= x*x)

#creating the labels
win.title("square")
text1 = Label(text="Enter the value of N: ", font=("Times", 12))
text1.place(x=70,y=90)
text2 = Label(text="Here is the square of N: ", font=("Times", 12))
text2.place(x=70,y=140)
text3 = Label(text="Student Name: ROLL NO", font=("Times", 12), bg='red')
text3.place(x=130,y=190)
win.bind('<Return>', get_square)

win.geometry("600x400") #dimensions of the box
win.mainloop()
