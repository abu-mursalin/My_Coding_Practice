from tkinter import *
from tkinter import messagebox
from PIL import ImageTk,Image

def login_handle():
    email = email_input.get()
    password = password_input.get()

    if email == 'mursalin@gmail.com' and password == '1234' :
        messagebox.showinfo('Yahh','Login successsful !')

    else :
        messagebox.showerror('Error','Invalid email or password')

root = Tk()

root.title('Login Form')

#root.minsize(400,400)
#root.maxsize(400,400)
root.geometry('350x500')   #for fixed size
root.configure(background='#0096DC')

#root.iconbitmap('F:\Python_learning\FB_IMG_15957780615061063.jpg')
img = Image.open('FB_IMG_15957780615061063.jpg')
img.save('icon.ico')
root.iconbitmap('icon.ico')

#img = Image.open('FB_IMG_15957780615061063.jpg')
resized_img = img.resize((70,70))
img = ImageTk.PhotoImage(resized_img)
img_label = Label(root,image=img)
img_label.pack(pady=(10,10))

text_label = Label(root,text='Flipcart',fg='white',bg='#0096DC')
text_label.pack()
text_label.config(font=('verdana',24))

email_label = Label(root,text='Enter Email',fg='white',bg='#0096DC')
email_label.pack(pady=(20,5))
email_label.config(font=('verdana',14))

email_input = Entry(root,width=50)
email_input.pack(ipady=6,pady=(1,15))

password_label = Label(root,text='Enter Password',fg='white',bg='#0096DC')
password_label.pack(pady=(10,5))
password_label.config(font=('verdana',14))

password_input = Entry(root,width=50,)
password_input.pack(ipady=6,pady=(1,15))

login_button = Button(root,text='Login',fg='black',bg='white',width=10,height=1,command=login_handle)
login_button.pack(pady=(10,20))
login_button.config(font=('verdana',10))

root.mainloop()