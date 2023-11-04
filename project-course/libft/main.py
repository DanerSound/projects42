import os


def generate_file():
    dir_name = input(" insert directory name: ")
    file_name = input(" insert file name (File.c): ")
    os.makedirs(dir_name)
    os.chdir(dir_name)
    content = "#include<unistd.h> \n" \
              "//#include<stdio.h>" \
              "\n" \
              "// verifica prototipo funzione" \
              "\n" \
              "/* \n"\
              "int    main(void) \n" \
              "{ \n " \
              " \n "  \
              " \n"  \
              "     return(0); \n" \
              "} \n" \
              "*/"

    with open(file_name, "w") as file:
        file.write(content)


generate_file()
