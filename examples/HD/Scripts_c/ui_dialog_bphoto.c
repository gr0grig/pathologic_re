// @IMPORTS: GetConversation/1,UITrace/1,LoadImage/1,SetOwnerDraw/1,GetWindowSize/2,ProcessEvents/0,StretchBlit/5
// @STRINGS: W:null conversation|A:GetPhoto2
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0x16 vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	StretchBlit(var_0_string, (int)0, (int)0, var_1_int, var_2_int);
	return 0;
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_object = Obj(); var_4_object = Obj();
	GetConversation(var_4_object);
	var_5_bool = var_4_object == 0; //@ne
	if(var_5_bool != 0) {
		UITrace("null conversation");
		return 2;
	}
	@@var_4_object:GetPhoto2(var_0_string);
	LoadImage(var_0_string);
	SetOwnerDraw((bool)1);
	GetWindowSize(var_1_int, var_2_int);
	ProcessEvents();
	return 2;
}
EMIT "Stack[-1] = 0";


