from tkinter import *
from PIL import ImageTk,Image
import os

def button_handle():
    global counter
    if counter == len(img_array):
        counter = 0
    
    img_label.config(image=img_array[counter])
    counter += 1

counter = 1
root = Tk()

root.title('WallPaper Viewer')
root.geometry(('300x450'))
root.configure(background='black')

files = os.listdir('Wallpaper')
img_array = []

for file in files:
    img = Image.open(os.path.join('Wallpaper',file))
    img = img.resize((250,350))
    img = ImageTk.PhotoImage(img)
    img_array.append(img)

img_label = Label(root,image=img_array[0])
img_label.pack(pady=(23,25))

next_button = Button(root,text='Next',command=button_handle)
next_button.pack(ipadx=15)
next_button.config(font='verdana')

root.mainloop()