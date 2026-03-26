// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3,Print/4,StretchBlit/5,SendMessageToParent/1,SetTooltip/2,GetItemImage/2,LoadImage/1,GetItemMaxStackSize/2,SetTooltip/3
// @STRINGS: W:default|W:disabled|W:selected|A:GetItemID
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,object,string,bool params=0
// @EVENT_0: op=0xc vars=
// @EVENT_2: op=0x28 vars=int,int
// @EVENT_6: op=0x2d vars=int,int
// @EVENT_3: op=0x32 vars=int,int
// @EVENT_200: op=0x34 vars=int,string,object
// @PE: 0x28,0x2d,0x32

task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = var_2_object == 0; //@nz
	if(var_5_bool != 0) {
		return 0;
	}
	Blit(var_3_string, (int)1, (int)1);
	var_9_bool = var_0_int >= (int)2;
	if(var_9_bool != 0) {
		var_11_bool = var_1_int > (int)1;
		if(var_11_bool != 0) {
			Print("default", (int)2, (int)35, var_0_int);
		}
	}
	var_15_bool = var_4_bool;
	if(var_15_bool != 0) {
		StretchBlit("disabled", (int)0, (int)0, (int)50, (int)50);
	}
	return 0;
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_string, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_11_int = var_5_int & (int)65536;
	if(var_11_int != 0) {
		var_0_int = var_5_int & (int)16383;
		return 2;
	}
	var_14_int = var_5_int & (int)16384;
	if(var_14_int != 0) {
		SetBackground("selected");
	} else {
				SetBackground("default");
	}
	var_17_int = var_5_int & (int)32768;
	if(var_17_int != 0) {
		var_2_object = 0;
		SetTooltip((int)-1, "");
		return 2;
	}
	var_21_int = var_5_int & (int)131072;
	if(var_21_int != 0) {
		var_4_bool = true;
	} else {
			var_4_bool = false;

	}
	var_2_object = var_7_object;
	var_22_object = var_2_object;
	if(var_22_object != 0) {
		@@@var_2_object:GetItemID(var_9_int);
		GetItemImage(var_9_int, var_3_string);
		LoadImage(var_3_string);
		GetItemMaxStackSize(var_9_int, var_1_int);
		var_23_bool = var_4_bool;
		if(var_23_bool != 0) {
			SetTooltip((int)-1, "");
		} else {
			SetTooltip((int)4, "", var_2_object);
	}
		SetTooltip((int)-1, "");

	}
	goto Label_111;
	
Label_111:
	return 2;
	
}


main(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool)
{
	var_2_object = 0;
	var_0_int = 0;
	var_4_bool = false;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


