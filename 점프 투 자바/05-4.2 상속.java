public class Animal {
    String name;

    public void setName(String name) {
        this.name = name;
    }
}

public class Dog extends Animal{
    public void sleep() {
        System.out.println(this.name + " zzz");
    }

    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.setName("poppy");
        System.out.println(dog.name);
        dog.sleep();
    }
}
public class HouseDog extends Dog {
    public void sleep() {
        System.out.println(this.name + " zzz in house");
    }
    public void sleep(int hour) {
        System.out.println(this.name + " zzz in house for " + hour + "hours");
    }

    public static void main(String[] args) {
        HouseDog house_dog = new HouseDog();
        house_dog.setName("happy");
        house_dog.sleep();
        house_dog.sleep(3);

    }
}
