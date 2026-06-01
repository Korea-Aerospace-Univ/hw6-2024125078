#include <stdio.h>

int main(void)
{
    char eng[10] = { };
    int maxIndex=0;
    char *p, *q;
    
    for(p=eng; p<eng+10; p++) {
        scanf("%c", p);
    }
    
    char maxE = *p;
    
    for(p=eng; p<eng+10; p++) {
        int count=0;
        for(q=eng; q<eng+10; q++) {
            if(*p == *q) count++;
        }
        
        if(maxIndex<count) {
        maxIndex=count;
        maxE=*p;
        }
    }

    
    printf("%c %d", maxE, maxIndex);

    return 0;
}
