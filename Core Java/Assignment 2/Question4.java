class Time {
    int hr;
    int min;
    int sec;
    Time(int hr, int min, int sec) {
        this.hr = hr;
        this.min = min;
        this.sec = sec;
    }
    Time add(Time t) {
        int totalSec = this.sec + t.sec;
        int carryMin = totalSec / 60;
        int seconds = totalSec % 60;
        int totalMin = this.min + t.min + carryMin;
        int carryHr = totalMin / 60;
        int minutes = totalMin % 60;
        int hours = (this.hr + t.hr + carryHr) % 24;
        return new Time(hours, minutes, seconds);
    }
    Time add(Time t, int value, char type) {
        int hours = t.hr;
        int minutes = t.min;
        int seconds = t.sec;
        if (type == 'h') {
            hours = hours + value;
        }
        else if (type == 'm') {
            minutes = minutes + value;
        }
        else if (type == 's') {
            seconds = seconds + value;
        }
        minutes = minutes + seconds / 60;
        seconds = seconds % 60;
        hours = hours + minutes / 60;
        minutes = minutes % 60;
        hours = hours % 24;
        return new Time(hours, minutes, seconds);
    }
    void display() {
        System.out.printf("%02d:%02d:%02d%n", hr, min, sec);
    }
}
class Question4 {
    public static void main(String[] args) {
        Time t1 = new Time(10, 45, 50);
        Time t2 = new Time(5, 30, 25);
        Time result1 = t1.add(t2);
        System.out.print("Addition of two Time objects: ");
        result1.display();
        Time result2 = t1.add(t1, 2, 'h');
        System.out.print("After adding 2 hours: ");
        result2.display();
        Time result3 = t1.add(t1, 30, 'm');
        System.out.print("After adding 30 minutes: ");
        result3.display();
        Time result4 = t1.add(t1, 20, 's');
        System.out.print("After adding 20 seconds: ");
        result4.display();
    }
}