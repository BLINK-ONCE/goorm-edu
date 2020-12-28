public class Main {
    public static void main(String args[]) {
        int[] odds = {1,3,5,7,9};
        String[] weeks = {"Mon", "Tue", "wed", "Thu", "Fri", "Sat", "Sun"};
        String[] weeks1 = new String[7];
        weeks1[0] = "월";
        weeks1[1] = "화";
        weeks1[2] = "수";
        weeks1[3] = "목";
        weeks1[4] = "금";
        weeks1[5] = "토";
        weeks1[6] = "일";

        for (int i = 0; i < weeks.length; i++){
            System.out.println(weeks[i]);
        }
    }
}
