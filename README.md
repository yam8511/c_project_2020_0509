# C語言測驗題目
---

# 執行方式

1. 使用Makefile
```shell
# 選擇要執行哪一題程式
# ex. 第一題
make Q1
# ex. 第17題
make Q17

# 清除不必要檔案
make clean
```

2. 手動執行
```shell
# 1. 先編譯程式
gcc -o main.o ./XXXX/main.c

# 2. 執行檔案
cat ./XXXX/Sample.txt | ./main.o
```
