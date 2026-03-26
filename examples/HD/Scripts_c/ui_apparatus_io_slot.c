// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3,SendMessageToParent/1,SetTooltip/2,GetInvItemSprite/2,LoadImage/1,GetInvItemMaxStackSize/2,SetTooltip/3
// @STRINGS: W:default|W:selected|A:GetItemID
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,string params=0
// @EVENT_0: op=0xa vars=
// @EVENT_2: op=0x12 vars=int,int
// @EVENT_6: op=0x17 vars=int,int
// @EVENT_3: op=0x1c vars=int,int
// @EVENT_200: op=0x1e vars=int,string,object
// @PE: 0x12,0x17,0x1c

task_0_event_0(var_0_int, var_1_object, var_2_string)
{
	var_3_bool = var_1_object == 0; //@nz
	if(var_3_bool != 0) {
		return 0;
	}
	Blit(var_2_string, (int)1, (int)1);
	return 0;
}


task_0_event_2(var_0_int, var_1_object, var_2_string, var_3_int, var_4_int)
{
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_6(var_0_int, var_1_object, var_2_string, var_3_int, var_4_int)
{
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_3(var_0_int, var_1_object, var_2_string, var_3_int, var_4_int)
{
	return 0;
}


task_0_event_200(var_0_int, var_1_object, var_2_string, var_3_int, var_4_string, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_9_int = var_3_int & (int)65536;
	if(var_9_int != 0) {
		return 2;
	}
	var_11_int = var_3_int & (int)16384;
	if(var_11_int != 0) {
		SetBackground("selected");
	} else {
			SetBackground("default");
	}
	var_14_int = var_3_int & (int)32768;
	if(var_14_int != 0) {
		var_1_object = 0;
		SetTooltip((int)-1, "");
		return 2;
	}
	var_1_object = var_5_object;
	var_17_object = var_1_object;
	if(var_17_object != 0) {
		@@@var_1_object:GetItemID(var_7_int);
		GetInvItemSprite(var_2_string, var_7_int);
		LoadImage(var_2_string);
		GetInvItemMaxStackSize(var_0_int, var_7_int);
		SetTooltip((int)1, "", var_1_object);
	} else {
		SetTooltip((int)-1, "");

	}
	return 2;
	
}


main(var_0_int, var_1_object, var_2_string)
{
	var_1_object = 0;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


