














 int check_network ()

  {




/*

 this function is to check network going,

   maybe i should put them into the file named network/build.h



 and yes








 Get the time for comparing

*/


 time_t  time_now  =  time ( NULL );

















/*

 if it's a new startting

  the time note zero


   so something goes wrong

  and we fix it

*/


 int i;

 for (  i = 0;  i <= 3; i ++  )

  {





/*

 if it is a new site, time flag is zero

*/

 if (  gop_connection . time [ i ]  == 0  )




  {


/*

 clean them

 give them a value

*/

 gop_connection . time [ i ] = time_now;

  }






  }



















/*

 check them  1 by 1

*/


 for (  i = 0; i <= 4; i ++  )

  {



/*

 p.s

 4th  is time number and connection descriptor

 for connectted to smile

*/







/*

 check the time out

   and reconnect by speed, return the connect not by configuration

 if for first 0-3



 and it's different for 4

  it is to note smile things

*/

 if (  i < 4  )


  {













/*

 if connection is available,

 check the time of last connectting.


 clean them when it's stop over 9 seconeds

 (  it's 3 seconds at the beginning, and we changed it  )


 and make sure it's not a new starting waitting site




 if they doesn't move over 9 secend, and are connecttd

 this time could be not conectted

 we do something



 and sometimes the connection does not finish

 and another went away


 and it could be stack



  we should let it go

 and this may be more quick than cleaning all of this

*/














 if (

      strcmp ( gop_connection . how [ i ], "Wait" )  != 0
 &&   strcmp ( gop_connection . how [ i ], ""     )  != 0

    )

  {


/*

 if it isn't keep talking

*/
















/*

 3 seconds for  recive / send  waitting

 9 seconds for doesn't connect

*/




 if  (

       time_now - gop_connection . time [ i ]  >=  3
 &&    time_now - gop_connection . time [ i ]  <   9

     )

  {




/*

 check

 is the connection still running but another not ?


 this is better to short than connection running, 3 seconds may be ok

*/


 if (  gop_connection . connection [ i ]  >  0  )

  {



/*

 it is still  send / recive

 ...


 after close the connection it return -1 and turn to end of round there

*/

 close ( gop_connection . connection [ i ] );



  }




/*

 this round for if

*/

  }




















/*

 if they are not connectted any more

 we should clean them

*/

 else if  (  time_now - gop_connection . time [ i ]  >=  9  )

  {





/*

 prepare to note this

*/

 char note_buffer [ 32 ];





/*

 clean all about this

*/

 clean_connection ( i, "all" );






/*

 it's two way betwin   connector and connectted

 to note



 and this is connector's

*/

 if (  i == 0  )

  {





/*

 print it out


 two for once

*/

/*

 output_print ( "string", "connector close with " );

 output_print ( "string",  gop_connection . address_ip [ 0 ] );

 output_print ( "string", "\n" );

*/



/*

 save the note

*/

 strcpy ( note_buffer,   "connectting close with " );

 strcat ( note_buffer,    gop_connection . address_ip [ 0 ] );


 note_save ( "connector", note_buffer, "now" );



 strcat ( note_buffer, "\n" );

 output_print ( "string", note_buffer );

  }








/*

 the way for connecteed

*/

 else {








/*

 note connectted note

 print out

*/

/*

 output_print ( "string", "connectted close with  " );

 output_print ( "string",  gop_connection . address_ip [ i ] );

 output_print ( "string", "\n" );

*/


/*

 prepare to note

*/

 strcpy ( note_buffer,  "connectted close with " );

 strcat ( note_buffer, gop_connection . address_ip [ i ] );



/*

 save it

*/

 note_save ( "connectted", note_buffer, "now" );



 strcat ( note_buffer, "\n" );

 output_print ( "string", note_buffer );



/*

 for if about its site

*/

  }











/*

 for if its connection time

*/

  }








/*

 this round is for if it is connectting

*/

  }




















/*

 reconnect to the high speed one


 this is good

 cause connectted by several

  make this slow

  the highspeed to do this, make them connect stable

 make them faster, make it good


 faster be faster




 and

 They are high speed board i used

   do not need this for now

  may restart it in the mind of trees plan


  maybe now

*/


 if (

      strcmp ( gop_connection . how [ i ],          "Connectted" )  == 0

 &&   strcmp ( gop_connection . information [ i ],  ""           )  != 0


    )


  {




/*

 since i used information trees i used them straightly

 instead of read the information here

*/


/*

 char *  note_pointer;

 char    note_buffer [ 1024 ];


 int   note_cores;

 int   note_frequency;




 strcpy (
          note_buffer,
          strstr (
                   strstr ( gop_connection . information [ i ], "CPU CORES" ),
                   ":"
                 ) + 1
        );

 * strchr ( note_buffer, '\n') = '\0';

 note_cores = atoi ( note_buffer );




 strcpy (
          note_buffer,
          strstr (
                   strstr( gop_connection . information [ i ], "CPU FREQUENCY" ),
                   ":"
                 ) + 1
        );

 * strchr ( note_buffer, '\n' ) = '\0';

 note_frequency = atoi ( note_buffer );

*/











/*

 compare them


 at the beginning, we let them change site

 when quicker is quicker more than 2 times

  but now we let it quicker more any one little



 if the one is blank we don't need to reset it

*/



 if (

      gop_network . about . cpu . cores  *  gop_network . about . cpu . frequency

  >             gop_about . cpu . cores  *            gop_about . cpu . frequency

    )

  {




/*

 reconnect for bigger speed

*/

 clean_connection( 0, "all" );











/*

 if we connect to ourself in the configuration

 we dont let it connect to us again

 then we are going to connect them

 make a loop


 so we let it connect itself



    _________
   /         \
   |         v

   we        mate

   ^          |       ( loop )
   |__________|

*/




 char buffer_ip [ 32 ];


/*

 by default, we want it connect to what we connect

*/

 strcpy (  buffer_ip, gop_connection . address_ip [ 0 ]  );







/*

 compare it with address here

 if it is a address here, we change the plan

 and let it connect to itself

*/


 int ii;

 for (
       ii  = 1;
       ii <= gop_about . network . ip_number;
       ii ++
     )

  {


 if (

      strcmp ( note_ip, gop_about . network . ip [ ii ] [ 2 ] ) == 0

    )

  {





/*

 the connector connect  our address, don't send it

 send the address itself

*/

 strcpy ( note_ip, gop_connection . address_ip [ i ] );

 break;



/*

 this round for for

*/

  }





/*

 this round for if

*/

  }







/*

 prepare the message

*/



 char * note_print;

 int * note_print_lenth;


 note_print_lenth = malloc ( sizeof ( int ) );



 * note_print_lenth  = strlen ( "smile to bigger : " );

 * note_print_lenth += strlen ( note_ip );

 * note_print_lenth += 1;




 note_print = malloc ( * note_print_lenth );



 strcpy ( note_print, "smile to bigger : " );

 strcat ( note_print, note_ip );

 strcat ( note_print, "\n" );


 output_print ( "string", note_print );



 free ( note_print_lenth );

 free ( note_print );


/*

 output_print ( "string", "smile to bigger : " );

 output_print ( "string",  buffer_ip );

 output_print ( "string", "\n" );

*/












 char note_command [ 32 ];

 strcpy ( note_command, "Smile." );

 strcat ( note_command, "\n" );

 strcat ( note_command, note_ip );



/*

 and the port
 ...



 why we fresh the time note

*/

 gop_connection . time [ 0 ] = time ( NULL );



/*

 load the message we will send

*/


 strcpy ( gop_connection . command [ i ], note_command );





/*

 connect to this bigger

*/

 strcpy ( gop_connection . address_ip [ 0 ], gop_connection . address_ip [ i ] );





/*

 for if cpu

*/

  }






/*

 for sub-check

*/

  }



















/*

 if we let it connect some addrees

 by some way without configuration before


 this usually be a special thing

 we let it come back when it don't connect it anymore


 not for smile this relation

*/

 if (

      strcmp ( gop_connection . how [ 0 ], "Wait" )  == 0


 &&   (

        strcmp (  gop_connection . address_ip [ 0 ],  gop_hope . network . address_to  ) != 0

        ||        gop_connection . port [ 0 ]    !=   gop_hope . network . port_to
      )


    )


  {





/*

 if smiled to another, not to reset it.


 If the target ip in plan

 connectting to u


 it make a loop

  u connectting to it again



 when it break the list without that ip

 and return

*/


 for (  i = 1; i <= 3; i ++  )


  {







/*

 if it smiled before

 fresh the time note

*/

 if (

      strcmp ( gop_connection . address_ip [ i ], gop_hope . network . address_to ) == 0

 &&            gop_connection . port [ i ]   ==   gop_hope . network . port_to

    )

  {




/*

 this time we don't reset it

 fresh the time..


 time symbol used by another too

 and we should be careful to use it

*/

 gop_connection . time [ 0 ]  =  time ( NULL );




/*

 this round is for if smiled

*/

  }




/*

 this round is for for all connectted

*/

  }





















/*

 if the check time of connectting

 is in 9 seconds

  & the connector doesn't get the

 ip in the plan

    return it

*/


 if (  time_now - gop_connection . time [ 0 ]  >= 9  )

  {


 output_print( "string", "connection reset.\n" );


 strcpy ( gop_connection . address_ip [ 0 ],  gop_hope . network . address_to );

          gop_connection . port [ 0 ]     =   gop_hope .  port_to;


  }




/*

 this round is for if it connect to a ip without hope

*/

  }






/*

 this round is for a site  1 - 3

*/

  }














 else if ( i == 4 )


  {



/*

 it is for smile  and  can't recive or send

*/


 if (
      time_now  -  gop_connection . time [ i ]  >=  9

 &&   gop_connection . connection [ i ]  >  0

    )

  {


/*

 let it go

*/

 close ( gop_connection . connection [ i ] );


  }














  return 0;


  }
