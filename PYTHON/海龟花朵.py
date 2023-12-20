import turtle as t
t.speed(0)
 
#花柄
t.penup()
t.goto(0,-150)
t.pendown()
t.pensize(2)
t.setheading(90)
t.color('brown')
t.fd(300)
 
#花瓣
t.pensize(1)
t.color('black','red')
t.begin_fill()
for i in range(10):
    t.left(45)
    t.circle(80,60)
    t.left(120)
    t.circle(80,60)
t.end_fill()
 
#叶子
for i in range(2):
    t.penup()
    t.goto(0,10-50*i)
    x=20+80*i
    t.setheading(x)
    t.pendown()
    t.color('brown','green')
    t.begin_fill()
    t.circle(60,60)
    t.left(120)
    t.circle(60,60)
    t.end_fill()
t.hideturtle()