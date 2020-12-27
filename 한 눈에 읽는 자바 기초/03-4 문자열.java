public class Main {
    public static void main(String args[]) {
        String a = "Happy Java";
        String b = "a";
        String c = "123";

        //String a = new String("Happy Java");
        //String b = new String("a");
        //String c = new String("123");
        //new라는 키워드는 객체(새로 생성된 자료형)를 만들 때 사용한다.

        //primitive(원시) 자료형
        //int, long, double, float, blooean, chat. etc //new 키워드로 생성할 수 없다.
        //String은 literal로 표기가 가능하지만 primitive 자료형은 아니다. (특별대우)

        //equals: 두 개의 문자열이 동일한 값을 가지고 있는지를 비교해 결과값을 return
        String a1 = "hello";
        String b1 = "java";
        String c1 = "hello";
        System.out.println(a1.equals(b1));//False
        System.out.println(a1.equals(c1));//True

        System.out.println(a1.equals(c1));//True
        System.out.println(a1==c1);//False//==연산자는 두 개의 자료형이 동일한 객체인지를 판별할 때 사용하는 연산자이다.

        //indexOf: 문자열에서 특정 문자가 시작되는 인덱스를 리턴
        String a2 = "Hello Java";
        System.out.println(a2.indexOf("Java"));

        //replaceAll: 문자열 중 특정 문자를 다른 문자로 바꾸고 싶을 경우
        String a3 = "Hello Java";
        System.out.println(a3.replaceAll("Java", "World"));

        //substring: 문자열 중 특정 부분을 뽑아낼 경우
        String a4 = "Hello Java";
        System.out.println(a4.substring(0, 4));//Hell// 시작위치 <= a < 끝위치

        //toUpperCase: 문자열을 모두 대문자로 변경, 소문자는 toLowerCase
        String a5 = "Hello Java";
        System.out.println(a5.toUpperCase());



        //String a = "Hello Java";
        //System.out.println(a.indexOf("Java"));
        //System.out.println(a.replaceAll("Java", "World"));
        //System.out.println(a.substring(0, 4));
        //System.out.println(a.toUpperCase());

    }
}
