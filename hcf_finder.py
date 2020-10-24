#finding hcf using Euclids division lemma
def HCF(NO1, NO2):
    if NO2>NO1:
        temp = NO1
        NO1 = NO2
        NO2 = temp
        del temp
        
    while True:
        rem = NO1 % NO2
        if rem != 0:
            NO1 = NO2
            NO2 = rem
        else:
            return NO2
            break

num1 = int(input("Please enter the first number: "))
num2 = int(input("Please enter the second number: "))

hcf = HCF(num1, num2)

print(f"The HCF of the {num1} & {num2} is: {hcf}")
