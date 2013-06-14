int main(int argc, char *argv[])
{
    int i, j, *p, *q;
    p = &i;
    p = &*&i;
    i = (int) p;
    q = &p;
    *q = &j;
    i = (*&)j;
    i = *&*&j;
    i = *p++ + *q;
    return 0;
}
