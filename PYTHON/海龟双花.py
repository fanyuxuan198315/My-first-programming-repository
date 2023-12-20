import turtle
 
t = turtle.Pen()
 
 
 
t.color('yellow','pink')
 
t.begin_fill()
 
for i in range(6):
 
    for j in range(2):
 
        for k in range(90):
 
            t.forward(1)
 
            t.right(1)
 
        t.right(90)
 
    t.right(60)
 
t.end_fill()
 
 
 
t.penup()
 
t.goto(200,0)
 
t.pendown()
 
 
 
t.color('pink','yellow')
 
t.begin_fill()
 
for i in range(10):
 
    for j in range(2):
 
        for  k in range(2):
 
            t.forward(35)
 
            t.right(60)
 
        t.right(60)
 
    t.right(36)
 
t.end_fill()
 
 
 
turtle.done()