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
 
 
 
turtle.done()