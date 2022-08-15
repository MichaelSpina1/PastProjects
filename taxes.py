while True:
    try:
        income = int(input("Please enter your income: "))
    except ValueError:
        print("Invalid input, make sure to enter a number.")
        continue
    if income < 0:
        print("Invalid input, number is a negative number")
    else:
        break


while True:
    try:
        print("0-Single Filer")
        print("1-Married Jointly")
        print("2-Married Separately")
        print("3-Head of Household")
        status = int(input("Enter your filing status:"))

    except ValueError:
        print("Invalid input, make sure to enter a valid number.")
        continue
    if 0 <= status <= 3:
        break
    else:
        print("Invalid input, please enter a number 0-3 according to the options.")

    taxesPaid = 0

if status == 0 or status == 2:
    if 0 <= income <= 9875:
        taxesPaid = income * .10
    elif 9876 <= income <= 40125:
        taxesPaid = income * .12
    elif 40126 <= income <= 85525:
        taxesPaid = income * .22
    elif 85526 <= income <= 163300:
        taxesPaid = income * .24
    elif 163301 <= income <= 207350:
        taxesPaid = income * .32
    elif 207351 <= income <= 518400:
        taxesPaid = income * .35
    elif income >= 518401:
        taxesPaid = income * .37

elif status == 1:
    if 0 <= income <= 19750:
        taxesPaid = income * .10
    elif 19751 <= income <= 80250:
        taxesPaid = income * .12
    elif 80251 <= income <= 171050:
        taxesPaid = income * .22
    elif 171051 <= income <= 326600:
        taxesPaid = income * .24
    elif 326601 <= income <= 414700:
        taxesPaid = income * .32
    elif 414701 <= income <= 622050:
        taxesPaid = income * .35
    elif income >= 622051:
        taxesPaid = income * .37

elif status == 3:
    if 0 <= income <= 14100:
        taxesPaid = income * .10
    elif 14101 <= income <= 53700:
        taxesPaid = income * .12
    elif 53701 <= income <= 85500:
        taxesPaid = income * .22
    elif 85501 <= income <= 163300:
        taxesPaid = income * .24
    elif 163301 <= income <= 207350:
        taxesPaid = income * .32
    elif 207351 <= income <= 518400:
        taxesPaid = income * .35
    elif income >= 518401:
        taxesPaid = income * .37

print("You must pay $", taxesPaid, " in taxes this year.")