public class ArrayDemo {
    public static void swapSort(int[] arr){
        int left = 0;
        int right = arr.length-1;
        while (left < right){
            while((left<right) && (arr[left] %2 == 0)){
                left++;
            }
            while ((left<right )&& (arr[right] %2 != 0)){
                right--;
            }
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    public static void main(String[] args) {
        int[] array = {1,3,4,5,2};
        swapSort(array);
        System.out.println(Arrays.toString(array));
    }
