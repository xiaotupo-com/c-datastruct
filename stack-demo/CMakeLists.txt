cmake_minimum_required(VERSION 3.15)

project(Stack-Demo)

# 指定 src 路径
SET(Src_List src/main.c src/stack.c)


add_executable(${PROJECT_NAME} ${Src_List})