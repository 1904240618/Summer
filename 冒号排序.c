public static void bubbleSort(int[] array){
        boolean flag = false;
        
        for (int i = 0; i <array.length-1 ; i++) {
            
            flag = false;
            for (int j = 0; j <array.length-i-1 ; j++) {
                if(array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    flag = true;
                }
            }
            if(flag == false){
                return;
            }

        }
    }
    public static void main(String[] args) {
        int[] array = {1,6,2,3,9};
        bubbleSort(array);
        System.out.println(Arrays.toString(array));
    }
