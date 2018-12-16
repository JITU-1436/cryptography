from tkinter import*
import random
import time
from price import*
from bill import*
r = Tk()
r.geometry("1600x700+0+0")
r.title("Welcome In Restaurant Automation System")
#Tops = Frame(r,bg="white",width = 1600,height=50,relief=SUNKEN)
#Tops.pack(side=TOP)
f2 = Frame(relief=SUNKEN)
f2.pack(side=TOP)
lblinfo = Label(f2, font=('aria', 10,'bold'), text="                                     ", fg="white", anchor=W)
lblinfo.grid(row=0, column=0)
home=Button(f2,padx=16,pady=16,bd=4, fg="black", font=('ariel', 20 ,'bold'),text="Home",bg="powder blue")
home.grid(row=0,column=1)
payment=Button(f2,padx=16,pady=16,bd=4, fg="black", font=('ariel', 20 ,'bold'),text="Payment",bg="powder blue")
payment.grid(row=1,column=1)
price=Button(f2,padx=16,pady=16,bd=4, fg="black", font=('ariel', 20 ,'bold'),text="Show Price",bg="powder blue",command =price)
price.grid(row=2,column=1)
order=Button(f2,padx=16,pady=16,bd=4, fg="black", font=('ariel', 20 ,'bold'),text="Order",bg="powder blue" )
order.grid(row=3,column=1)
#---------------------------------------------------------------------------------------------
bill=Button(f2,padx=16,pady=16,bd=4, fg="black", font=('ariel', 20 ,'bold'),text="Billing",bg="powder blue",command=bill)
bill.grid(row=4,column=1)
logout=Button(f2,padx=16,pady=16,bd=4, fg="black", font=('ariel', 20 ,'bold'),text="Log Out",bg="powder blue" )
logout.grid(row=5,column=1)
    #btn6=Button(f2,padx=16,pady=16,bd=4, fg="black", font=('ariel', 20 ,'bold'),text="6",bg="powder blue", command=lambda: btnclick(6) )
    #btn6.grid(row=3,column=2)

r.mainloop()

