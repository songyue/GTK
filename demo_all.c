#include <gtk/gtk.h>

int main( int argc,char *argv[] )
{
	// 1.gtk初始化工作
	gtk_init(&argc, &argv);

	// 2.创建一个顶层窗口
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	
	// 3.1 创建一个table
	GtkWidget *table = gtk_table_new(5,4,TRUE); 

	// 3.2 将table加入到window中
	gtk_container_add(GTK_CONTAINER(window),table);	
	
	// 4.创建一个行编辑
	GtkWidget *entry = gtk_entry_new();

	// 设置行编辑的内容
	gtk_entry_set_text(GTK_ENTRY(entry), "3+2=4");
	// 设置行编辑不允许编辑，只能显示用
	gtk_editable_set_editable(GTK_EDITABLE(entry), FALSE);
	
	//5 创建多个按钮
	GtkWidget *button0 = gtk_button_new_with_label("0");
	GtkWidget *button1 = gtk_button_new_with_label("1");
	GtkWidget *button2 = gtk_button_new_with_label("2");
	GtkWidget *button3 = gtk_button_new_with_label("3");
	GtkWidget *button4 = gtk_button_new_with_label("4");
	GtkWidget *button5 = gtk_button_new_with_label("5");
	GtkWidget *button6 = gtk_button_new_with_label("6");
	GtkWidget *button7 = gtk_button_new_with_label("7");
	GtkWidget *button8 = gtk_button_new_with_label("8");
	GtkWidget *button9 = gtk_button_new_with_label("9");
	

	GtkWidget *button_add = gtk_button_new_with_label("+");
	GtkWidget *button_minus = gtk_button_new_with_label("-");
	GtkWidget *button_mul = gtk_button_new_with_label("*");
	GtkWidget *button_div = gtk_button_new_with_label("/");
	GtkWidget *button_equal = gtk_button_new_with_label("=");
	GtkWidget *button_delete = gtk_button_new_with_label("c");
	

	// 6.将上面的按钮放入到table容器中
	gtk_table_attach_defaults(GTK_TABLE(table), entry, 0,4,0,1);
	
	gtk_table_attach_defaults(GTK_TABLE(table), button0, 0,1,4,5);
	gtk_table_attach_defaults(GTK_TABLE(table), button1, 0,1,3,4);
	gtk_table_attach_defaults(GTK_TABLE(table), button2, 1,2,3,4);
	gtk_table_attach_defaults(GTK_TABLE(table), button3, 2,3,3,4);
	gtk_table_attach_defaults(GTK_TABLE(table), button4, 0,1,2,3);
	gtk_table_attach_defaults(GTK_TABLE(table), button5, 1,2,2,3);
	gtk_table_attach_defaults(GTK_TABLE(table), button6, 2,3,2,3);
	gtk_table_attach_defaults(GTK_TABLE(table), button7, 0,1,1,2);
	gtk_table_attach_defaults(GTK_TABLE(table), button8, 1,2,1,2);
	gtk_table_attach_defaults(GTK_TABLE(table), button9, 2,3,1,2);

	gtk_table_attach_defaults(GTK_TABLE(table), button_add, 1,2,4,5);
	gtk_table_attach_defaults(GTK_TABLE(table), button_minus, 2,3,4,5);
	gtk_table_attach_defaults(GTK_TABLE(table), button_mul, 3,4,2,3);
	gtk_table_attach_defaults(GTK_TABLE(table), button_div, 3,4,3,4);
	gtk_table_attach_defaults(GTK_TABLE(table), button_equal, 3,4,4,5);
	gtk_table_attach_defaults(GTK_TABLE(table), button_delete, 3,4,1,2);


	// 7.显示所有文件
	gtk_widget_show_all(window);


	// 8.主事件循环
	gtk_main();
	
	return 0;

}
