public class ArrayDemo {
    public static int binarySearch(int[] array,int key){
        int left = 0;
        int right = array.length-1;
        while (left <= right){
            int middle = (left+right)/2;
            if(array[middle] < key){
                left = middle+1;
            } else if(array[middle] > key){
                right = middle-1;
            } else {
                return middle;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] array = {2,6,7,8,9};
        int ret = binarySearch(array,8);
        System.out.println(ret);
    }
}
