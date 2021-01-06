public class Test {

    int a;
    public void vartest(Test test){
        test.a++;
    }

    public static void main(String[] args) {
        Test my_test = new Test();
        my_test.a = 1;
        my_test.vartest(my_test);
        System.out.println(my_test.a);
    }
}
