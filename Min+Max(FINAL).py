#Izveido funkciju ar kuru pārbaudīt vai skaitlis ir int
def inputNumber(message):
  while True:
#while true izmanto,lai būtu bezgalīgs cikls,līdz iegūst atbildi
    try:
       userInput = int(input(message))  
       # Ja nav ievadīts int,tad liek ievadīt vēlreiz     
    except ValueError:
       print("Not an integer! Try again.")
       continue 
       # Izdod ievadīto vērtību un ar break iziet no while loop
    else:
       return userInput 
       break 
     
answer = 'y'
while answer == 'y' or answer == 'Y' :
# importējam masīvu bibliotēku, lai varētu izveidot masīvu,kurā var ievietot skaitļus
  from array import *
# Izveidots tukšs masīvs,kurā skaitļus ievietot(i = integer; [] = tukšs array)
  numbers = array('i',[])
  amount = inputNumber("How many numbers do you want?")
  for i in range(amount):
        x = inputNumber("Please enter number")
        numbers.append(x) # Ievieto lietotāja ciparus array = numbers
# izmanto min un max funkciju, lai iegūtu lielāko un mazāko vērtību no lietotāja ievadītajiem skaitļiem
  maximum = int(max(numbers))
  minimum = int(min(numbers))
  print(maximum+minimum, maximum, minimum) 
  answer = input("Do you wish to continue?(Y/N)")
  
 
    



      
"""    _______________________________
      |a  |b  |c  |d  |e  |f  |min+max|
      |___|___|___|___|___|___|_______|
      |2  |4  |6  |7  |9  |11 |13     |
      |___|___|___|___|___|___|_______|
      |0  |9  |356|1  |104|555|555    |
      |___|___|___|___|___|___|_______|
      |-3 |50 |2  |56 |103|22 |100    |
      |___|___|___|___|___|___|_______|
      |1.5|5  |30 |15 |99 |405|410    |
      |___|___|___|___|___|___|_______|
Kļūdas = 1.5 izmeta kļūdas paziņojumu un vērtība tika ignorēta,aizvietota(1,5 aizvietoju ar 60)
"""
      