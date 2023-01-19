# push_swap
Because Swap_push isn’t as natural
```
The rules
You have 2 stacks named a and b.
• At the beginning: The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
• The stack b is empty.
• The goal is to sort in ascending order numbers into stack a. To do so you have the
following operations at your disposal:
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.```

First of all,
Sorting of 2 and 3 values is bruteforce.

For all other values:
Part 1:
I split my data into different stacks while pre-sorting them.
If the sent data is above the median data of the stack, then I pb, otherwise I pb then rb in order to re-sort my b-stack directly.

Part 2:
Once all my stack b is filled, I will send the maximum data in my stack a, but with one detail, if my second maximum value is closer than my first maximum value, then I will send the one if then its.

Optimisation:
I also have a function that allows me to transform my ra and rb that follow each other into rr, the same for my rrr.
