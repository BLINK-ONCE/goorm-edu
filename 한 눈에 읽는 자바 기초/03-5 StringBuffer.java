public class Main {
    public static void main(String args[]) {
        //StringBuffer 는 문자열을 추가하거나 변경할 때 주로 사용하는 자료형이다.
        //append
        StringBuffer sb = new StringBuffer();
        sb.append("hello");
        sb.append(" ");
        sb.append("jump to java");
        System.out.println(sb.toString());//hello jump to java//toString()메소드를 통해 String 자료형으로 변경할 수 있음

        //String 자료형으로 표현하면 다음과 같다
        //String temp = "";
        //temp += "hello";
        //temp += " ";
        //temp += "jump to java";
        //System.out.println(temp);
        
        /*
        String 자료형은 한 번 값이 생성되면 그 값을 변경할 수 없다. ; immutable
        trim, toUpperCase 등의 메소드를 보면 문자열이 변경되는 것처럼 생각할 수 있지만 
        해당 메소드 수행 시 또 다른 String 객체를 생성해 return 하는 것이다.
        StringBuffer 는 값을 변경할 수 있다. ; mutable
         */
        
        //insert: 특정 위치에 원하는 문자열을 삽입할 수 있다.
        StringBuffer sb2 = new StringBuffer();
        sb2.append("jump to java");
        sb2.insert(0, "hello ");
        System.out.println(sb2.toString());//hello jump to java
        
        //substring: String 자료형의 substring method 와 사용법이 동일하다.
        //substring(start, end) 와 같이 사용하면 StringBuffer 객체의 시작위치에서 끝위치까지의 문자를 뽑아내게 된다.
        
        
    }
}
