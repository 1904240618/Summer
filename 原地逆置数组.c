public class ArrayDemo {
    

    public static void reverse(int[] array){
        int left = 0;
        int right = array.length-1;
        while(left <= right){
            int temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            left++;
            right--;
        }
    }
    public static void main(String[] args) {
        int[] array = {1,5,4,2,3};
        reverse(array);
        System.out.println(Arrays.toString(array));
    }
