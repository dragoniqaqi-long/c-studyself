#include <stdio.h>
#include <malloc.h>

int main()
{
    int a = 5;//������4���ֽ� ��̬����
    
    int * p = (int *)malloc(4);
    p = &a;
            /*
                1. Ҫʹ��malloc����,�������malloc.h���ͷ�ļ�
                2. malloc����ֻ��һ���β�,�����βα���������
                3. �β� 4 ��ʾ����ϵͳΪ��������� 4 �ֽ�
                4. malloc����ֻ�ܷ��ص�һ���ֽڵĵ�ַ          
                5. ��8�з����� 8 �ֽ�, p ָ����ڴ�Ҳռ 4 �ֽ�
                6. p������ռ�ڴ��Ǿ�̬����, p ��ָ����ڴ��Ƕ�̬�����
            */

    free(p);//�ú�����ʾ��p��ָ����ڴ���ͷŵ�
    int *pArr;
    int len = 5;
    pArr = (int *)malloc(4 * len);
    pArr = (int *)malloc(5 * sizeof(int));//���־���
    for(int i = 0;i < 5;i++)
    { 
        scanf("%d", &pArr[i]);   
    }
    //printf("%p", p);
    for(int j = 0;j < 5;j++)
    {
        printf("%d ", pArr[j]);
    }
    printf("\n");
    //����Ƿ��ͷ��ڴ�
    free(pArr);

    printf("����������5����\n");
    int *arr = (int *)malloc(4 * len);
    for(int i = 0;i < 5;i++){ 
        scanf("%d", &arr[i]);}
    for(int j = 0;j < 5;j++){
        printf("%d ", arr[j]);}
    printf("\n");
    
    int LEN = 10;
    printf("�������������,����10����\n");
    int *new_arr = (int *)realloc(arr,4 * LEN);//�������Ԫ��������Ϊ10
    for(int i = 0;i < 10;i++){ 
        scanf("%d", &new_arr[i]);}
    for(int j = 0;j < 10;j++){
        printf("%d ", new_arr[j]);}
    //��ǰ5��������Ϊ���в�������б���

    return 0;
}
//����֤���˶�̬�ڴ�������ŵ�:
/*
1. ����Ҫ���ȶ��峤��
2. �ڴ���Գ���Ա�ֶ�����,�ͷ�
3. �������ڴ��������ӻ�����
*/