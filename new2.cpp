import java.util.*;
import java.io.*;
import java.lang.*;
public class Solution{
    BufferedReader br =new BufferedReader(new InputStreamReader(System.in)); 
    PrintWriter out =new PrintWriter(System.out);
    StringTokenizer st =new StringTokenizer("");
    String next(){
        if(!st.hasMoreTokens()){
            try{
                st=new StringTokenizer(br.readLine());
            }
            catch(Exception e){

            }
        }
        return st.nextToken();
    }
    int nextInt(){
        return Integer.parseInt(next());
    }
    public static void main(String[] args) {
        new Solution().solve();
    }
    Set<String> toCheck =new HashSet<>();
    boolean check(String str1,String str2){
        if(str1.equals(str2)) return true;
        for(int i=0;i<str1.length();i++){
            int z=0,o=0;
            for(int j=i;j<str1.length();j++){
                if(str1.charAt(j)=='1') o++;
                else z++;
                if(o%2==0){
                    String temp="";
                    for(int t=0;t<i;t++) temp+=str1.charAt(t);  
                    for(int t=j;t>=i;t--) temp+=str1.charAt(t);
                    for(int t=j+1;t<str1.length();t++) temp+=str1.charAt(t);
                    if(temp.equals(str2)) {
                        return true;
                    } 
                    else{
                        toCheck.add(str1);
                        if(!toCheck.contains(temp) &&  check(temp,str2)) return true;
                    } 
                }
            }
        }
        return false;
    }
    void solve(){ 
        int t=0;
        t=nextInt();
        while(t-->0){
            String str=next();
            int cnt=0;
            for(int i=1;i<=str.length();i++){
                Set<String> set =new HashSet<>();
                for(int j=0;j+i<=str.length();j++){
                    String temp=str.substring(j,j+i);
                    boolean flag=false;
                    for(String s:set){
                        toCheck.clear();
                        if(check(temp, s)){
                            flag=true;
                            break;
                        }
                    }
                    if(!flag) set.add(temp);
                }
                cnt+=set.size();
            }
            out.println(cnt);
        }
        out.close();
    }
}