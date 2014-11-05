
all:
	$(CC) $(CFLAGS)-o test test.c -framework GLUT -framework OpenGL
