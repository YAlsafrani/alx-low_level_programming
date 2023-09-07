gcc -E is used to preprocess the file and > is used to redirect the output to another file
gcc -c is used to compile a file, -o is used to redirect the compiled output to the new file with .o extention (it checks if .o) and finally ${CFILE%.c} will delete .c from the variable and then add .o when making the new file to redirect to
