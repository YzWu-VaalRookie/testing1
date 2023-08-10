#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*//Reverse Bits
	int i, a = 9, resA = 0, cnt = 0;
	
	for(i = 0 ; i<16 ; i++){
		if(a&1 == 1){
			resA = (resA << 1) + 1;
			cnt++;
		}
		else
			resA = resA << 1;
		a = a >> 1;
	}
	printf("num=1 counts=%d\n", cnt);
	*/
	
	/*//Numbers of 1 Bits (只限正整數)
	int x = 11, k = 0;
    
    while(x > 0){
        k = k*10 + x%2;
        x /= 2;
        printf("k = %d\n", k);
    }*/
    
    /*
	//Numbers of 1 Bits () 
	int i, x = 11, res = 0; 
    
    for(i = 0 ; i < 8 ; i++){
        res = res + (x & 1);
        x = x >> 1;
    }
    printf("res = %d\n", res);*/
	
	//Numbers of 1 Bits () 
	int i, x = 4, res = 0, j; //x = 2147483647
    char str[128]={0};

	printf("input numbers = %d\n", x);

    for(i = 0, j = 32-1 ; i < 32 ; i++){
        res = res + (x & 1);
        str[j--] = (x & 1);
        x = x >> 1;
    }
	
    printf("Numbers of 1 Bits__result = %d\n", res);
    printf("str[] = ");
	
	for(i = 0 ; i < 32 ; i++)
        printf("%d, ", str[i]);
	printf("\n");
    
	system("pause");
	return 0;
}

