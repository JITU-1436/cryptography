from tkinter import*

root = Tk()
root.geometry("1600x700+0+0")
root.title("Restaurant Management System")
text_Input=StringVar()
password=StringVar()
f1 = Frame(root,width = 1600,height=766,bd =8,relief=SOLID)
f1.pack(pady=100)
lblinfo = Label(f1, font=('aria', 10,'bold'), text="                         ", fg="white", anchor=W)
lblinfo.grid(row=0, column=0,pady =100)
lblinfo1 = Label(f1, font=('aria', 10,'bold'), text="username", fg="white")
lblinfo1.grid(row=1, column=1)
txtdisplay = Entry(f1,font=('ariel' ,20,'bold'), textvariable=text_Input , width =12,bd=5 ,insertwidth=2 ,bg="white",justify='right')
txtdisplay.grid(row =1,column=2,columnspan=4,pady =10)
lblinfo2 = Label(f1, font=('aria', 10,'bold'), text="Password", fg="white")
lblinfo2.grid(row=2, column=1)
txtdisplay2 = Entry(f1,font=('ariel' ,20,'bold'),show = '*' ,textvariable=password , width =12,bd=5 ,insertwidth=2 ,bg="white",justify='right')
txtdisplay2.grid(row =2,column=2,columnspan=4,pady =10)
#---------------------------------------------------------------------------------------------
submit=Button(f1,padx=16,pady=16,bd=4, fg="black", font=('ariel', 8 ,'bold'),text="Submit",bg="powder blue")
submit.grid(row=3,column=1,rowspan =4,columnspan =4)


root.mainloop()


