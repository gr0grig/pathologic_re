// @IMPORTS: ClientToScreen/2,GetWindowSize/2,SetOwnerDraw/1,ProcessEvents/0,Blit/3,LoadImage/2,FindVideo/2
// @STRINGS: A:StretchBlit|W:ocular|A:Stop|W:ui_no_blood.wmv|A:Play|W:ui_good_blood.wmv|W:ui_bad_blood.wmv
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int,int,int,int,int params=0
// @EVENT_0: op=0x10 vars=
// @EVENT_200: op=0x18 vars=int,string,object
// @PE: 0x18

task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int)
{
	@@@var_0_object:StretchBlit(var_1_int, var_2_int, var_3_int, var_4_int);
	Blit("ocular", (int)0, (int)0);
	return 0;
}


task_0_event_200(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_string, var_8_object)
{
	var_9_bool = var_6_int == var_5_int;
	if(var_9_bool != 0) {
		return 0;
	}
	var_10_object = var_0_object;
	if(var_10_object != 0) {
		@@@var_0_object:Stop();
	}
	var_5_int = var_6_int;
	func_37(var_7_string, var_8_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int)
{
	ClientToScreen((int)0, (int)0);
	GetWindowSize(var_3_int, var_4_int);
	func_37(var_4_int, (int)0);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_37(var_0_object, var_5_int)
{
	var_7_bool = var_5_int == (int)0;
	if(var_7_bool != 0) {
		LoadImage("ui_no_blood.wmv", (bool)1);
		FindVideo(var_0_object, "ui_no_blood.wmv");
		@@@var_0_object:Play((bool)1);
	} else {
		var_13_bool = var_5_int == (int)1;
		if(var_13_bool != 0) {
			LoadImage("ui_good_blood.wmv", (bool)1);
			FindVideo(var_0_object, "ui_good_blood.wmv");
			@@@var_0_object:Play((bool)1);
			goto Label_78;
		}
		var_19_bool = var_5_int == (int)2;
		if(var_19_bool == 0) goto Label_78;
		LoadImage("ui_bad_blood.wmv", (bool)1);
		FindVideo(var_0_object, "ui_bad_blood.wmv");
		@@@var_0_object:Play((bool)1);
	}
Label_78:
	return 0;
	
}


