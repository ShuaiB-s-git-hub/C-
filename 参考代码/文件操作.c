#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ļ������������� 
//	�����ļ�ָ��
//	���ļ�
//	�����ļ�
//	�ر��ļ�

int main()
{
	// �����ļ�ָ��
	// C�����У���ָ���������ֱ�ӷ����ڴ棬���ڱ�׼������Щ���Ѿ�Ϊ��׼���ˣ�ֱ���þ���
	FILE* fp1;
	// ֱ�Ӷ����ָ�������һ��������������ļ��ĵ�ַ

	// ʹ��fopen�������ļ����������ַ�浽fp1�С�
	fp1 = fopen("111.txt", "w");  //w��ֻд����ʽ���ļ���������᷵��һ����ָ��,���������᷵���ļ��׵�ַ
	if (fp1 == NULL)
	{
		printf("���ߣ��ֱ����ˣ�\n");
		return  EOF;
	}
	else
	{
		printf("�ļ��򿪳ɹ���\n");
	}


	// Ȼ����Ƕ��ļ����в�����

	// ����˵д��һ���ַ������ļ���
	char a = 'a';
	printf("%c", fputc(a, fp1));

	// ������������ļ�д��һ���ַ�ת
	char ch[] = "ymr";
	printf("1:");
	for (int i = 0; i < (sizeof(ch)); i++)
	{
		printf("%c", fputc(ch[i], fp1));
	}  //��������ֻд�ķ�ʽ�򿪣�����ÿ�δ򿨶�����������ļ���

	// ÿ�θ����ǵð��ļ����ˣ�һ����ֹ�ļ�������������ˣ��������ں���������
	fclose(fp1);

	// ���ļ��ж�ȡ����
	fp1 = fopen("111.txt", "r"); // ��ȡ����ʱҪ��ֻ�����߶�д����ʽ�򿪣�������ڶ�ȡʱ�������
	char c;
	printf("2:");
	while ((c = fgetc(fp1)) != EOF) {
		printf("%c", c);
	}
	fclose(fp1);
	printf("\n");


	// ������ֱ�Ӷ���д���ַ�����ʹ��fputs()��fgets()��
	FILE* fp2;
	fp2 = fopen("111.c", "w");
	if (fp2 == NULL)
	{
		printf("���ߣ��ֱ����ˣ�\n");
		return  EOF;
	}
	else
	{
		printf("�ļ��򿪳ɹ���\n");
	}
	fputs("yuanmourenzuishuai!\n", fp2);
	fclose(fp2);

	char text[100];
	fp2 = fopen("111.c", "r");
	printf("%s", fgets(text, 100, fp2));
	fclose(fp2);

	// C�����У���printf()���������������̨����ַ����䱾�����������д������
	//          ��scanf()���������ڴӻ���������������ȡ�ַ�

	// ͬ������fprintf()���������ļ���д������
	//           fscanf()���������ļ��ж�ȡ����
	FILE* fp;
	fp = fopen("file.txt", "w"); // ���ļ�
	// ������д���ļ�
	fprintf(fp, "Ԭĳ����˧����������\n");
	fclose(fp);

	char buff[255]; // ����char����洢�ļ�����
	fp = fopen("file.txt", "r");
	while (fscanf(fp, "%s", buff) != EOF) {
		printf("%s ", buff);
	}
	fclose(fp);

	// Ҫ֪��һ�����飺
	// �ļ�ָ����ļ���Ĭ��ָ���ļ��Ŀ�ͷ��Ҳ���ǵ�һ�����ݵ�λ�ã�
	// �˺�ÿһ�ζ�ȡ��д�룬�ļ�ָ���Զ����
	// �ƶ��������ݴ�С��Ӧ�ļ�λ��

	// ������rewind()����ǿ�н�����Ƶ���ͷ��
	printf("\n------------------\n");
	fp = fopen("file.txt", "r");
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
	rewind(fp); // ���ļ�ָ���ƶ����ļ��Ŀ�ͷ,�����Ϳ����ظ���ȡ��
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
	fclose(fp);

	// ������fseek()ʵ�ֽ�����Ƶ�����λ��
	fp = fopen("myfile.txt", "w+");
	fputs("This is Book", fp);
	// ���ļ�ָ�����õ�����λ��
	fseek(fp, 7, SEEK_SET);     //û����仰�ļ��о��� This is BookKenny Wong
	fputs("Kenny Wong", fp);    //�о���               This isKenny Wong 
	fclose(fp);


}
