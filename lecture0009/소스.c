//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int  count, total = 0;
//	char buffer[100] = { '\0', };
//	FILE* stream;
//
//	fopen_s(&stream, "test.txt", "r");
//	if (stream == NULL)
//		exit(1);
//
//	while(!feof(stream))
//	{
//		// Attempt to read in 100 bytes:
//		count = fread(buffer, sizeof(char), 10, stream);
//		printf("%s\n", buffer);
//		if (ferror(stream)) {
//			perror("Read error");
//			break;
//			//return 0;
//		}
//
//		// Total up actual bytes read
//		total += count;
//	}
//	printf("Number of bytes read = %d\n", total);
//	
//	fclose(stream);
//}