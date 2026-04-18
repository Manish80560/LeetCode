class Solution {
    public int distributeCandies(int[] candyType) {
        Arrays.sort(candyType);
        int n = candyType.length;
        Set<Integer> st = new HashSet<>();;
        for (int candy : candyType) {
            st.add(candy);
        }

        int m = st.size();

        return Math.min(m,n/2);
    }
}