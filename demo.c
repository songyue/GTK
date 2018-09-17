#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>


int main( int argc,char *argv[] )
{
	// 1.gtk初始化工作
	gtk_init(&argc, &argv);

	// 2.1创建一个顶层窗口
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	// 2.2.设置窗口标题
	gtk_window_set_title(GTK_WINDOW(window), "GtkLabel 学习");

	// 3.创建一个垂直布局
	GtkWidget *vbox = gtk_vbox_new(TRUE, 10);

	// 将vbox添加到window中
	gtk_container_add(GTK_CONTAINER(window), vbox);

	// 4.创建一个label_one
	GtkWidget *label_one = gtk_label_new("label one");

	// 将label_one添加到vbox中
	gtk_container_add(GTK_CONTAINER(vbox), label_one);

	// 5.创建一个label_two
	GtkWidget *label_two = gtk_label_new("label two");
	gtk_container_add(GTK_CONTAINER(vbox), label_two);

	// 6.获取label_two标签的内容
	const char *str = gtk_label_get_label(GTK_LABEL(label_two));
	printf("str=%s\n", str);

	// 7.创建一个label_three
	GtkWidget *label_three = gtk_label_new("label three");
	gtk_container_add(GTK_CONTAINER(vbox), label_three);

	// 8.设置label_three的标签内容
	gtk_label_set_text(GTK_LABEL(label_three), "change the label_three text");

	// 7."destroy"与gtk_main_quit链接
	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	
	// 8.显示所有文件
	gtk_widget_show_all(window);

	// 9.主事件循环
	gtk_main();
	
	return 0;

}




























