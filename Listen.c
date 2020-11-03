#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#define PORT 450
#define queuelen 5

int main()
               {
intfd,b,l;
structsockaddr_inmyaddr;
fd=socket(AF_INET,SOCK_STREAM,0);
if(fd==-1)

printf("\n Socket creation error");
else
{
printf("\n Socket Created");
printf("ocket Field Description Value is %d",fd);
}

myaddr.sin_family=AF_INET;
myaddr.sin_port=PORT;
myaddr.sin_addr.s_addr=INADDR_ANY;
b=bind(fd,(structsockaddr*)&myaddr,sizeof(structsockaddr));

if(b==-1)
printf("\n Socket Binding Error");
else
printf("\n Socket is binding at port %d",PORT);
l=listen(fd,queuelen);
if(l==-1)

printf("socket Listen Error");
else
printf("\n Server is in Listener Mode\n");
return 0;
}
