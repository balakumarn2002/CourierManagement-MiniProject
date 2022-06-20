print("                  COURIER MANAGEMENT SYSTEM   ")
delilist=["\n\t1.mobile","2.dress","3.Laptop","4.Paper"]
PayDelivery=["\n\t1.Online Payment","2.Cash Payment"]
OnlinePay=["\n\t1.GPay","2.Phone Pe"]

def Details():
        Name = str(input("\n\tEnter the name        :"))
        Date = input("\n\tEnter the date            :")        
        from_address=input("\n\tEnter from_address :")
        to_address=input("\n\tEnter the to_address :")
        
        def Rep():
            print("\tdelivery no : ",No)
            print("\tName        : ",Name)
            print("\tDate        : ",Date)
            print("\tfrom_address: ",from_address)
            print("\tto_address  : ",to_address)
            
        print("\n\t------PayDelivery---------")
        amount=40
        print(*PayDelivery,sep='\n\t')
            
        PayDelivery_method = int(input("\n\tSELECT YOUR PAYMENT METHOD : "))            
        total=40*int(input("Enter no of kg:"))
        if PayDelivery_method == 1:
            print("\n\t--------Online Payment-------")
            print("\t Delivery Charge:",amount)
            print(*OnlinePay,sep='\n\t')
            Pay_Online_Payment=int(input("Choose the payment way: "))
            if Pay_Online_Payment == 1:
                print("\n\t**online payment*")
                print("\n\t GPay Payment")
                D=int(input("Enter the your UPI Pin: "))
                print("\n\t  Verified")
                print("\n\tPAYMENT PROCESSING")
                print("\n\tPAYMENT IS DONE")
                print("\n\tTotal Price:Rs.",total,"/-","\t\tRs.40 Delivery Charge")
                exit()
            elif Pay_Online_Payment == 2 :
                print("\n\t**online payment*")
                print("\n\t PhonePay Payment")
                UPI=int(input("Enter the your UPI Pin: "))
                print("Verified")    
                print("\n\tPAYMENT PROCESSING")
                print("\n\tPAYMENT IS DONE")
                print("\n\tRECEIPT")
                print("\n\tNo of delivery: ",deli)
                print("\n\tTotal Price:Rs.",total,"/-","\t\tRs.40 Delivery Charge")
                exit()
        else: 
            print("\n\tCASH DELIVERY / TO PAY ")
            print("\n\tDELIVERY CHARGE: ",amount)
            print("\n\tTotal Price:Rs.",total,"/-","\t\tRs.40 Delivery Charge")
            exit()
def Online_delivery():
    print(*delilist, sep='\n\t')
    type_of=int(input("Select the Choice: "))
            
    if type_of == 1 :
        print("\n\t DELIVERY TYPE : mobile")
        Details()
                
    elif type_of == 2 :
        print("\n\t DELIVERY TYPE : dress")
        Details()
                
    elif type_of == 3 :
        print("\n\t DELIVERY TYPE : laptop")
        Details()
            
    else :
        print("\n\t DELIVERY TYPE : paper")
        Details()
while True:
    choice=int(input("1.Online_delivery\n2.Details\nSelect ur choice:"))
    if choice==1:
       Online_delivery()
    if choice==2:
        Details()
    else:
         break
