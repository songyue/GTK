#include <gtk/gtk.h>

int main( int argc,char *argv[] )
{
	// 1.gtk初始化工作
	gtk_init(&argc, &argv);

	// 2.创建一个顶层窗口
	//GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	
	// 设置窗口标题
	gtk_window_set_title(GTK_WINDOW(window), "hbox");
	
	// 3.1 创建一个水平容器
	GtkWidget *hbox = gtk_hbox_new(TRUE, 10);
	
	// 3.2 将水平容器加入到窗口中
	gtk_container_add(GTK_CONTAINER(window), hbox);		
	
	// 4.1.1 创建按钮 button1
	GtkWidget *button1 = gtk_button_new_with_label("button1");
	
	// 4.1.2 将button1 添加到hbox中
	gtk_container_add(GTK_CONTAINER(hbox), button1); 	
	
	// 4.2.1 创建按钮 button2
	GtkWidget *button2 = gtk_button_new_with_label("button2");
	
	// 4.2.2 将button2 添加到hbox中
	gtk_container_add(GTK_CONTAINER(hbox), button2); 	
	
	// 4.3.1 创建按钮 button3
	GtkWidget *button3 = gtk_button_new_with_label("button3");
	
	// 4.3.2 将button3 添加到hbox中
	gtk_container_add(GTK_CONTAINER(hbox), button3); 	
	
	// 5.显示所有文件
	gtk_widget_show_all(window);

	// 3.创建一个button，文本信息设置为Hello gtk
//	GtkWidget *button = gtk_button_new_with_label("Hello gtk");
	
	// 4.将button放入窗口中（窗口也是一种容器）
//	gtk_container_add(GTK_CONTAINER(window), button);

	// 5.显示button
//	gtk_widget_show(button);

	// 6.显示window
//	gtk_widget_show(window);

	// 7.主事件循环
	gtk_main();
	
	return 0;

}
