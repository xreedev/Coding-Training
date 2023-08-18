#design a vending machine which is dedicated for PEPSI, capacity of the machine is 200,stock in hand is 70,let the
#customer request for n bottles check whether the machine is having sufficient bottles if yes ,print n times TAKE UR PEPS
#otherwise available bottles count can be printed thise many times and display an additional message out of stock.At
#both the cases print the last line as HAPPY DRINKS

print("------VENDING MACHINE------")
capacity=200
stock=70
opt="Y"
while(opt=="Y" or opt=="y"):
    need = int(input("PLEASE ENTER THE NUMBER OF PEPSI YOU WANT"))

    if(stock==0):
     print("SORRY!OUT OF STOCK")
     print("HAPPY DRINKS")
    elif(need<=stock):
        for i in range(need):
            print("TAKE YOUR PEPSI")
        print("HAPPY DRINKS")
        stock=stock-need
    elif(need>stock):
        print("REQUIRED QUANTITY NOT AVAILABLE,QUANTITY PRESENT: ",stock)
        print("HAPPY DRINKS")
    opt=input("DO YOU WANT MORE :Y/N:")
