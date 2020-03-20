# Mario Solution

```
  1 #include <cs50.h>
  2 #include <stdio.h>
  3 int main(void)
  4 {
  5     printf("Mario\n");
  6     int height = 10;
  7 
  8     for(int i=0; i < height; i++)
  9     {
 10         for(int j= 0; j < height - i; j++)
 11             printf(" ");
 12         for(int k = 0; k < i + 1; k++)
 13             printf("#");
 14         for(int l = 0; l < 2; l++)
 15             putchar(' ');
 16         for(int o = 0; o <= i;o++)
 17             putchar('#');
 18         printf("\n");
 19 
 20     }
 21 
 22     return (0);
 23 }
~                            
```
# Explanation
---
Task given was to create this shape.  
```
         Mario
          
         ##  ##
        ###  ###
       ####  ####
      #####  #####
     ######  ######
    #######  #######
   ########  ########
  #########  #########
 ##########  ##########
```
It signifies our heroes adventure thru 2-dimensional space. 

# For loops
---
For loops have an initialization step and a base condition to allow them to continue executing. And an iterative value that increases or decreases(can't do both but can have more than one variable).
## Outer loop
The outer loop would be our individual rows.
## Inner loop
The inner loop would be our columns or characters.
---
As we step through our condition saying we want to start from 0 and progress an iteration as long as our variable named 'i' is less than but not equal to the height, we will increase the value by one during each loop.  
Top of the loop tests the base condition. The bottom of the loop will return to check the base condition. We can imagine the curly braces as directing the flow or keeping our iterative functionality alive or in scope of the computers CPU for only as long as our base condition is true.  
# Iteration Number 1
'i' is equal to zero. That's possible albeit very weird because I start counting at 1.  
Is 'i < height' ? 
Sure for now.
---
## Inner loop 
'j' is equal to zero. That's possible albeit very weird because I start counting at 1.
Is 'j < height - i' ?
# WHY?!
We need to print one line at a time. 
## WHY?!
Standard output(console window) doesn't support graphical support unless your using other C libraries and functions. In, order for our program to print it will print in the window one character at a time from the left most edge after your command prompt and command input has been entered and processed by the bash shell.  

```
Mario
| Loop 1 | Loop 2 | Loop 3 | Loop 4 |
|--- | --- | --- | --- |
| .......... | # | .. | # |
```


