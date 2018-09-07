# Sub string 
This is my substring function not include string main function.

## Getting Started
You can compile code for your system with the command 
```
make
```

### Example
```
./mySubstring
Enter your String: Hello World
Enter the position: 1
Enter length of sub string: 5
Your string: Hello World
Sub string:  Hello
```

### My substring function
```
char *mySubstring(char *mainStr,int start,int length){
    char *subStr;
    subStr = mainStr+(start-1);
    subStr[length] = '\0';
    return subStr;
}
```

## License
This project is licensed under the GNU License - see the [LICENSE](LICENSE) file for details
