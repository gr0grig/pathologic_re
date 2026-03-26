// @IMPORTS: ShowCursor/0,SetOwnerDraw/1,GetWindowSize/2,GetConversation/1,UITrace/1,ProcessEvents/0,PrintInWidth/9
// @STRINGS: W:null conversation|A:GetNPCName|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0x16 vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0;
	PrintInWidth(var_4_int, "default", (int)0, (int)0, var_1_int, var_0_string, (float)0.501960813999176, (float)0.501960813999176, (float)0.501960813999176);
	return 2;
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_object = Obj(); var_4_object = Obj();
	ShowCursor();
	SetOwnerDraw((bool)1);
	GetWindowSize(var_1_int, var_2_int);
	GetConversation(var_4_object);
	var_6_bool = var_4_object == 0; //@ne
	if(var_6_bool != 0) {
		UITrace("null conversation");
		return 2;
	}
	@@var_4_object:GetNPCName(var_0_string);
	ProcessEvents();
	return 2;
}
EMIT "Stack[-1] = 0";


