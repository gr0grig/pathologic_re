// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3,Print/4,SendMessageToParent/1,SetTooltip/2,GetInvItemSprite/2,LoadImage/1,GetInvItemMaxStackSize/2,SetTooltip/3
// @STRINGS: W:default|W:selected|A:GetItemID
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,object,string params=0
// @EVENT_0: op=0xb vars=
// @EVENT_2: op=0x1f vars=int,int
// @EVENT_6: op=0x27 vars=int,int
// @EVENT_3: op=0x2c vars=int,int
// @EVENT_200: op=0x2e vars=int,string,object
// @PE: 0x1f,0x27,0x2c

task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string)
{
	var_4_bool = var_2_object == 0; //@nz
	if(var_4_bool != 0) {
		return 0;
	}
	Blit(var_3_string, (int)1, (int)1);
	var_8_bool = var_0_int < (int)2;
	if(var_8_bool != 0) {
		return 0;
	}
	var_10_bool = var_1_int > (int)1;
	if(var_10_bool != 0) {
		Print("default", (int)2, (int)35, var_0_int);
	}
	return 0;
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	SetBackground("selected");
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_int)
{
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_10_int = var_4_int & (int)65536;
	if(var_10_int != 0) {
		var_0_int = var_4_int & (int)16383;
		return 2;
	}
	var_13_int = var_4_int & (int)16384;
	if(var_13_int != 0) {
		SetBackground("selected");
	} else {
			SetBackground("default");
	}
	var_16_int = var_4_int & (int)32768;
	if(var_16_int != 0) {
		var_2_object = 0;
		SetTooltip((int)-1, "");
	} else {
		var_2_object = var_6_object;
		var_19_object = var_2_object;
		if(var_19_object != 0) {
			@@@var_2_object:GetItemID(var_8_int);
			GetInvItemSprite(var_3_string, var_8_int);
			LoadImage(var_3_string);
			GetInvItemMaxStackSize(var_1_int, var_8_int);
			SetTooltip((int)1, "", var_2_object);
			goto Label_92;
		}
		SetTooltip((int)-1, "");

	}
Label_92:
	return 2;
	
}


main(var_0_int, var_1_int, var_2_object, var_3_string)
{
	var_2_object = 0;
	var_0_int = 1;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


