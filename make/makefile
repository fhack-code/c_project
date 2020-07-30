############################################
#文件名称:makefile
#创建日期:2020/07/20
#作    者:樊忠祥 fzx
#文件功能:主要讲述了一些make编译的命令参数
############################################

.PHONY:all makeall clean cleanall help

all:makeall
	@echo "开始编译代码"

clean:cleanall
	@echo "开始清楚代码"

###########################################
#help 伪目标命令
##########################################
help:
	@echo "******************************"
	@echo "make  -i :增量编译代码"
	@echo "make  -a :全量编译代码"
	@echo "clean -i :增量删除中间文件"
	@echo "clean -a :全量删除中间文件"
	@echo "help     :打印帮助信息"
	@echo "******************************"

include makefile.include

