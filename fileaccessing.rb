filename = ARGV.first
#accepting filename as argument
txt = open(filename)
#opening a pointer to  the file
puts "File name is: #{filename}"
#using read function to read the content of file
print txt.read
txt.close()
#other file functions are:
#readline - readd one line of the file
#write('stuff') - write 'stuff' to the file
#seek(0) - move the read or write location to the beginnng
#ctrl + c will exit the running
#use stdin.gets to accept a enter key