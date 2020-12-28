import java.util.ArrayList;

public class Main {
    public static void main(String args[]) {
        //ArrayList<String> aList = new ArrayList<String>();
        //ArrayList aList = new ArrayList();
        //<String> 이라는 제네릭스 표현식은 ArrayList 안에 담을 수 있는 자료형은 String 타입 뿐이다 라는 것을 의미한다.
        //제네릭스를 이용하면 좀 더 명확한 타입체크가 가능해 진다.

        //제네릭스를 사용하지 않은 경우
        /*
        ArrayList aList1 = new ArrayList();
        aList1.add("hello");
        aList1.add("java");

        String hello = (String) aList1.get(0);
        String java = (String) aList1.get(1);
         */
        //ArrayList 안에 추가되는 객체는 Object 자료형으로 인식된다.
        // Object 자료형은 모든 객체가 상속하고 있는 가장 기본적인 자료형이다.
        //ArrayList 객체인 aList 에 값을 넣을 때는 문제가 안 되지만 값을 가져올 경우에는
        //항상 Object 자료형에서 String 자료형으로 다음과 같이 형변환(casting)을 해줘야 한다.
        //String hello = (String) aList1.get(0); //Object 를 String 으로 casting 한다. (String)

        //또한 aList 안에는 String 객체 이외의 객체도 넣을 수 있기 때문에
        // 형변환 과정에서 잘못된 형변환으로 인ㄴ한 오류가 발생할 소지가 있다.


        //제네릭스를 사용한 경우
        ArrayList<String> aList = new ArrayList<String>();
        aList.add("hello");
        aList.add("java");

        String hello = aList.get(0);
        String java = aList.get(1);
        //제네릭스로 자료형을 선언하기만 하면 그 이후로는 자료형에 대한 형변환 과정이 필요없다.
        //이미 컴파일러가 aList 에는 반드시 String 자료형만 추가 되어야 함을 알기때문이다.
        //제네릭스를 이용하면 형변환에 의한 불필요한 코딩, 잘못된 형변환에 의한 런타임 오류 등에서 벗어날 수  있다.
    }
}
