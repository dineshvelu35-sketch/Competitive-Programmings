#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        int N;
        scanf("%d", &N);
        char bin[N + 1]; 
        scanf("%s", bin);

        int count = 0,i;
        for (i = 1; i < N-1; i++) {
            if (bin[i] == '0') 
			{
                int left_ok;
                int right_ok;
                if(bin[i-1]=='0' && i>=1)
                {
                	left_ok='1';
				}
				if(bin[i+1]=='0' && i<=N-2)
				{
					right_ok='1';
				}
                if (left_ok && right_ok) 
				{
                    bin[i] = '1';
                }
            }
            if (bin[i] == '1') {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
