
<h1>Handbook on Programming in ?????</h1>

**AP Computer Science Principles 2023-2024**

Kayden Weatherford

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->


___





<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
-->




___





# 1. Compiling and Running

The run button sucks so just Compile and Run it in Shell.
C++ Compile and Run Statement:
### g++ -o (Folder)/(Executible Name).exe (Folder)/(C++ File Name).cpp && ./(Folder)/(Executible Name).exe



___




# 2. Data Types

| Type | Keyword |
|------|------|
| Boolean | bool |
| Character | char |
| Integer | int |
| Floating Point | float |
| Double Floating Point | double |
| Valueless | void |
| Wide character | wchar_t |

## Modifiers

* signed
* unsigned
* short
* long

### Modifer Types

| Type | Bit Width | Typical Range | 
|------|------|-----|
| char | 1byte | -127 to 127 or 0 to 255 | 
| unsigned char |	1byte | 0 to 255 |
|signed char | 1byte | -127 to 127 |
| int | 4bytes	| -2147483648 to 2147483647|
| unsigned int |	4bytes |	0 to 4294967295|
| signed int |	4bytes |	-2147483648 to 2147483647 |
| short int |	2bytes |	-32768 to 32767 |
| unsigned short int |	2bytes |	0 to 65,535 |
| signed short int |	2bytes |	-32768 to 32767 |
| long int |	8bytes |	-9223372036854775808 to 9223372036854775807 |
| signed long int |	8bytes |	same as long int |
| unsigned long int |	8bytes |	0 to 18446744073709551615 |
| long long int |	8bytes |	-(2^63) to (2^63)-1 |
| unsigned long long int |	8bytes |	0 to 18,446,744,073,709,551,615 |
| float |	4bytes |
| double |	8bytes |
| long double |	12bytes |
| wchar_t |	2 or 4 bytes |	1 wide character |

___



# 3. Console I/O

| Syntax | Discription |
|-----|-----|
|cin|standard input stream|
|cout|	standard output stream|
|cerr|	standard error (output) stream|
|clog|	standard logging (output) stream|

### Standard Input/Output

## C++
```
int x; 
cin >> x; // Cin = C++ Input
cout << "\nThe value of x is: " << x; // C++ Output
```

## C
```
scanf()
printf()



___





# 4. Arithmetic Operations

|Operator	Name	|Description	|Example|
|-----|-----|----|
|+	|Addition	Adds together two values	|x + y	|
|-	|Subtraction	Subtracts one value from another	|x - y	|
|*	|Multiplication	Multiplies two values	|x * y	|
|/	|Division	Divides one value by another	|x / y	|
|%	|Modulus	Returns the division remainder	|x % y	|
|++	|Increment	Increases the value of a variable by 1	|++x	|
|--	|Decrement	Decreases the value of a variable by 1	|--x	|



___




# 5. Assignment Operations

| Operator | Syntax |
|-----|----|
|simple assignment	|a = b|
|addition assignment	|a += b|
|subtraction assignment	|a -= b|
|multiplication assignment	|a *= b|
|division assignment	|a /= b|
|remainder assignment	|a %= b|
|bitwise AND assignment	|a &= b|
|bitwise OR assignment	| a \|= b|	
|bitwise XOR assignment	|a ^= b|	
|bitwise left shift assignment	|a <<= b|
|bitwise right shift assignment	|a >>= b|	



___





# 6. Comments

Using "//" you can make a comment.

Ex:
// A comment could be made here!



___





# 7. Decision Structures

if statement
  if(status == true)
  {
    ...
  }
  
if..else statements


nested if statements


if-else-if ladder


switch statements


Jump Statements: 
  break
  continue
  goto
  return




___





# 8. Conditional Operators

???





___





# 9. Logic Operators

???





___





# 10. Advanced Decision Structures

???





___





# 11. String Methods

???





___





# 12. Random Generation

???





___





# 13. Looping Structures

???





___





# 14. Functions/Methods

???





___





# 15. Elementary Data Structures

???





## 15.1 Arrays/Lists

???






## 15.2 Matrices

???





___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)

Handbook Template.md
Displaying Handbook Template.md.
