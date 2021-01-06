import java.util.ArrayList;

public class Main {
    public static void main(String args[]) {
        //List 자료형에는 ArrayList, LinkedList 등의 List 인터페이스를 구현한 자료형이 있다.
        //add
        ArrayList pitches = new ArrayList();
        pitches.add("138");
        pitches.add("129");
        pitches.add("142");

        pitches.add(0, "133");//첫번째 위치에 133 삽입.

        pitches.add(1, "133");//두번째 위치에 133삽입.
        //java 는 J2SE 5.0 version 이후부터 ArrayList<String> pitches = new ArrayList<String>(); 이런식으로
        //객체를 포함핳는 자료형도 어떤 객체를 포함하는지에 대해 명확하게 표현하는 것을 권고하고 있다.

        //get
        System.out.println(pitches.get(1));//두번째 투구 스피드. ArrayList 의 get method 를 이용해 특정 index 의 값 추출

        //size: size method 는 ArrayList 의 개수를 return
        System.out.println(pitches.size());

        //contains: 리스트 안에 항목값이 있는지를 판별하여 그 결과를 boolean 으로 return
        System.out.println(pitches.contains("142"));//true 가 출력

        //remove: 2개의 방식이 있다. (이름은 같지만 입력 파라미터가 다르다.
        //remove(객체): 리스트에서 객체에 해당되는 항목을 삭제하고 삭제한 결과를 return
        System.out.println(pitches.remove("129"));//true
        //remove(인덱스): 해당 index 의 항목을 삭제하고 삭제된 항목을 return
        System.out.println(pitches.remove(0));//138

    }
}
