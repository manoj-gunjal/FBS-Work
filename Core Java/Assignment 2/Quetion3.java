class Student {
    int rollNo;
    String name;
    double percentage;

    Student(int rollNo, String name, double percentage) {
        this.rollNo = rollNo;
        this.name = name;
        this.percentage = percentage;
    }
}

class Employee {
    int id;
    String name;
    double annualSalary;

    Employee(int id, String name, double annualSalary) {
        this.id = id;
        this.name = name;
        this.annualSalary = annualSalary;
    }
}

class Bank {

    // For Student
    void approveLoan(Student s) {

        if (s.percentage > 80) {
            System.out.println("Student: " + s.name);
            System.out.println("Loan Amount: Rs. 2,00,000");
        }
        else if (s.percentage >= 60) {
            System.out.println("Student: " + s.name);
            System.out.println("Loan Amount: Rs. 1,00,000");
        }
        else if (s.percentage >= 40) {
            System.out.println("Student: " + s.name);
            System.out.println("Loan Amount: Rs. 50,000");
        }
        else {
            System.out.println("Student: " + s.name);
            System.out.println("No loan approved");
        }
    }

    // For Employee
    void approveLoan(Employee e) {

        if (e.annualSalary > 12) {
            System.out.println("Employee: " + e.name);
            System.out.println("Loan Amount: Rs. 7,00,000");
        }
        else if (e.annualSalary >= 10) {
            System.out.println("Employee: " + e.name);
            System.out.println("Loan Amount: Rs. 6,00,000");
        }
        else if (e.annualSalary >= 6) {
            System.out.println("Employee: " + e.name);
            System.out.println("Loan Amount: Rs. 5,00,000");
        }
        else if (e.annualSalary >= 4) {
            System.out.println("Employee: " + e.name);
            System.out.println("Loan Amount: Rs. 4,00,000");
        }
        else {
            System.out.println("Employee: " + e.name);
            System.out.println("No loan approved");
        }
    }
}

class Quetion3 {
    public static void main(String[] args) {

        Student s = new Student(101, "Rahul", 85);

        Employee e = new Employee(501, "Amit", 11);

        Bank b = new Bank();

        b.approveLoan(s);
        System.out.println();

        b.approveLoan(e);
    }
}