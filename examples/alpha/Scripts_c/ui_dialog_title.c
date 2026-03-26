// @IMPORTS: ShowCursor/0,SetOwnerDraw/1,GetConversation/1,UITrace/1,_strupr/1,ProcessEvents/0,Print/7
// @STRINGS: W:null conversation|A:GetNPCName|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string params=0
// @EVENT_0: op=0x16 vars=

task_0_event_0(var_0_string)
{
	Print("default", (int)0, (int)0, var_0_string, (float)1.0, (float)1.0, (float)1.0);
	return 0;
}


main(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj();
	ShowCursor();
	SetOwnerDraw((bool)1);
	GetConversation(var_2_object);
	var_4_bool = var_2_object == 0; //@ne
	if(var_4_bool != 0) {
		UITrace("null conversation");
		return 2;
	}
	@@var_2_object:GetNPCName(var_0_string);
	_strupr(var_0_string);
	ProcessEvents();
	return 2;
}
EMIT "Stack[-1] = 0";


