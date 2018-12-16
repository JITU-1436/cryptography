from tkinter import*
from tkinter import*
import random 
import time
def btnClick(number):
        global operator
        operator=operator+str(number)
        text_Input.set(operator)

def bill():

	var1 = Tk()
	var1.geometry("1367x1000")
	var1.title("Restaurant Automation Syste	m")
	var2 = Frame(var1,width=1366,height=60,bg="powder blue",relief=SUNKEN)
	var2.pack(side=TOP)
	var3 = Frame(var1,width =800,height =767,bg = "powder blue",relief =SUNKEN)
	var3.pack(side =LEFT)
	var4 = Frame(var1,width =300,height =767,bg = "powder blue",relief =SUNKEN)
	var4.pack(side =RIGHT)
	#-----------------------------------Frame1 information---------------------------
	localtime = time.asctime(time.localtime(time.time()))
	f1 =Label(var2,font=('arial',40,'bold'),text = 'Restaurant Automation systems',fg = 'sky blue',bd =10,anchor =W)
	f1.grid(row=0,column=0)
	f2 =Label(var2,font=('arial',10,'bold'),text = localtime,fg = 'sky blue',bd =10,anchor =W)
	f2.grid(row=1,column=0)	
	#------------------------------------Frame 2 Information-----------------------------------------------
	text = StringVar()
	text_Input =StringVar()
	operator =""
	def btnClearDisplay():
	    global operator
	    operator=""
	    text.set("")
	def btnClearDDisplay():
	    global operator
	    operator=""
	    text_Input.set("")

	def btnIsEqual():
	    global operator
	    sumup=str(eval(operator))
	    text_Input.set(sumup)
	    operator =""
	label1 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Item Code',fg = 'Black')
	label1.grid(row=0,column=0)
	label2 =Entry(var3,font=('arial',10,'bold'),bd=8,textvariable = text,bg = 'brown',fg = 'sky blue')
	label2.grid(row=0,column=1,padx=8,pady=8)
	label3 = Label(var3,font=('arial',10,'bold'),bd=8,text = 'Drinks',fg = 'Black')
	label3.grid(row=0,column=2,padx=20,pady=8)
	label4 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label4.grid(row=0,column=3,padx=8,pady=8)
	label5 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Item Code',fg = 'Black')
	label5.grid(row=1,column=0)
	label6 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label6.grid(row=1,column=1,padx=8,pady=8)
	label7 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Drinks',fg = 'Black')
	label7.grid(row=1,column=2,padx=20,pady=8)
	label8 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label8.grid(row=1,column=3,padx=8,pady=8)
	label9 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Item Code',fg = 'Black')
	label9.grid(row=2,column=0)
	label10 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label10.grid(row=2,column=1,padx=8,pady=8)
	label11 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Drinks',fg = 'Black')
	label11.grid(row=2,column=2,padx=20,pady=8)
	label12 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label12.grid(row=2,column=3,padx=8,pady=8)
	label13 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Item Code',fg = 'Black')
	label13.grid(row=3,column=0)
	label14 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label14.grid(row=3,column=1,padx=8,pady=8)
	label15 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Drinks',fg = 'Black')
	label15.grid(row=3,column=2,padx=20,pady=8)
	label16 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label16.grid(row=3,column=3,padx=8,pady=8)
	label17 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label17.grid(row=4,column=3,padx=8,pady=8)
	label18 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Item Code',fg = 'Black')
	label18.grid(row=4,column=0)
	label19 =Entry(var3,font=('arial',10,'bold'),bd=8,bg = 'brown',fg = 'sky blue')
	label19.grid(row=4,column=1,padx=8,pady=8)
	label20 =Label(var3,font=('arial',10,'bold'),bd=8,text = 'Drinks',fg = 'Black')
	label20.grid(row=4,column=2,padx=20,pady=8)
	btn0 =Button(var3,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = 'Total',relief=RIDGE,bg = 'brown',command=btnIsEqual,fg = 'sky blue',activebackground ="red")	
	btn0.grid(row=5,column=0)
	btnc =Button(var3,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = 'Reset',bg = 'brown',command=btnClearDisplay,fg = 'sky blue',activebackground ="red")
	btnc.grid(row=5,column=1)

	#..............................................Frame 3 Information(Calculator)...................................

	btn1 =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = '1',bg = 'brown',command=btnClick("1"),fg = 'sky blue',activebackground ="red")
	btn1.grid(row=0,column=0)
	btn2 =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = '2',bg = 'brown',command=lambda:btnClick("2"),fg = 'sky blue',activebackground ="red")
	btn2.grid(row=0,column=1)
	btn3 =Button(var4,font=('arial',20,'bold'),text = '3',padx =16,pady=16,bd=8,bg = 'brown',command=lambda:btnClick("3"),fg = 'sky blue',activebackground ="red")
	btn3.grid(row=0,column=2)
	Addition =Button(var4,font=('arial',20,'bold'),text = '+',bg = 'brown',fg = 'sky blue',command=lambda:btnClick("+"),padx =16,pady=16,bd=8,activebackground ="red")
	Addition.grid(row=0,column=3)
	btn4 =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = '4',bg = 'brown',command=lambda:btnClick("4"),fg = 'sky blue',activebackground ="red")
	btn4.grid(row=1,column=0)
	btn5 =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = '5',bg = 'brown',command=lambda:btnClick("5"),fg = 'sky blue',activebackground ="red")
	btn5.grid(row=1,column=1)
	btn6 =Button(var4,font=('arial',20,'bold'),text = '6',padx =16,pady=16,bd=8,bg = 'brown',command=lambda:btnClick("6"),fg = 'sky blue',activebackground ="red")
	btn6.grid(row=1,column=2)
	sub =Button(var4,font=('arial',20,'bold'),text = '-',bg = 'brown',fg = 'sky blue',command=lambda:btnClick("-"),padx =16,pady=16,bd=8,activebackground ="red")
	sub.grid(row=1,column=3)
	btn7 =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = '7',bg = 'brown',command=lambda:btnClick("7"),fg = 'sky blue',activebackground ="red")
	btn7.grid(row=2,column=0)
	btn8 =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = '8',bg = 'brown',command=lambda:btnClick("8"),fg = 'sky blue',activebackground ="red")
	btn8.grid(row=2,column=1)
	btn9 =Button(var4,font=('arial',20,'bold'),text = '9',padx =16,pady=16,bd=8,bg = 'brown',command=lambda:btnClick("9"),fg = 'sky blue',activebackground ="red")
	btn9.grid(row=2,column=2)
	mul =Button(var4,font=('arial',20,'bold'),text = '*',fg = 'sky blue',padx =16,bg = 'brown',command=lambda:btnClick("*"),pady=16,bd=8,activebackground ="red")
	mul.grid(row=2,column=3)
	btn0 =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = '0',bg = 'brown',command=lambda:btnClick("0"),fg = 'sky blue',activebackground ="red")
	btn0.grid(row=3,column=0)
	btnc =Button(var4,font=('arial',20,'bold'),padx =16,pady=16,bd=8,text = 'C',bg = 'brown',command=btnClearDDisplay,fg = 'sky blue',activebackground ="red")
	btnc.grid(row=3,column=1)
	equal =Button(var4,font=('arial',20,'bold'),text = '=',padx =16,pady=16,bd=8,command=btnIsEqual,bg = 'brown',fg = 'sky blue',activebackground ="red")
	equal.grid(row=3,column=2)
	div =Button(var4,font=('arial',20,'bold'),text = '/',fg = 'sky blue',bg = 'brown',command=lambda:btnClick("/"),padx 	=16,pady=16,bd=8,activebackground ="red")
	div.grid(row=3,column=3)
	txtDisplay = Entry(var4,font=('arial',20,'bold'),textvariable = text_Input,bg = 'brown',bd=30,insertwidth=4)
	txtDisplay.grid(columnspan=10)
	
	var1.mainloop()	
