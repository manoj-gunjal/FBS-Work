class Shape {
    double area;
}
class Triangle {
    double base;
    double height;
    Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }
}
class Rectangle {
    double length;
    double breadth;
    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
}
class Circle {
    double radius;
    Circle(double radius) {
        this.radius = radius;
    }
}
class AreaCalculator {
    void calculateArea(Triangle t) {
        double area = 0.5 * t.base * t.height;
        System.out.println("Area of Triangle: " + area);
    }
    void calculateArea(Rectangle r) {
        double area = r.length * r.breadth;
        System.out.println("Area of Rectangle: " + area);
    }
    void calculateArea(Circle c) {
        double area = Math.PI * c.radius * c.radius;
        System.out.println("Area of Circle: " + area);
    }
}
class Question2 {
    public static void main(String[] args) {
        Triangle t = new Triangle(10, 5);
        Rectangle r = new Rectangle(10, 4);
        Circle c = new Circle(7);
        AreaCalculator ac = new AreaCalculator();
        ac.calculateArea(t);
        ac.calculateArea(r);
        ac.calculateArea(c);
    }
}