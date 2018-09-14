#include <gtk/gtk.h>

int main( int argc,char *argv[] )
{
	// 1.gtk初始化工作
	gtk_init(&argc, &argv);

	// 2.创建一个顶层窗口
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	
	// 设置窗口标题
	//gtk_window_set_title(GTK_WINDOW(window), "hbox");
	// 3.1 创建一个table，2行2列
	GtkWidget *table = gtk_table_new(2,2, TRUE);

	// 3.2 将table加入到window中
	gtk_container_add(GTK_CONTAINER(window), table);	
	

	// 4.1.1 创建按钮 button1
	GtkWidget *button1 = gtk_button_new_with_label("button1");
	
	// 4.1.2 将button1 添加到table中
	gtk_table_attach_defaults(GTK_TABLE(table), button1, 0,1,0,1); 	
	
	// 4.2.1 创建按钮 button2
	GtkWidget *button2 = gtk_button_new_with_label("button2");
	
	// 4.2.2 将button2 添加到table中
	gtk_table_attach_defaults(GTK_TABLE(table), button2, 1,2,0,1); 	
	
	// 4.3.1 创建按钮 button3
	GtkWidget *button3 = gtk_button_new_with_label("button3");
	
	// 4.3.2 将button3 添加到table中
	gtk_table_attach_defaults(GTK_TABLE(table), button3, 0,2,1,2);

	
	// 5.显示所有文件
	gtk_widget_show_all(window);


	// 7.主事件循环
	gtk_main();
	
	return 0;

}
