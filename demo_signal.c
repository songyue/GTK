#include <gtk/gtk.h>

void deal_pressed(GtkButton *button, gpointer user_data)
{
	const char *text = gtk_button_get_label(button);

	printf("%s---%s\n",(char *)user_data, text);

	return ;
}

int main( int argc,char *argv[] )
{
	// 1.gtk初始化工作
	gtk_init(&argc, &argv);

	// 2.创建一个顶层窗口
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	
	// 设置窗口边框与内部控件的间隔15
	gtk_container_set_border_width(GTK_CONTAINER(window), 15);

	// 3.创建一个button
	GtkWidget *button = gtk_button_new_with_label("button");

	// 3.2 将button加入到window中
	gtk_container_add(GTK_CONTAINER(window), button);	
	
	// 4.创建一个按钮信号
	g_signal_connect(button, "pressed", G_CALLBACK( deal_pressed ), "haha, button");

	// 5.显示所有文件
	gtk_widget_show_all(window);

	// 6.主事件循环
	gtk_main();
	
	return 0;

}
