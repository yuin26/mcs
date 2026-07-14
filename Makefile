# 컴파일러
CC = gcc

# 컴파일 옵션
CFLAGS = -Wall -Wextra -Iinclude

# 타겟
TARGET = mcs

# 소스
SRC = src/main.c \
      src/menu.c \
      src/mission.c

$(TARGET):
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: clean
