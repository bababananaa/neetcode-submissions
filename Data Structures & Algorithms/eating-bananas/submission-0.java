class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int lo = 1, hi = 0;
        for (int p : piles) hi = Math.max(hi, p);

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (hoursNeeded(piles, mid) <= h) {
                hi = mid;          // mid works, look for smaller
            } else {
                lo = mid + 1;      // too slow
            }
        }
        return lo;
    }

    private long hoursNeeded(int[] piles, int k) {
        long total = 0;
        for (int p : piles) {
            total += (p + k - 1) / k;   // ceil(p / k)
        }
        return total;
    }
}