void net_check() {

    time_t time_now = time(NULL);

    if ( (time_now - gop_server.point_time >= 5) and gop_server.how != "Wait" ) {
        cout << "Server close with " << gop_server.address_ip << endl;
        gop_server.information = "";
        gop_server.address_ip  = box_blank;
        gop_server.how         = "Wait";
        gop_server.update      = "";
        gop_server.step_update = 0;
        gop_server.command     = "";
        file_append("/opt/gop/note/server.note", to_string(info_time));
        file_append("/opt/gop/note/server.note", "\n");
        file_append("/opt/gop/note/server.note", "Connectted break.");
        file_append("/opt/gop/note/server.note", "\n");}
    if ( (time_now - gop_client.point_time >= 5) and gop_client.how != "Wait" ) {
        gop_client.information = "";
        gop_client.how = "Wait";
        cout << "Client close with " << gop_client.address_ip << endl;
        file_append("/opt/gop/note/client.note", to_string(info_time));
        file_append("/opt/gop/note/client.note", "\n");
        file_append("/opt/gop/note/client.note", "Connect break.");
        file_append("/opt/gop/note/client.note", "\n");}}









