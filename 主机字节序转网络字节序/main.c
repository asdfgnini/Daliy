#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

#include <winsock2.h>       //����ͷ�ļ�
#pragma comment(lib,"ws2_32.lib") //��ʹ�õĿ�

#include <WS2tcpip.h>   //ipת��ͷ�ļ�
int main()
{
#if 0
    //�������ֽ���תΪ�����ֽ���
    unsigned char ip[4] = {192,168,116,1};
    unsigned int num = *(unsigned int*)ip;
    unsigned int sum = htonl(num);
    unsigned char* p = (unsigned char*)&sum;
    printf("%d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3));

    printf("\n");
    unsigned short port = 0x1024;
    unsigned short num1 = htons(port);
    printf("%x\n",num1);
#endif

    //�����ʮ����ת��32λ����������
    const char* ip = "192.168.116.1";
    unsigned int num = 0;
    printf("%d\n",inet_pton(AF_INET, ip, &num));
    unsigned char* p = (unsigned char*)&num;
    printf("%d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3));

    //��32λ����������ת��Ϊ���ʮ����
    char buf[16] = "";
    printf("%s\n",inet_ntop(AF_INET, &num, buf, 16));
    printf("%s\n",buf);


    printf("hello world\n");
    system("pause");
    return 0;
}