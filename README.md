**Factorize as many numbers as possible into a product of two smaller numbers**

Usage: factors file
where fileis a file containing natural numbers to factor.
One number per line

Output format: n=p\*q
one factorization per line

See example

**Example Output**

edward@ubuntu:~/factors$ cat tests/test00 

4    
12 
34   
128  
1024  
4958  
1718944270642558716715   
9  
99  
999  
9999  
9797973  
49  
239809320265259  
edward@ubuntu:~/factors$ time ./factors tests/test00  

4=2\*2  
12=6\*2  
34=17\*2  
128=64\*2  
1024=512\*2  
4958=2479\*2  
1718944270642558716715=343788854128511743343\*5  
9=3\*3  
99=33\*3  
999=333\*3  
9999=3333\*3  
9797973=3265991\*3  
49=7\*7  
239809320265259=15485783\*15485773  

* real    0m0.009s
* user    0m0.008s
* sys 0m0.001s
