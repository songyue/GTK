#include <gtk/gtk.h>

int main( int argc,char *argv[] )
{
	// 1.gtk初始化工作
	gtk_init(&argc, &argv);

	// 2.创建一个顶层窗口
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	
	// 3.1 创建一个fixed
	GtkWidget *fixed = gtk_fixed_new();

	// 3.2 将fixed加入到window中
	gtk_container_add(GTK_CONTAINER(window), fixed);	
	
	// 4.1.1 创建按钮 button1
	GtkWidget *button1 = gtk_button_new_with_label("button1");
	
	// 4.1.2 将button1 添加到fixed中
	gtk_fixed_put(GTK_FIXED(fixed), button1, 0,0); 	
	
	// 4.2.1 创建按钮 button2
	GtkWidget *button2 = gtk_button_new_with_label("button2");
	
	// 4.2.2 将button2 添加到fixed中
	gtk_fixed_put(GTK_FIXED(fixed), button2, 0, 0); 	

	// 5.移动button2到（150，150）的位置
	gtk_fixed_move(GTK_FIXED(fixed), button2, 150, 150); 	
	
	// 6.设置button2的大小
	gtk_widget_set_size_request(button2, 100,50);

	// 7.显示所有文件
	gtk_widget_show_all(window);


	// 8.主事件循环
	gtk_main();
	
	return 0;


}
