class Solution {
    public int[] solution(int[] numbers) {
        int[] answer = new int[numbers.length];
        int index = 0;
        
        for (int number : numbers) {
            answer[index++] = number *2;
        }
        
        return answer;
    }
}