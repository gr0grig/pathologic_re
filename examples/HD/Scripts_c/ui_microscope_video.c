// @IMPORTS: ClientToScreen/2,GetWindowSize/2,SetOwnerDraw/1,ProcessEvents/0,StretchBlit/5,ReleaseVideo/1,Trace/1,LoadVideo/1,FindVideo/2
// @STRINGS: A:IsLost|A:Restore|A:StretchBlit|W:ocular|A:Stop|W:ui_no_blood.wmv|W:ui_blood.wmv|W:ui_diseased_blood.wmv|W:ui_diseased_alive_blood.wmv|W:ui_bull_blood.wmv|W:ui_avroks_blood.wmv|W:ui_simon_blood.wmv|W:WRONG BLOOD NUMBER|A:Play
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int,int,int,int,int,string params=0
// @EVENT_0: op=0x10 vars=
// @EVENT_200: op=0x22 vars=int,string,object
// @PE: 0x22

task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; var_9_bool = 0; var_10_bool = 0;
	@@@var_0_object:IsLost(var_9_bool);
	var_11_bool = var_9_bool;
	if(var_11_bool != 0) {
		@@@var_0_object:Restore(var_10_bool);
		var_12_bool = var_10_bool == 0; //@nz
		if(var_12_bool != 0) {
			return 4;
		}
	}
	@@@var_0_object:StretchBlit(var_1_int, var_2_int, var_3_int, var_4_int);
	StretchBlit("ocular", (int)0, (int)0, var_3_int, var_4_int);
	return 4;
}


task_0_event_200(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_string, var_7_int, var_8_string, var_9_object)
{
	var_10_bool = var_7_int == var_5_int;
	if(var_10_bool != 0) {
		return 0;
	}
	var_11_object = var_0_object;
	if(var_11_object != 0) {
		@@@var_0_object:Stop();
	}
	var_5_int = var_7_int;
	func_47(var_7_int, var_8_string, var_9_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_string)
{
	ClientToScreen((int)0, (int)0);
	GetWindowSize(var_3_int, var_4_int);
	func_47(var_4_int, (int)0, var_6_string);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_47(var_0_object, var_5_int, var_6_string)
{
	ReleaseVideo(var_6_string);
	var_8_bool = var_5_int == (int)0;
	if(var_8_bool != 0) {
		var_6_string = "ui_no_blood.wmv";
	} else {
		var_11_bool = var_5_int == (int)1;
		if(var_11_bool != 0) {
			var_6_string = "ui_blood.wmv";
			goto Label_88;
		}
		var_13_bool = var_5_int == (int)2;
		if(var_13_bool != 0) {
			var_6_string = "ui_diseased_blood.wmv";
			goto Label_88;
		}
		var_15_bool = var_5_int == (int)3;
		if(var_15_bool != 0) {
			var_6_string = "ui_diseased_alive_blood.wmv";
			goto Label_88;
		}
		var_17_bool = var_5_int == (int)4;
		if(var_17_bool != 0) {
			var_6_string = "ui_bull_blood.wmv";
			goto Label_88;
		}
		var_19_bool = var_5_int == (int)5;
		if(var_19_bool != 0) {
			var_6_string = "ui_avroks_blood.wmv";
			goto Label_88;
		}
		var_21_bool = var_5_int == (int)6;
		if(var_21_bool != 0) {
			var_6_string = "ui_simon_blood.wmv";
			goto Label_88;
		}
		Trace("WRONG BLOOD NUMBER");
		return 0;
	}
Label_88:
	LoadVideo(var_6_string);
	FindVideo(var_0_object, var_6_string);
	@@@var_0_object:Play((bool)1);
	return 0;
	
}


