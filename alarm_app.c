#include <gtk/gtk.h>
#include <time.h>

typedef struct {
    GtkWidget *hour_entry;
    GtkWidget *minute_entry;
    GtkWidget *second_entry;
    guint alarm_id;
} AppWidgets;

int check_alarm(void *data) {
    AppWidgets *widgets = (AppWidgets *)data;
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    int set_hour = atoi(gtk_entry_get_text(GTK_ENTRY(widgets->hour_entry)));
    int set_minute = atoi(gtk_entry_get_text(GTK_ENTRY(widgets->minute_entry)));
    int set_second = atoi(gtk_entry_get_text(GTK_ENTRY(widgets->second_entry)));

    if (current_time->tm_hour == set_hour && current_time->tm_min == set_minute && current_time->tm_sec == set_second) {
        GtkWidget *dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, 
                                                   GTK_MESSAGE_INFO, GTK_BUTTONS_OK, 
                                                   "Alarm!");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
        return FALSE; // Stop the timeout function
    }

    return TRUE; // Continue calling this function
}

void on_set_alarm_clicked(GtkButton *button, AppWidgets *widgets) {
    if (widgets->alarm_id > 0) {
        g_source_remove(widgets->alarm_id);
    }
    widgets->alarm_id = g_timeout_add_seconds(1, (GSourceFunc)check_alarm, widgets);
}

int main(int argc, char *argv[]) {
    GtkBuilder *builder;
    GtkWidget *window;
    AppWidgets *widgets = g_slice_new(AppWidgets);

    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file("alarm_app.glade");
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));

    widgets->hour_entry = GTK_WIDGET(gtk_builder_get_object(builder, "hour_entry"));
    widgets->minute_entry = GTK_WIDGET(gtk_builder_get_object(builder, "minute_entry"));
    widgets->second_entry = GTK_WIDGET(gtk_builder_get_object(builder, "second_entry"));
    widgets->alarm_id = 0;

    gtk_builder_connect_signals(builder, widgets);
    g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();

    g_slice_free(AppWidgets, widgets);
    return 0;
}

