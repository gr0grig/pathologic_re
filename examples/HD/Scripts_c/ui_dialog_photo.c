// @IMPORTS: GetConversation/1,UITrace/1,LoadImage/1,SetOwnerDraw/1,GetWindowSize/2,ProcessEvents/0,StretchBlit/5,CreateWindow/3
// @STRINGS: W:null conversation|A:GetPhoto|W:dialog_photo.xml|A:DestroyWindow
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,object,int,int params=0
// @EVENT_0: op=0x16 vars=
// @EVENT_2: op=0x1b vars=int,int
// @PE: 0x1b

task_0_event_0(var_0_string, var_1_object, var_2_int, var_3_int)
{
	StretchBlit(var_0_string, (int)0, (int)0, var_2_int, var_3_int);
	return 0;
}


task_0_event_2(var_0_string, var_1_object, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_bool = var_1_object == 0; //@nz
	if(var_6_bool != 0) {
		CreateWindow("dialog_photo.xml", (bool)1, var_1_object);
	} else {
		@@@var_1_object:DestroyWindow();
	}
	return 0;
	
}


main(var_0_string, var_1_object, var_2_int, var_3_int)
{
	var_4_object = Obj(); var_5_object = Obj();
	GetConversation(var_5_object);
	var_6_bool = var_5_object == 0; //@ne
	if(var_6_bool != 0) {
		UITrace("null conversation");
		return 2;
	}
	@@var_5_object:GetPhoto(var_0_string);
	LoadImage(var_0_string);
	SetOwnerDraw((bool)1);
	GetWindowSize(var_2_int, var_3_int);
	ProcessEvents();
	return 2;
}
EMIT "Stack[-1] = 0";


