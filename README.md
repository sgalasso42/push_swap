# push_swap
A program that can check if a stack is sorted, and also sorting it if it is not,<br/>
There is two stacks and rules to move numbers : ra, rb, sa, sb etc...
## Built with
C language
## Installing
- Git clone the repository
- Compile it with `make`
## Make it work
- Run `./checker [list of numbers]` and write a combination of move to check if you sorted it
- Run `./push_swap [list of numbers]` to get the right combination of move
## Rules
sa  : swap 2 first element of pile a<br/>
sb  : swap 2 first element of pile b<br/>
ss  : do sa and sb<br/>
pa  : push first element of pile b to pile a<br/>
pb  : push first element of pile a to pile b<br/>
ra  : rotate to the top all element of pile a<br/>
rb  : rotate to the top all element of pile b<br/>
rr  : do ra and rb<br/>
rra : rotate down all element of pile a<br/>
rrb : rotate down all element of pile b<br/>
rrr : do rra and rrb
## Example
```
> ./checker 3 2 1
> rra
> sa
```
## Author
Simon Galasso
