#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#define PORT 2000
int main()
{
intfd,b;

structsockaddr_inmyaddr;
fd=socket(AF_INET,SOCK_STREAM,0);
if(fd==-1)
printf("\nSocket creation Error");
else
printf("\nSocket field description value is %d",fd);

myaddr.sin_family=AF_INET;
myaddr.sin_port=PORT;
myaddr.sin_addr.s_addr=INADDR_ANY;
b=bind(fd,(structsockaddr*)&myaddr,sizeof(structsockaddr));
if(b==-1)

printf("\nSocket Binding Error");
else
printf("\n Socket is binding at port %d\n",PORT);
return 0;
}
