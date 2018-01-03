# C-Programming-Exercise-2
Write a program to calculate the hashing table of input data. The program reads from the standard input the table size k. The program reads the data to be hashed from a text file named “input.txt”. Then it calculates the hashing table  
After the program reads the size k, open and reads the data from “input.txt”. Then it displays some statistics.  
The “input.txt” file consists of records (strings, and may contain spaces) each record is in a separate line. Note that the space is a part of the record to be hashed.  
The statistics to be displayed is as follows (each line terminated by a new line).  
• The number of entries with collision is xxx (xxx is an integer left justified in 5 digits, note there is a space between is and the first digit), where a collision is a table entry that received.  
• The number of unused entries is xxx (again xxx is an integer left justified in 5 digits, the unused entries are the entries in the k-length table where no strings are mapped).  
