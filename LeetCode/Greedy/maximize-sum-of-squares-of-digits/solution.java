class Solution {
    public String maxSumOfSquares(int num, int sum) {
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<num;i++){
            if(sum>=9){
                sb.append(9);
                sum-=9;
            }
            else{
                sb.append(sum);
                if(sum>0) sum=0;
            }
        }
        String res=sb.toString();
        if(sum>0) return "";

        return res;
    }
}