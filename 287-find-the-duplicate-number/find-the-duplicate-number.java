class Solution {
    public int findDuplicate(int[] nums) {

        // for O(n^2) time complexity
        // for(int i = 0 ; i < nums.length ; i++){
        //     for(int j = i + 1 ; j < nums.length ; j++){
        //         if(nums[i] == nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;



        Set<Integer> set = new HashSet<>();

        for(int num : nums){
            if(set.contains(num)){
                return num;
            }
            set.add(num);

        }
        return -1;
        
    }
}


// class Solution {
//     public int findDuplicate(int[] nums) {
//         Set<Integer> st = new HashSet<>();
//         for(int i=0;i<nums.length;i++){
//             if(st.contains(nums[i])) return nums[i];
//             else st.add(nums[i]);
//         }
//         return -1;
//     }
//          static {
//         Runtime.getRuntime().addShutdownHook(new Thread(() -> {
//             try (FileWriter writer = new FileWriter("display_runtime.txt")) {
//                 writer.write("0");
//             } catch (IOException e) {
//                 e.printStackTrace();
//             }
//         }));
//     }
// }