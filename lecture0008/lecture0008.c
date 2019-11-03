#include <stdio.h>

int main(void)
{
	FILE* stream;
	char line[100];

	if (fopen_s(&stream, "test.txt", "r" ) == 0 )
	{
		while (fgets(line, 100, stream))
		{
			printf("%s", line);
		}
	}
	fclose(stream);
	return 0;
}



//#include <stdio.h>
//
//int main(void)
//{
//	FILE* stream;
//	char line[100];
//	if (fopen_s(&stream, "test.txt", "r") == 0)
//	{
//		while (1)
//		{
//			if (fgets(line, 100, stream) == NULL)
//			{
//				printf("Error");
//				break;
//			}
//			else
//			{
//				printf("%s", line);
//			}
//
//		}
//
//	}
//	fclose(stream);
//	return 0;
//}
