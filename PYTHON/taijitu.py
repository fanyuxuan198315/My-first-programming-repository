import turtle
pen = turtle.Turtle()
pen.circle(100)
# pen = turtle.Turtle()
pen.clear()
pen.up() # 将画笔从画布上提起。即在画笔移动过程中不画出笔迹
pen.setpos(0, -100) # 将画笔移动到画布的这个位置
pen.down() # 将画笔放到画布上。即之后画笔的移动都会留下笔迹

# 画阴鱼
pen.fillcolor("black")
pen.begin_fill()
pen.circle(100, 180)
pen.end_fill()

# pen.fillcolor("black")
pen.begin_fill()
pen.circle(50, 180)
pen.end_fill()

pen.fillcolor("white")
pen.begin_fill()
pen.circle(-50, 180)
pen.end_fill()

# 画阳鱼
pen.circle(-100, 180)

# 画阳眼
pen.up()
pen.setpos(0, 50-15)
pen.down()
# pen.fillcolor("white")
pen.begin_fill()
pen.circle(15)
pen.end_fill()

# 画阴眼
pen.up()
pen.setpos(0, -50-15)
pen.down()
pen.fillcolor("black")
pen.begin_fill()
pen.circle(15)
pen.end_fill()
