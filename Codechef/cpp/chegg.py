from tkinter import *

#creating an instance
win = Tk()

#function to change color to yellow
def changeColorToYellow():
    win.configure(bg='yellow')

#function to change color to red
def changeColorToRed():
    win.configure(bg='red')


win.title("message") #setting the title
win.bind("<Enter>", lambda _: changeColorToYellow())
win.bind("<Leave>", lambda _: changeColorToRed())

win.geometry("400x300")  #making the dimensions
win.mainloop()
