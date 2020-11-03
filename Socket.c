#include<sys/socket.h>
#include<stdio.h>
void main()

{
int fd1,fd2,fd3,fd4;
fd1=socket(AF_INET, SOCK_STREAM, 0);
fd1=socket(AF_INET,SOCK_STREAM,1);
fd1=socket(AF_INET,SOCK_DGRAM,0);
fd1=socket(AF_KEY,SOCK_DGRAM,0);

if(fd1==-1)

printf("\n The TCP socket is not created and contain some error"); 
else

printf("\n The TCP socket is created and the value for fd is %d",fd1); 
if(fd2==-1)

printf("\n The TCP socket is not created and contain some error"); 
else

printf("\n The TCP socket is created and the value for fd is %d",fd2); 
if(fd3==-1)

printf("\n The UDP socket is not created and contain some error"); 
else

printf("\n The UDP socket is created and the value for fd is %d",fd3);
if(fd4==-1)

printf("\n The socket is not created and contain some error");
else

printf("\n The socket is created and the value for fd is %d\n",fd4); 
              }
