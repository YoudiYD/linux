#include"my.h"
int main(){
	FILE *fp;
	char buf [80];
	memset(buf,0,sizeof(buf));
        if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	fwrite(buf,sizeof(buf),1,fp);
	printf("Content is %s.The size of stream is %d bytes.\n",buf,sizeof(buf));
	fclose(fp);
	return 0;
}
