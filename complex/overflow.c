
void greet() {
    // nobody has a name longer than 256 characters!
    char name[256];
    printf("address of name:  %p\n", name);

    printf("enter your name: ");
    // totally safe, right?
    gets(name);

    printf("hello, %s\n", name);

}

int main() {
    greet();
    return 0;
}
