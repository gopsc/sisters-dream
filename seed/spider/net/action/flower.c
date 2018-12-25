



 int action_flower (

                     const char * that_type

                   )


  {









/*

 the preparation



 the buffer of commandline

*/


 char  note_commandline [ 128 ];












/*

 the buffer of file name

*/

 char note_name [ 128 ];


 strcpy ( note_name, gop_configurations . path_the );

 strcat ( note_name, "/flower.c" );












/*

 the result of gcc

 this could be very long

 and maybe take a judge in the commandline get program


 we could use malooc

*/


 char  note_result [ 102400 ];













/*

 sometimes the machine does not install the alsa-lib

  alsa is one of the software the we can use to corde

  so we have two kind of resource to program

*/



 if  (  strcmp ( that_type, "base" )  ==  0  )


  {








/*

 the version of base

 with the blank corde program

*/


 strcpy ( note_commandline, "gcc " );

 strcat ( note_commandline, note_name );

 strcat ( note_commandline, " -lm" );
 strcat ( note_commandline, " -lpthread" );
 strcat ( note_commandline, " -o" );
 strcat ( note_commandline, " " );

 strcat ( note_commandline, gop_configurations . path_the );
 strcat ( note_commandline, "/?" );


  }









 else if  (  strcmp ( that_type, "alsa" )  ==  0  )


  {

/*

 the version of alsa

 with the alsa corde program

 used the alsa-lib

*/

 strcpy ( note_commandline, "gcc " );

 strcat ( note_commandline, note_name );

 strcat ( note_commandline, " -lm" );

 strcat ( note_commandline, " -lpthread" );
 strcat ( note_commandline, " -lasound" );
 strcat ( note_commandline, " -o" );
 strcat ( note_commandline, " " );

 strcat ( note_commandline, gop_configurations . path_the );
 strcat ( note_commandline, "/" );
 strcat ( note_commandline, "?" );


  }









/*

 run the command

*/


 commandline_get ( note_commandline, note_result );







/*

 clean the code

*/


 remove ( note_name );









 return 1;


  }

