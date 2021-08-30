# print print and go to next line without /n
# puts need /n to move to next line
print "Enter your age:" 
age = gets.chomp
# gets.chomp gets in string to input int use chomp.to_i
puts "Your age is #{age}\n"
print "Enter your Height"
height = gets.chomp.to_i
puts "Your Hight is #{height}"