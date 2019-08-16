



// #ifdef jack_SPRITE_H
// #error "jack already exists"
// #else
#ifndef jack_SPRITE_H
#define jack_SPRITE_H

#include "ww.h"

// declare sprite
extern ww_sprite_t * jack;
ww_sprite_t * jack = NULL;


	
	// declare animation 
	extern ww_animation_t * jack_Animation_0;
	ww_animation_t * jack_Animation_0 = NULL;
	
	
		
		//declare frame 
		extern ww_frame_t * jack_Animation_0_Frame_0;
		ww_frame_t * jack_Animation_0_Frame_0 = NULL;
		
		
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_swordScabbard;
		ww_polygon_t * jack_Animation_0_Frame_0_swordScabbard = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_neckGrey;
		ww_polygon_t * jack_Animation_0_Frame_0_neckGrey = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_leftArm;
		ww_polygon_t * jack_Animation_0_Frame_0_leftArm = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_rightArm;
		ww_polygon_t * jack_Animation_0_Frame_0_rightArm = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_whiteRobe;
		ww_polygon_t * jack_Animation_0_Frame_0_whiteRobe = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_centerSash;
		ww_polygon_t * jack_Animation_0_Frame_0_centerSash = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_belt1;
		ww_polygon_t * jack_Animation_0_Frame_0_belt1 = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_belt2;
		ww_polygon_t * jack_Animation_0_Frame_0_belt2 = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_leftArmpit;
		ww_polygon_t * jack_Animation_0_Frame_0_leftArmpit = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_rightArmpit;
		ww_polygon_t * jack_Animation_0_Frame_0_rightArmpit = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_leftHand;
		ww_polygon_t * jack_Animation_0_Frame_0_leftHand = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_leftThumb;
		ww_polygon_t * jack_Animation_0_Frame_0_leftThumb = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_face;
		ww_polygon_t * jack_Animation_0_Frame_0_face = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_rightHand;
		ww_polygon_t * jack_Animation_0_Frame_0_rightHand = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_rightThumb;
		ww_polygon_t * jack_Animation_0_Frame_0_rightThumb = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_chin;
		ww_polygon_t * jack_Animation_0_Frame_0_chin = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_mouths;
		ww_polygon_t * jack_Animation_0_Frame_0_mouths = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_nose;
		ww_polygon_t * jack_Animation_0_Frame_0_nose = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_rightEyebrow;
		ww_polygon_t * jack_Animation_0_Frame_0_rightEyebrow = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_leftEyebrow;
		ww_polygon_t * jack_Animation_0_Frame_0_leftEyebrow = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_adamsapple;
		ww_polygon_t * jack_Animation_0_Frame_0_adamsapple = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_pupilLeft;
		ww_polygon_t * jack_Animation_0_Frame_0_pupilLeft = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_pupilRight;
		ww_polygon_t * jack_Animation_0_Frame_0_pupilRight = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_rightEye;
		ww_polygon_t * jack_Animation_0_Frame_0_rightEye = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_leftEye;
		ww_polygon_t * jack_Animation_0_Frame_0_leftEye = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_hair;
		ww_polygon_t * jack_Animation_0_Frame_0_hair = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_swordHilt;
		ww_polygon_t * jack_Animation_0_Frame_0_swordHilt = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_swordColor;
		ww_polygon_t * jack_Animation_0_Frame_0_swordColor = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_swordStripeBottom;
		ww_polygon_t * jack_Animation_0_Frame_0_swordStripeBottom = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_swordStripTop;
		ww_polygon_t * jack_Animation_0_Frame_0_swordStripTop = NULL;
		
		extern ww_polygon_t * jack_Animation_0_Frame_0_armCrease;
		ww_polygon_t * jack_Animation_0_Frame_0_armCrease = NULL;
		
		
		void init_jack_Animation_0_Frame_0(){
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_swordScabbard_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_swordScabbard_x[4] = { 266, 263, 212, 210 };
			short jack_Animation_0_Frame_0_swordScabbard_y[4] = { 326, 345, 391, 373 };
			jack_Animation_0_Frame_0_swordScabbard = ww_new_polygon(jack_Animation_0_Frame_0_swordScabbard_color, jack_Animation_0_Frame_0_swordScabbard_x, jack_Animation_0_Frame_0_swordScabbard_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_neckGrey_color = { 176, 176, 176 };
			short jack_Animation_0_Frame_0_neckGrey_x[8] = { 282, 301, 345, 331, 306, 281, 264, 296 };
			short jack_Animation_0_Frame_0_neckGrey_y[8] = { 271, 271, 225, 214, 242, 211, 225, 253 };
			jack_Animation_0_Frame_0_neckGrey = ww_new_polygon(jack_Animation_0_Frame_0_neckGrey_color, jack_Animation_0_Frame_0_neckGrey_x, jack_Animation_0_Frame_0_neckGrey_y, 8);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_leftArm_color = { 176, 176, 176 };
			short jack_Animation_0_Frame_0_leftArm_x[4] = { 268, 211, 215, 271 };
			short jack_Animation_0_Frame_0_leftArm_y[4] = { 321, 323, 298, 304 };
			jack_Animation_0_Frame_0_leftArm = ww_new_polygon(jack_Animation_0_Frame_0_leftArm_color, jack_Animation_0_Frame_0_leftArm_x, jack_Animation_0_Frame_0_leftArm_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_rightArm_color = { 176, 176, 176 };
			short jack_Animation_0_Frame_0_rightArm_x[4] = { 338, 389, 393, 340 };
			short jack_Animation_0_Frame_0_rightArm_y[4] = { 308, 298, 316, 322 };
			jack_Animation_0_Frame_0_rightArm = ww_new_polygon(jack_Animation_0_Frame_0_rightArm_color, jack_Animation_0_Frame_0_rightArm_x, jack_Animation_0_Frame_0_rightArm_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_whiteRobe_color = { 255, 255, 255 };
			short jack_Animation_0_Frame_0_whiteRobe_x[27] = { 236, 271, 217, 224, 232, 243, 253, 265, 297, 282, 301, 346, 352, 358, 363, 367, 374, 382, 388, 390, 339, 338, 344, 350, 356, 362, 371 };
			short jack_Animation_0_Frame_0_whiteRobe_y[27] = { 488, 307, 302, 279, 263, 249, 234, 227, 254, 270, 271, 226, 229, 233, 240, 246, 256, 270, 285, 298, 307, 330, 359, 391, 420, 449, 488 };
			jack_Animation_0_Frame_0_whiteRobe = ww_new_polygon(jack_Animation_0_Frame_0_whiteRobe_color, jack_Animation_0_Frame_0_whiteRobe_x, jack_Animation_0_Frame_0_whiteRobe_y, 27);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_centerSash_color = { 176, 176, 176 };
			short jack_Animation_0_Frame_0_centerSash_x[4] = { 286, 298, 299, 272 };
			short jack_Animation_0_Frame_0_centerSash_y[4] = { 292, 291, 487, 487 };
			jack_Animation_0_Frame_0_centerSash = ww_new_polygon(jack_Animation_0_Frame_0_centerSash_color, jack_Animation_0_Frame_0_centerSash_x, jack_Animation_0_Frame_0_centerSash_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_belt1_color = { 254, 255, 255 };
			short jack_Animation_0_Frame_0_belt1_x[4] = { 274, 331, 331, 275 };
			short jack_Animation_0_Frame_0_belt1_y[4] = { 279, 281, 273, 271 };
			jack_Animation_0_Frame_0_belt1 = ww_new_polygon(jack_Animation_0_Frame_0_belt1_color, jack_Animation_0_Frame_0_belt1_x, jack_Animation_0_Frame_0_belt1_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_belt2_color = { 254, 255, 255 };
			short jack_Animation_0_Frame_0_belt2_x[4] = { 275, 333, 333, 272 };
			short jack_Animation_0_Frame_0_belt2_y[4] = { 292, 290, 285, 283 };
			jack_Animation_0_Frame_0_belt2 = ww_new_polygon(jack_Animation_0_Frame_0_belt2_color, jack_Animation_0_Frame_0_belt2_x, jack_Animation_0_Frame_0_belt2_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_leftArmpit_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_leftArmpit_x[3] = { 273, 277, 271 };
			short jack_Animation_0_Frame_0_leftArmpit_y[3] = { 272, 255, 263 };
			jack_Animation_0_Frame_0_leftArmpit = ww_new_polygon(jack_Animation_0_Frame_0_leftArmpit_color, jack_Animation_0_Frame_0_leftArmpit_x, jack_Animation_0_Frame_0_leftArmpit_y, 3);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_rightArmpit_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_rightArmpit_x[3] = { 336, 339, 333 };
			short jack_Animation_0_Frame_0_rightArmpit_y[3] = { 255, 265, 272 };
			jack_Animation_0_Frame_0_rightArmpit = ww_new_polygon(jack_Animation_0_Frame_0_rightArmpit_color, jack_Animation_0_Frame_0_rightArmpit_x, jack_Animation_0_Frame_0_rightArmpit_y, 3);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_leftHand_color = { 254, 255, 169 };
			short jack_Animation_0_Frame_0_leftHand_x[21] = { 241, 249, 256, 259, 260, 259, 256, 254, 254, 254, 247, 239, 236, 224, 219, 216, 220, 227, 230, 225, 244 };
			short jack_Animation_0_Frame_0_leftHand_y[21] = { 332, 337, 341, 347, 353, 359, 359, 359, 363, 367, 368, 371, 365, 358, 356, 351, 344, 338, 334, 323, 322 };
			jack_Animation_0_Frame_0_leftHand = ww_new_polygon(jack_Animation_0_Frame_0_leftHand_color, jack_Animation_0_Frame_0_leftHand_x, jack_Animation_0_Frame_0_leftHand_y, 21);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_leftThumb_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_leftThumb_x[4] = { 243, 246, 252, 254 };
			short jack_Animation_0_Frame_0_leftThumb_y[4] = { 354, 348, 352, 356 };
			jack_Animation_0_Frame_0_leftThumb = ww_new_polygon(jack_Animation_0_Frame_0_leftThumb_color, jack_Animation_0_Frame_0_leftThumb_x, jack_Animation_0_Frame_0_leftThumb_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_face_color = { 254, 255, 169 };
			short jack_Animation_0_Frame_0_face_x[27] = { 329, 328, 327, 324, 320, 308, 294, 291, 287, 287, 285, 283, 279, 279, 285, 284, 281, 305, 331, 326, 326, 326, 328, 335, 334, 333, 331 };
			short jack_Animation_0_Frame_0_face_y[27] = { 163, 151, 139, 137, 139, 143, 139, 138, 139, 141, 162, 152, 157, 165, 171, 183, 210, 241, 213, 200, 193, 184, 171, 166, 160, 155, 154 };
			jack_Animation_0_Frame_0_face = ww_new_polygon(jack_Animation_0_Frame_0_face_color, jack_Animation_0_Frame_0_face_x, jack_Animation_0_Frame_0_face_y, 27);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_rightHand_color = { 254, 255, 169 };
			short jack_Animation_0_Frame_0_rightHand_x[18] = { 355, 357, 348, 344, 342, 344, 348, 354, 362, 366, 373, 379, 384, 383, 380, 374, 369, 371 };
			short jack_Animation_0_Frame_0_rightHand_y[18] = { 320, 329, 334, 340, 352, 358, 359, 364, 367, 365, 359, 355, 351, 346, 340, 334, 329, 318 };
			jack_Animation_0_Frame_0_rightHand = ww_new_polygon(jack_Animation_0_Frame_0_rightHand_color, jack_Animation_0_Frame_0_rightHand_x, jack_Animation_0_Frame_0_rightHand_y, 18);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_rightThumb_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_rightThumb_x[8] = { 349, 350, 354, 359, 360, 359, 357, 352 };
			short jack_Animation_0_Frame_0_rightThumb_y[8] = { 357, 348, 348, 350, 354, 357, 351, 350 };
			jack_Animation_0_Frame_0_rightThumb = ww_new_polygon(jack_Animation_0_Frame_0_rightThumb_color, jack_Animation_0_Frame_0_rightThumb_x, jack_Animation_0_Frame_0_rightThumb_y, 8);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_chin_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_chin_x[9] = { 324, 321, 319, 294, 292, 287, 294, 297, 319 };
			short jack_Animation_0_Frame_0_chin_y[9] = { 187, 198, 200, 200, 198, 180, 195, 198, 198 };
			jack_Animation_0_Frame_0_chin = ww_new_polygon(jack_Animation_0_Frame_0_chin_color, jack_Animation_0_Frame_0_chin_x, jack_Animation_0_Frame_0_chin_y, 9);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_mouths_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_mouths_x[9] = { 299, 305, 309, 312, 314, 315, 313, 308, 302 };
			short jack_Animation_0_Frame_0_mouths_y[9] = { 176, 174, 173, 173, 176, 174, 171, 171, 172 };
			jack_Animation_0_Frame_0_mouths = ww_new_polygon(jack_Animation_0_Frame_0_mouths_color, jack_Animation_0_Frame_0_mouths_x, jack_Animation_0_Frame_0_mouths_y, 9);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_nose_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_nose_x[7] = { 312, 312, 310, 302, 304, 307, 310 };
			short jack_Animation_0_Frame_0_nose_y[7] = { 148, 167, 168, 167, 166, 166, 166 };
			jack_Animation_0_Frame_0_nose = ww_new_polygon(jack_Animation_0_Frame_0_nose_color, jack_Animation_0_Frame_0_nose_x, jack_Animation_0_Frame_0_nose_y, 7);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_rightEyebrow_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_rightEyebrow_x[5] = { 312, 318, 324, 326, 319 };
			short jack_Animation_0_Frame_0_rightEyebrow_y[5] = { 147, 147, 143, 145, 149 };
			jack_Animation_0_Frame_0_rightEyebrow = ww_new_polygon(jack_Animation_0_Frame_0_rightEyebrow_color, jack_Animation_0_Frame_0_rightEyebrow_x, jack_Animation_0_Frame_0_rightEyebrow_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_leftEyebrow_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_leftEyebrow_x[11] = { 290, 288, 294, 296, 300, 303, 305, 306, 304, 300, 297 };
			short jack_Animation_0_Frame_0_leftEyebrow_y[11] = { 143, 146, 148, 149, 150, 151, 151, 147, 149, 148, 147 };
			jack_Animation_0_Frame_0_leftEyebrow = ww_new_polygon(jack_Animation_0_Frame_0_leftEyebrow_color, jack_Animation_0_Frame_0_leftEyebrow_x, jack_Animation_0_Frame_0_leftEyebrow_y, 11);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_adamsapple_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_adamsapple_x[5] = { 316, 308, 306, 302, 306 };
			short jack_Animation_0_Frame_0_adamsapple_y[5] = { 202, 224, 226, 219, 223 };
			jack_Animation_0_Frame_0_adamsapple = ww_new_polygon(jack_Animation_0_Frame_0_adamsapple_color, jack_Animation_0_Frame_0_adamsapple_x, jack_Animation_0_Frame_0_adamsapple_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_pupilLeft_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_pupilLeft_x[4] = { 295, 299, 303, 307 };
			short jack_Animation_0_Frame_0_pupilLeft_y[4] = { 150, 154, 153, 152 };
			jack_Animation_0_Frame_0_pupilLeft = ww_new_polygon(jack_Animation_0_Frame_0_pupilLeft_color, jack_Animation_0_Frame_0_pupilLeft_x, jack_Animation_0_Frame_0_pupilLeft_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_pupilRight_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_pupilRight_x[4] = { 313, 313, 322, 320 };
			short jack_Animation_0_Frame_0_pupilRight_y[4] = { 154, 149, 149, 152 };
			jack_Animation_0_Frame_0_pupilRight = ww_new_polygon(jack_Animation_0_Frame_0_pupilRight_color, jack_Animation_0_Frame_0_pupilRight_x, jack_Animation_0_Frame_0_pupilRight_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_rightEye_color = { 255, 255, 255 };
			short jack_Animation_0_Frame_0_rightEye_x[5] = { 313, 320, 324, 322, 313 };
			short jack_Animation_0_Frame_0_rightEye_y[5] = { 154, 152, 148, 156, 159 };
			jack_Animation_0_Frame_0_rightEye = ww_new_polygon(jack_Animation_0_Frame_0_rightEye_color, jack_Animation_0_Frame_0_rightEye_x, jack_Animation_0_Frame_0_rightEye_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_leftEye_color = { 255, 255, 255 };
			short jack_Animation_0_Frame_0_leftEye_x[5] = { 305, 301, 295, 289, 291 };
			short jack_Animation_0_Frame_0_leftEye_y[5] = { 154, 158, 156, 149, 147 };
			jack_Animation_0_Frame_0_leftEye = ww_new_polygon(jack_Animation_0_Frame_0_leftEye_color, jack_Animation_0_Frame_0_leftEye_x, jack_Animation_0_Frame_0_leftEye_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_hair_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_hair_x[26] = { 286, 283, 282, 303, 303, 298, 303, 303, 299, 307, 313, 309, 313, 308, 308, 333, 332, 329, 328, 324, 320, 306, 294, 292, 288, 287 };
			short jack_Animation_0_Frame_0_hair_y[26] = { 162, 152, 134, 135, 131, 130, 128, 123, 116, 117, 115, 124, 127, 130, 134, 133, 152, 162, 139, 136, 139, 144, 139, 138, 139, 142 };
			jack_Animation_0_Frame_0_hair = ww_new_polygon(jack_Animation_0_Frame_0_hair_color, jack_Animation_0_Frame_0_hair_x, jack_Animation_0_Frame_0_hair_y, 26);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_swordHilt_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_swordHilt_x[15] = { 335, 334, 333, 331, 334, 338, 340, 337, 337, 339, 342, 345, 347, 352, 343 };
			short jack_Animation_0_Frame_0_swordHilt_y[15] = { 294, 288, 284, 273, 272, 272, 275, 278, 282, 285, 287, 286, 285, 293, 299 };
			jack_Animation_0_Frame_0_swordHilt = ww_new_polygon(jack_Animation_0_Frame_0_swordHilt_color, jack_Animation_0_Frame_0_swordHilt_x, jack_Animation_0_Frame_0_swordHilt_y, 15);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_swordColor_color = { 255, 170, 0 };
			short jack_Animation_0_Frame_0_swordColor_x[4] = { 337, 342, 405, 396 };
			short jack_Animation_0_Frame_0_swordColor_y[4] = { 277, 287, 255, 241 };
			jack_Animation_0_Frame_0_swordColor = ww_new_polygon(jack_Animation_0_Frame_0_swordColor_color, jack_Animation_0_Frame_0_swordColor_x, jack_Animation_0_Frame_0_swordColor_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_swordStripeBottom_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_swordStripeBottom_x[20] = { 344, 349, 349, 353, 355, 360, 364, 364, 369, 374, 375, 379, 385, 385, 390, 394, 395, 403, 404, 404 };
			short jack_Animation_0_Frame_0_swordStripeBottom_y[20] = { 285, 279, 282, 281, 275, 276, 275, 270, 272, 270, 265, 267, 264, 258, 261, 259, 253, 255, 255, 256 };
			jack_Animation_0_Frame_0_swordStripeBottom = ww_new_polygon(jack_Animation_0_Frame_0_swordStripeBottom_color, jack_Animation_0_Frame_0_swordStripeBottom_x, jack_Animation_0_Frame_0_swordStripeBottom_y, 20);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_swordStripTop_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_swordStripTop_x[16] = { 338, 344, 345, 348, 353, 355, 358, 362, 365, 371, 375, 383, 385, 388, 394, 396 };
			short jack_Animation_0_Frame_0_swordStripTop_y[16] = { 278, 278, 273, 270, 273, 266, 262, 266, 258, 261, 252, 255, 248, 247, 250, 242 };
			jack_Animation_0_Frame_0_swordStripTop = ww_new_polygon(jack_Animation_0_Frame_0_swordStripTop_color, jack_Animation_0_Frame_0_swordStripTop_x, jack_Animation_0_Frame_0_swordStripTop_y, 16);
			
			
		
		
			
			//declare layer
			ww_rgba_t jack_Animation_0_Frame_0_armCrease_color = { 0, 0, 0 };
			short jack_Animation_0_Frame_0_armCrease_x[9] = { 273, 257, 252, 247, 246, 250, 249, 250, 253 };
			short jack_Animation_0_Frame_0_armCrease_y[9] = { 278, 278, 277, 275, 271, 268, 271, 274, 276 };
			jack_Animation_0_Frame_0_armCrease = ww_new_polygon(jack_Animation_0_Frame_0_armCrease_color, jack_Animation_0_Frame_0_armCrease_x, jack_Animation_0_Frame_0_armCrease_y, 9);
			
			
		
		
			jack_Animation_0_Frame_0 = ww_new_frame(
				jack_Animation_0_Frame_0_swordScabbard,
				jack_Animation_0_Frame_0_neckGrey,
				jack_Animation_0_Frame_0_leftArm,
				jack_Animation_0_Frame_0_rightArm,
				jack_Animation_0_Frame_0_whiteRobe,
				jack_Animation_0_Frame_0_centerSash,
				jack_Animation_0_Frame_0_belt1,
				jack_Animation_0_Frame_0_belt2,
				jack_Animation_0_Frame_0_leftArmpit,
				jack_Animation_0_Frame_0_rightArmpit,
				jack_Animation_0_Frame_0_leftHand,
				jack_Animation_0_Frame_0_leftThumb,
				jack_Animation_0_Frame_0_face,
				jack_Animation_0_Frame_0_rightHand,
				jack_Animation_0_Frame_0_rightThumb,
				jack_Animation_0_Frame_0_chin,
				jack_Animation_0_Frame_0_mouths,
				jack_Animation_0_Frame_0_nose,
				jack_Animation_0_Frame_0_rightEyebrow,
				jack_Animation_0_Frame_0_leftEyebrow,
				jack_Animation_0_Frame_0_adamsapple,
				jack_Animation_0_Frame_0_pupilLeft,
				jack_Animation_0_Frame_0_pupilRight,
				jack_Animation_0_Frame_0_rightEye,
				jack_Animation_0_Frame_0_leftEye,
				jack_Animation_0_Frame_0_hair,
				jack_Animation_0_Frame_0_swordHilt,
				jack_Animation_0_Frame_0_swordColor,
				jack_Animation_0_Frame_0_swordStripeBottom,
				jack_Animation_0_Frame_0_swordStripTop,
				jack_Animation_0_Frame_0_armCrease,
				NULL 
			);
		}
		
	
	
	void init_jack_Animation_0(){
		init_jack_Animation_0_Frame_0();
		
		
		int delay[] = { 2 };
	
		jack_Animation_0 = ww_new_animation(
			delay,
			jack_Animation_0_Frame_0,
			NULL 
		);
	}
  


void init_jack(){
	
	init_jack_Animation_0();
	

	jack = ww_new_sprite( 0,
		jack_Animation_0,
		NULL
	);
	
}

#endif
