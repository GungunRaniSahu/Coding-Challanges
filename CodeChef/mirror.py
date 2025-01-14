"Accepts the count of test cases - t - in the 1st line"
"The only line of each test case consists of an integer N"

"You need to generate the following output - Change the sign of N."
"That is, if the input is 4, output −4. If the input is −5, output 5."

t = int(input())        

for i in range(t):      
    n = int(input())    
    
    print(-n)
