char* inFileName = "test.txt";
char* outFileName = "tmp.txt";
FILE* inFile = fopen(inFileName, "r");
FILE* outFile = fopen(outFileName, "w+");
char line [1024]; // maybe you have to user better value here
int lineCount = 0;

if( inFile == NULL )
{
    printf("Open Error");
}

while( fgets(line, sizeof(line), inFile) != NULL )
{
    if( ( lineCount % 2 ) != 0 )
    {
        fprintf(outFile, "%s", line);
    }

    lineCount++;
}


fclose(inFile);
fclose(outFile);


