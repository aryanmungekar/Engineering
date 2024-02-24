bal=[]
net_amount=0

for i in range (0,5) :
        str=input("Enter Transaction : ")
        transaction= str.split()
        type=transaction[0]
        amount= int(transaction[1])
        if type=='d':
                net_amount = net_amount+amount
        if type=='w':
                net_amount = net_amount-amount
print("your bank balance is :",net_amount,"rs")