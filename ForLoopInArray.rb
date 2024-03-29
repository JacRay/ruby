the_count = [1, 2, 3, 4, 5]
fruits = ['apples', 'oranges', 'pearss', 'avacado']
change = [1, 'pennies', 2, 'dimes', 3, 'quarters']

#traditional style
for number in the_count
    puts "This is count #{number}"
end

#ruby style

fruits.each do |fruit|
    puts "A fruit of type: #{fruit}"
end

#different syntax

change.each {|i| puts "I got #{i}"}

elements = []

# then use the range operator to do 0 to 5 counts
(0..5).each do |i|
  puts "adding #{i} to the list."
  # pushes the i variable on the *end* of the list
  elements.push(i)
end

# now we can print them out too
elements.each {|i| puts "Element was: #{i}" }