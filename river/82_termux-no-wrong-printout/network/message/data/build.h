
int control_message_data(
                            int   that_site,
                            char* buffer_send
                        ) {

    if ( strcmp(gop_connection.update[that_site], "") != 0 ) {


// add symbal only after the data added

        if ( append_message_data_update( that_site, buffer_send ) == 1 ) {

            strcat(buffer_send, symbol_next);

            return 1;}}


    return 0;}
