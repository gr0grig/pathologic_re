// @IMPORTS: IsExistingLoop/2,KillTimer/1,FadeMusic2/0,WaitForMusicEnd2/0,GetRegionMusic/1,AdvanceRegionMusic/0,SetTimer/2,Trace/1,PlayMusic1/1,WaitForMusicEnd1/0,Hold/0,GetRegionLoopCount/1,irand/2,GetRegionLoop/2,IsPlayingMusic2/1,PlayMusic2/1,IsExistingMusic/2,FadeMusic1/0,StopGroup0/0,StopMusic2/0,PlayGlobalMusic/1
// @STRINGS: W:Playing music: |W:Nothing to play|W:Next loop: |W:Playing loop: |W:Music time limit reached|W:loop|W:loop_stop|W:music1.ogg
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,string,string,bool params=0
// @EVENT_7: op=0x4d vars=int
// @EVENT_1000: op=0x76 vars=string,string
// @PE: 0x76

task_0_event_7(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_int)
{
	var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_4_int == (int)0;
	if(var_10_bool != 0) {
		IsPlayingMusic2(var_7_bool);
		var_11_bool = var_7_bool == 0; //@nz
		if(var_11_bool != 0) {
			var_1_string = var_2_string;
			var_13_int = "Playing loop: " + var_2_string;
			Trace(var_13_int);
			PlayMusic2(var_2_string);
			var_3_bool = false;
			func_51(var_8_bool);
		}
	} else {
		var_28_bool = var_4_int == (int)1;
		if(var_28_bool == 0) goto Label_117;
		IsExistingMusic(var_0_string, var_8_bool);
		var_29_bool = var_8_bool == 0; //@nz
		if(var_29_bool == 0) goto Label_117;
		KillTimer((int)1);
		var_31_string = var_0_string;
		if(var_31_string != 0) {
			FadeMusic1();
		} else {
			StopGroup0();
		}
		Trace("Music time limit reached");
	}
Label_117:
	return 4;
	
}


task_0_event_1000(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_string, var_5_string)
{
	var_7_bool = var_4_string == "loop";
	if(var_7_bool != 0) {
		var_9_int = "Playing loop: " + var_5_string;
		Trace(var_9_int);
		PlayMusic2(var_5_string);
		var_3_bool = true;
	} else {
		var_11_bool = var_4_string == "loop_stop";
		if(var_11_bool != 0) {
			StopMusic2();
			var_3_bool = false;
			goto Label_143;
		}
		if("play" == 0) goto Label_143;
		PlayGlobalMusic("music1.ogg");
	}
Label_143:
	return 0;
	
}


main(var_0_string, var_1_string, var_2_string, var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0;
	var_3_bool = false;
	
Label_2:
	var_6_bool = var_3_bool == 0; //@nz
	if(var_6_bool != 0) {
		IsExistingLoop(var_1_string, var_5_bool);
		var_7_bool = var_5_bool == 0; //@nz
		if(var_7_bool != 0) {
			IsExistingLoop(var_2_string, var_5_bool);
			var_8_bool = var_5_bool == 0; //@nz
			if(var_8_bool != 0) {
				KillTimer((int)0);
				FadeMusic2();
				WaitForMusicEnd2();
				func_51(var_5_bool);
			}
		}
	}
	GetRegionMusic(var_0_string);
	AdvanceRegionMusic();
	SetTimer((int)1, (int)15);
	var_25_string = var_0_string;
	if(var_25_string != 0) {
		var_27_int = "Playing music: " + var_0_string;
		Trace(var_27_int);
		PlayMusic1(var_0_string);
		WaitForMusicEnd1();
	} else {
		Trace("Nothing to play");
		Hold();
	}
	KillTimer((int)1);
	goto Label_2;
	
}
EMIT "Return(); Pop(2)";


func_51(var_2_string)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0;
	GetRegionLoopCount(var_13_int);
	var_16_int = var_13_int;
	if(var_16_int != 0) {
		irand(var_14_int, (int)40);
		var_14_int = var_14_int + (int)30;
		irand(var_15_int, var_13_int);
		GetRegionLoop(var_15_int, var_2_string);
		var_20_int = "Next loop: " + var_2_string;
		Trace(var_20_int);
		SetTimer((int)0, var_14_int);
	} else {
		KillTimer((int)0);
	}
	return 6;
	
}


