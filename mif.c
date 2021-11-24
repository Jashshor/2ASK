#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define DEPTH 256     /*������ȣ����洢��Ԫ�ĸ���*/
#define WIDTH 8       /*�洢��Ԫ�Ŀ��*/

int main(void)
{
    int i,temp;
    float s;

    FILE *fp;
    fp = fopen("TestMif.mif","w");   /*�ļ������⣬����չ������Ϊ.mif*/
    if(NULL==fp)
        printf("Can not creat file!\r\n");
    else
    {
        printf("File created successfully!\n");
        /*
        *    �����ļ�ͷ��ע�ⲻҪ���ˡ�;��
        */
        fprintf(fp,"DEPTH = %d;\n",DEPTH);
        fprintf(fp,"WIDTH = %d;\n",WIDTH);
        fprintf(fp,"ADDRESS_RADIX = HEX;\n");
        fprintf(fp,"DATA_RADIX = HEX;\n");
        fprintf(fp,"CONTENT\n");
        fprintf(fp,"BEGIN\n");

        /*
        * ��ʮ�����������ַ������
        */
        for(i=0;i<DEPTH;i++)
        {
             /*����Ϊ128��������Ҳ�*/ 
            s = sin(PI*i/64);   
            /*��-1��1֮������Ҳ���ֵ��չ��0-255֮��*/ 
            temp = (int)((s+1)*255/2);
            /*��ʮ�����������ַ������*/
            fprintf(fp,"%x\t:\t%x;\n",i,temp);
        }//end for
        
        fprintf(fp,"END;\n");
        fclose(fp);
    }
}
