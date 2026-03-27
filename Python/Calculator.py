from tkinter import *

first_num = result = 0
flag = True; operator = '+';mul_div = None

def digit_handle(num):
    if result_label['text'] == '0' :
        result_label['text'] = ''
    result_label.config(text=result_label['text']+str(num))
    express_label.config(text=express_label['text']+str(num))

def operator_handle(op):
    global first_num, result, operator, flag,mul_div
    if flag == True:
        first_num = int(result_label['text'])

    if op == '*' :
        if flag == False : 
            first_num *= int(result_label['text'])
        flag = False
        mul_div = op

    elif op == '/' :
        if flag == False : 
            first_num /= int(result_label['text'])
        flag = False
        mul_div = op   
    
    elif operator == '+' :
        if flag == False :
            if mul_div == '*' :
                first_num = first_num*int(result_label['text'])
            else :
                first_num = first_num/int(result_label['text'])

        result += first_num
        flag = True
    
    elif operator == '-' :
        if flag == False :
            if mul_div == '*' :
                first_num = first_num*int(result_label['text'])
            else :
                first_num = first_num/int(result_label['text'])

        result -= first_num
        flag = True
    
    

    express_label.config(text=express_label['text']+op)
    if op == '+' or op == '-' :
        operator = op
    
    if first_num == 0 and op == '/':
        result_label.config(text='Error')
        return
    
    result_label.config(text='')

def equal_handle():
    global result,operator,first_num,mul_div

    if operator == '+' :
        if flag == False :
            if mul_div == '*' :
                result += first_num*int(result_label['text'])
            else :
                result += first_num/int(result_label['text'])
        else :
            result += int(result_label['text'])
    
    elif operator == '-' :
        if flag == False :
            if mul_div == '*' :
                result += first_num*int(result_label['text'])
            else :
                result += first_num/int(result_label['text'])
        
        else :
            result -= int(result_label['text'])

    result_label.config(text=result)

def delete():
    global first_num, result, flag,mul_div
    result_label.config(text='0')
    express_label.config(text='')
    first_num = result = 0
    flag = True
    mul_div = None

root = Tk()
root.title('Calculator')
root.geometry('280x310')
root.resizable(0,0)
root.configure(background='black')

express_label = Label(root,text='',bg='black',fg='white')
express_label.grid(row=0,column=0,pady=(5,10),columnspan=5,sticky='e')
express_label.config(font=('verdana',18,'bold'))

result_label = Label(root,text='0',bg='black',fg='white')
result_label.grid(row=1,column=0,pady=(20,5),columnspan=5,sticky='e')
result_label.config(font=('verdana',18,'bold'))

btn_7 = Button(root,text='7',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(7))
btn_7.grid(row=2,column=0)
btn_7.config(font=('verdana'))

btn_8 = Button(root,text='8',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(8))
btn_8.grid(row=2,column=1)
btn_8.config(font=('verdana'))

btn_9 = Button(root,text='9',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(9))
btn_9.grid(row=2,column=2)
btn_9.config(font=('verdana'))

btn_add = Button(root,text='+',bg='#0096DC',fg='white',width=6,height=2,command=lambda :operator_handle('+'))
btn_add.grid(row=2,column=3)
btn_add.config(font=('verdana'))

btn_4 = Button(root,text='4',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(4))
btn_4.grid(row=3,column=0)
btn_4.config(font=('verdana'))

btn_5 = Button(root,text='5',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(5))
btn_5.grid(row=3,column=1)
btn_5.config(font=('verdana'))

btn_6 = Button(root,text='6',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(6))
btn_6.grid(row=3,column=2)
btn_6.config(font=('verdana'))

btn_sub = Button(root,text='-',bg='#0096DC',fg='white',width=6,height=2,command=lambda :operator_handle('-'))
btn_sub.grid(row=3,column=3)
btn_sub.config(font=('verdana'))

btn_1 = Button(root,text='1',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(1))
btn_1.grid(row=4,column=0)
btn_1.config(font=('verdana'))

btn_2 = Button(root,text='2',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(2))
btn_2.grid(row=4,column=1)
btn_2.config(font=('verdana'))

btn_3 = Button(root,text='3',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(3))
btn_3.grid(row=4,column=2)
btn_3.config(font=('verdana'))

btn_mul = Button(root,text='*',bg='#0096DC',fg='white',width=6,height=2,command=lambda :operator_handle('*'))
btn_mul.grid(row=4,column=3)
btn_mul.config(font=('verdana'))

btn_0 = Button(root,text='0',bg='#0096DC',fg='white',width=6,height=2,command=lambda :digit_handle(0))
btn_0.grid(row=5,column=0)
btn_0.config(font=('verdana'))

btn_del = Button(root,text='Del',bg='#0096DC',fg='white',width=6,height=2,command=delete)
btn_del.grid(row=5,column=1)
btn_del.config(font=('verdana'))

btn_equal = Button(root,text='=',bg='#0096DC',fg='white',width=6,height=2,command=equal_handle)
btn_equal.grid(row=5,column=2)
btn_equal.config(font=('verdana'))

btn_div = Button(root,text='/',bg='#0096DC',fg='white',width=6,height=2,command=lambda :operator_handle('/'))
btn_div.grid(row=5,column=3)
btn_div.config(font=('verdana'))

root.mainloop()