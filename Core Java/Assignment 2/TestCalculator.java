

class Calculator {
    void setAdd(int a, int b){
        System.out.println("Addition");
        int c = a+b;
        System.out.println(c);
    }
    void setAdd(double a, double b){
        double c = a+b;
        System.out.println(c);
    }
    void setAdd(int a, double b) {
        double c = a+b;
        System.out.println(c);
    }
    void setAdd(double a, int b) {
        double c = a+b;
        System.out.println(c);
    }
    void setSub(int a, int b) {
        System.out.println();
        System.out.println("Subtraction");
        int c = a-b;
        System.out.println(c);
    }
    void setSub(double a, double b){
        double c = a-b;
        System.out.println(c);
    }
    void setSub(int a, double b) {
        double c = a-b;
        System.out.println(c);
    }
    void setSub(double a, int b) {
        double c = a-b;
        System.out.println(c);
    }
    
    void setMul(int a, int b) {
        System.out.println();
        System.out.println("Multiplication");
        int c = a*b;
        System.out.println(c);
    }
    void setMul(double a, double b){
        double c = a*b;
        System.out.println(c);
    }
    void setMul(int a, double b) {
        double c = a*b;
        System.out.println(c);
    }
    void setMul(double a, int b) {
        double c = a*b;
        System.out.println(c);
    }

    void setDiv(int a, int b) {
        System.out.println();
        System.out.println("Division");
        int c = a/b;
        System.out.println(c);
    }
    void setDiv(double a, double b){
        double c = a/b;
        System.out.println(c);
    }
    void setDiv(int a, double b) {
        double c = a/b;
        System.out.println(c);
    }
    void setDiv(double a, int b) {
        double c = a/b;
        System.out.println(c);
    }
}
class TestCalculator {
    public static void main(String[] args) {
        Calculator c=new Calculator();
        c.setAdd(30, 20);
        c.setAdd(15.5, 11.5);
        c.setAdd(11,9.5);
        c.setAdd(15.5, 11);

        c.setSub(30, 20);
        c.setSub(15.5, 11.5);
        c.setSub(11,9.5);
        c.setSub(15.5, 11);

        c.setMul(30, 20);
        c.setMul(15.5, 11.5);
        c.setMul(11,9.5);
        c.setMul(15.5, 11);

        c.setDiv(30, 20);
        c.setDiv(15.5, 11.5);
        c.setDiv(11,9.5);
        c.setDiv(15.5, 11);
    }
}
