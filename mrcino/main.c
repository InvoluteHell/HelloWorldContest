//x86

main()
{
    int buf[256];
    *(int*)((int)buf + 0) = 72;
    *(int*)((int)buf + 1) = 101;
    *(int*)((int)buf + 2) = 108;
    *(int*)((int)buf + 3) = 108;
    *(int*)((int)buf + 4) = 111;
    *(int*)((int)buf + 5) = 32;
    *(int*)((int)buf + 6) = 119;
    *(int*)((int)buf + 7) = 111;
    *(int*)((int)buf + 8) = 114;
    *(int*)((int)buf + 9) = 108;
    *(int*)((int)buf + 10) = 100;
    *(int*)((int)buf + 11) = 0;
    puts(buf);
}
