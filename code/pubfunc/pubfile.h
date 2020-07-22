/*********************************
 * 文件名称：pubfile.h
 * 创建日期:2020/07/19
 * 作    者:樊忠祥
 * 文件功能:pubfile文件的头文件
 * *******************************
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef _PUBFILE_H_
#define _PUBFILE_H_

/*******************************
 * 函数名称:myopen
 * 创建日期:2020/07/19
 * 作    者:樊忠祥
 * 输入参数:const char *pathname(文件路径及名称),int flags(打开方式)
 * 输出参数:int fd(文件句柄)
 * 返回类型:int
 * 返回含义:0-成功 -1-失败
 * 函数功能:打开指定的文件
 * *****************************/
int myopen(const char *pathname,int flags,int fd);

#endif
