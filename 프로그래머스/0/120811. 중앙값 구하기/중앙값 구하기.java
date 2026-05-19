import java.util.Arrays;

class Solution {
    public int solution(int[] array) {
        Arrays.sort(array);
        
        int length = array.length;        
        
        int a = length / 2;
        
        return array[a];
    }
}