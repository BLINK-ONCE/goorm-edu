public class Animal {
    String name;

    public void setName(String name) {
        this.name = name;
    }
}
public class Dog extends Animal {
    public Dog() {
    }
    public void sleep() {
        System.out.println(this.name + " zzz");
    }
}
public class HouseDog extends Dog {
    public HouseDog(String name) {
        this.setName(name);
    }
    public HouseDog(int type) {
        if (type == 1) {
            this.setName("yorkshire");
        }
        else if (type == 2) {
            this.setName("bulldog");
        }
    }
    public void sleep() {
        System.out.println(this.name + " zzz in house");
    }
    public void sleep(int hour) {
        System.out.println(this.name + " zzz in house for " + hour + "hours");
    }

    public static void main(String[] args) {
        HouseDog Happy = new HouseDog("happy");
        HouseDog Yorkshire = new HouseDog(1);
        System.out.println("Happy.name: " + Happy.name);
        System.out.println("Yorkshire.name: " + Yorkshire.name);

    }
}
