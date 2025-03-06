#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp;
    
    int a[]={0,1,2};
    char b[]="ABC";
    float c[]={1.1,1.2,1.3};
    
    fp=fopen("a.bin","wb+");
    if (fp==NULL) {
        printf("無發開啟檔案進行寫入\n");
        return 1;
    }
    fwrite(a,sizeof(int),3,fp);
    fwrite(b,sizeof(int),3,fp);
    fwrite(c,sizeof(int),3,fp);
    
    fclose(fp);
    fp=fopen("a.bin","wb+");
    if (fp==NULL) {
        printf("無發開啟檔案進行寫入\n");
        return 1;
    }
    
    int a_read[3];
    char b_read[3];
    float c_read[3];
    
    fread(a_read,sizeof(int),3,fp);
    fread(b_read,sizeof(char),3,fp);
    fread(c_read,sizeof(float),3,fp);
    
    fclose(fp);
    
    printf("%d %d %d\n",a_read[0],a_read[1],a_read[2]);
    printf("%c %c %c\n",b_read[0],b_read[1],b_read[2]);
    printf("%.1f %.1f %,1f\n",c_read[0],c_read[1],c_read[2]);
    
    return 0;
}
