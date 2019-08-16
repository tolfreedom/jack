//Standard library shit
#include <stdio.h>

//Engine Shit
#include "ww.h"

//sprites shit
#include "jack.h"

int main( int argc, char * argv[] ) {

	
	//initialization
	if(ww_window_create(argc, argv, "Pixarray", 1024, 576)) {
		printf("Closing..\n");
		return 1;
	}
	
	
	init_jack();
	
	//primary loop
	while(!ww_window_received_quit_event()) {
				
		//update events
		ww_window_update_events();	
		
		//quit
		if (keystate.esc == 1){
			printf ("ESC pressed\n") ;
			ww_window_send_quit_event() ; 
		}
		
	
						
		//jack location
		jack->pad_x = 360;
		jack->pad_y = 80;
		
		
		//draw sprites
		ww_draw_sprite(jack);
		
		
		ww_window_update_buffer() ; 
	}
	
		//cleanup
		ww_free_sprite(jack);
				
		//clean up and exit
		ww_window_destroy() ; 
		return 0;
}
