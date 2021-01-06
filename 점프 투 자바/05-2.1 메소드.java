public class Test {
    public int sum(int a, int b) {return a + b;}


    public void sum_1(int a, int b) {
        System.out.println(a + "와 " + b + "의 합은 " + (a+b) + "입니다.");
    }

    public void say(){
        System.out.println("Hi");
    }

    public static void main(String[] args){

        int a = 3; int b = 4;

        Test my_test = new Test();
        int c = my_test.sum(a, b);

        System.out.println(c);

        my_test.sum_1(a, b);

        my_test.say();
    }
}
