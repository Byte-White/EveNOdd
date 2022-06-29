#generates code for is_even(number) function in C++
max_uint64 = 18446744073709551614#change this variable to generate for a certain number
i = 0

file = open("generated_code.cpp","w")

while i<max_uint64:
    line = "else if(number == "
    line += str(i)
    line +=")\n"
    file.write(line)
    if(i%2 == 0):
        file.write("\treturn true; // Even\n")
    else:
        file.write("\treturn false; // Odd\n")
    i+=1
    print(i)
print("done! closing file...")
file.close()