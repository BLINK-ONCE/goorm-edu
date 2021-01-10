public class ZooKeeper {
    public void feed(Predator predator) {
        System.out.println("feed apple");
    }
    /*
    이와 같이 객체가 한 개 이상의 자료형 타입을 갖게 되는
    특성을 다형성이라고 한다.
     */

    public static void main(String[] args) {
        ZooKeeper zookeeper = new ZooKeeper();
        Tiger tiger = new Tiger();
        Lion lion = new Lion();
        zookeeper.feed(tiger);
        zookeeper.feed(lion);
    }
}
