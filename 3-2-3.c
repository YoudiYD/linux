#include"my.h"
int main(){
	FILE *fp;
	char buf [80];
	int ret=0;
	memset(buf,0,sizeof(buf));
        if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	printf("please input you want to store in file: \t");
	fgets(buf,sizeof(buf),stdin);
	printf("Content is %s The size of stream is %d bytes.\n",buf,sizeof(buf));
	ret = fwrite(buf,sizeof(buf),1,fp);
	fclose(fp);
	return 0;
}
