# Approach 1 :

def countDigits(num):
    count = 0
    while(num!=0):
        num = num//10 ## integer divison //, float divison /
        count+=1
    return count


# Approach 2 :

def countDigits2(num):
    x = str(num)
    return len(x)

# Approach 3 :

import math

def countDigits3(num):
    digits = math.floor(math.log10(num)+1)
    return digits


num = 12345

print('Approach 1')
print(f"The number of digits in {num} is {countDigits(num)}")

print('Approach 2')
print(f"The number of digits in {num} is {countDigits2(num)}")

print('Approach 3')
print(f"The number of digits in {num} is {countDigits3(num)}")