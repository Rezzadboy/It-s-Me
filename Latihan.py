import turtle as a
a.bgcolor("black")
a.speed(150)
a.width(5)

def curve():
    for i in range(200):
        a.right(1)
        a.forward(1)

def heart():
    a.color("red", "red")
    a.begin_fill()
    a.left(140)
    a.forward(113)
    curve()
    a.left(120)
    curve()
    a.forward(112)
    a.end_fill()

heart()
a.pencolor("black")
a.penup()
a.goto(0, 170)
a.pendown()


a.done()
